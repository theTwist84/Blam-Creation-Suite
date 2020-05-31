#pragma once

namespace blofeld
{

	constexpr unsigned long FLUID_DYNAMICS_TAG = 'fldy';

	extern s_tag_group fluid_dynamics_group;

	extern s_tag_struct_definition fluid_dynamics_squirter_block_block_struct;
	extern s_tag_block_definition fluid_dynamics_squirter_block_block;
	extern s_tag_struct_definition fluid_dynamics_inflow_block_block_struct;
	extern s_tag_block_definition fluid_dynamics_inflow_block_block;
	extern s_tag_struct_definition fluid_dynamics_outflow_block_block_struct;
	extern s_tag_block_definition fluid_dynamics_outflow_block_block;
	extern s_tag_struct_definition fluid_dynamics_obstacle_block_block_struct;
	extern s_tag_block_definition fluid_dynamics_obstacle_block_block;
	extern s_tag_block_definition fluid_dynamics_block_block;

	extern s_tag_struct_definition fluid_dynamics_struct_definition_struct_definition; // tag group
	extern s_tag_struct_definition g_single_scalar_function_evaluation_struct_struct_definition;

	extern const char* fluid_dynamics_flags_strings[];
	extern s_string_list_definition fluid_dynamics_flags;

} // namespace blofeld
