#pragma once
class c_virtual_memory_container
{
public:
	BCSAPI c_virtual_memory_container(size_t addressSpaceSize);
	BCSAPI ~c_virtual_memory_container();

	BCSAPI void* InsertHole(size_t offset, size_t size);
	BCSAPI void* InsertHole(void* pPosition, size_t size);
	BCSAPI void set_size(size_t size);
	inline char* get_data() const { return static_cast<char*>(m_pVirtualMemory); }
	inline size_t GetSize() const { return m_currentSizeAligned; }
	inline size_t GetSizeAligned() const { return m_currentSizeAligned; }

protected:
	static size_t getPageSize();

	const size_t m_pageSize;
	const size_t m_addressSpaceSize;
	size_t m_currentSize;
	size_t m_currentSizeAligned;
	LPVOID m_pVirtualMemory;
};

