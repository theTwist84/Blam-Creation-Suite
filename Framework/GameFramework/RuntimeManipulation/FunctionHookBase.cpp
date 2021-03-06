#include "gameframework-private-pch.h"

c_function_hook_base* c_function_hook_base::g_pFirstFunctionHook = nullptr;
c_function_hook_base* c_function_hook_base::g_pLastFunctionHook = nullptr;

void c_function_hook_base::init_function_hook_tree(e_engine_type engine_type, e_build build)
{
	// this iteration avoids having to do this recursively

	c_function_hook_base* pCurrentFunctionHook = g_pFirstFunctionHook;
	while (pCurrentFunctionHook)
	{
		pCurrentFunctionHook = pCurrentFunctionHook->init_node(engine_type, build);
	}
}

void c_function_hook_base::deinit_function_hook_tree(e_engine_type engine_type, e_build build)
{
	// this iteration avoids having to do this recursively

	c_function_hook_base* pCurrentFunctionHook = g_pFirstFunctionHook;
	while (pCurrentFunctionHook)
	{
		pCurrentFunctionHook = pCurrentFunctionHook->deinit_node(engine_type, build);
	}
}

c_function_hook_base* c_function_hook_base::init_node(e_engine_type engine_type, e_build build)
{
	if ((m_engine == engine_type || m_engine == _engine_type_not_set) && ((build == m_build || (m_build == _build_not_set && m_find_offset_func)) && m_isActive && !m_isHooked))
	{
		if (m_offset == 0 && m_find_offset_func)
		{
			uintptr_t foundOffset = m_find_offset_func(engine_type, build);

			if (foundOffset == ~uintptr_t())
			{
				return m_pNextFunctionHook;
			}

			m_offset = foundOffset;

			ASSERT(m_build == _build_not_set && m_offset >= get_engine_base_address(engine_type)/*, "Offset is out of bounds"*/);
			ASSERT(m_build == _build_not_set && m_offset < get_engine_top_address(engine_type, build)/*, "Offset is out of bounds"*/);
		}
		ASSERT(m_offset != 0);

		FunctionHookVarArgs<_engine_type_not_set, _build_not_set, 0, void>& rVoidThis = reinterpret_cast<FunctionHookVarArgs<_engine_type_not_set, _build_not_set, 0, void>&>(*this);

		void*& rBase = rVoidThis.GetBase();
		void*& rHook = rVoidThis.GetHook();

		const char* pFunctionName = m_name;
		char pUnknownFunctionNameBuffer[256] = {};
		if (pFunctionName == nullptr)
		{
			int count = snprintf(pUnknownFunctionNameBuffer, _countof(pUnknownFunctionNameBuffer), "unnamed<0x%zX>", m_offset);
			pUnknownFunctionNameBuffer[_countof(pUnknownFunctionNameBuffer) - 1] = 0;
			pFunctionName = pUnknownFunctionNameBuffer;
		}

		if (rHook)
		{
			LONG result = create_hook(engine_type, build, m_offset, pFunctionName, rHook, rBase);
			ASSERT(result == 0);
		}
		else
		{
			populate_function_ptr(get_engine_module_filename(engine_type), get_engine_base_address(engine_type), m_offset, rBase);
			c_console::write_line_verbose("Created function pointer for %s", pFunctionName);
		}

		m_isHooked = true;
	}
	return m_pNextFunctionHook;
}


c_function_hook_base* c_function_hook_base::deinit_node(e_engine_type engine_type, e_build build)
{
	if (m_isHooked)
	{
		m_isHooked = false; // #TODO: Do this better. We are unload the DLL so this is okay...
	}
	return m_pNextFunctionHook;
}
