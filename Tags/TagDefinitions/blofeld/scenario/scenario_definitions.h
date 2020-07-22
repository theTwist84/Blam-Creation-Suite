#pragma once

namespace blofeld
{
	extern c_constant NUMBER_OF_SCENARIO_RESOURCE_TYPES; // 16
	extern c_constant k_maximum_hs_source_files_per_scenario; // 8
	extern c_constant k_number_of_scenario_ai_types; // 2

#ifdef BLOFELD_CONST_ARGS
#define NUMBER_OF_SCENARIO_RESOURCE_TYPES NUMBER_OF_SCENARIO_RESOURCE_TYPES(BLOFELD_CONST_ARGS)
#define k_maximum_hs_source_files_per_scenario k_maximum_hs_source_files_per_scenario(BLOFELD_CONST_ARGS)
#define k_number_of_scenario_ai_types k_number_of_scenario_ai_types(BLOFELD_CONST_ARGS)
#endif

	constexpr unsigned long PERFORMANCE_TEMPLATE_TAG = 'pfmc';

	extern s_tag_struct_definition performance_template_block_struct;
	extern s_tag_block_definition performance_template_block;
	extern s_tag_group performance_template_group;
	constexpr unsigned long SCENARIO_TAG = 'scnr';

	extern s_tag_group scenario_group;
	constexpr unsigned long SCENARIO_REQUIRED_RESOURCE_TAG = 'sdzg';

	extern s_tag_group scenario_required_resource_group;

	extern s_tag_struct_definition scenario_structured_buffer_interop_reference_struct_definition;

	extern s_tag_struct_definition scenario_profiles_block_block_struct;
	extern s_tag_block_definition scenario_profiles_block_block;
	extern s_tag_struct_definition performance_template_actor_block_block_struct;
	extern s_tag_block_definition performance_template_actor_block_block;
	extern s_tag_struct_definition scenario_performance_line_script_fragment_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_script_fragment_block_block;
	extern s_tag_struct_definition scenario_performance_line_point_interaction_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_point_interaction_block_block;
	extern s_tag_struct_definition scenario_performance_line_animation_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_animation_block_block;
	extern s_tag_struct_definition scenario_performance_line_sync_action_actor_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_sync_action_actor_block_block;
	extern s_tag_struct_definition scenario_performance_line_sync_action_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_sync_action_block_block;
	extern s_tag_struct_definition scenario_performance_line_scenery_sync_action_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_scenery_sync_action_block_block;
	extern s_tag_struct_definition scenario_performance_line_dialog_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_dialog_block_block;
	extern s_tag_struct_definition scenario_performance_line_sound_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_sound_block_block;
	extern s_tag_struct_definition scenario_performance_line_block_block_struct;
	extern s_tag_block_definition scenario_performance_line_block_block;
	extern s_tag_struct_definition performance_template_point_block_block_struct;
	extern s_tag_block_definition performance_template_point_block_block;
	extern s_tag_struct_definition scenarioBspReferenceBlock_block_struct;
	extern s_tag_block_definition scenarioBspReferenceBlock_block;
	extern s_tag_struct_definition scenario_child_references_block_block_struct;
	extern s_tag_block_definition scenario_child_references_block_block;
	extern s_tag_struct_definition scenario_structure_bsp_reference_block_block_struct;
	extern s_tag_block_definition scenario_structure_bsp_reference_block_block;
	extern s_tag_struct_definition scenario_design_reference_block_block_struct;
	extern s_tag_block_definition scenario_design_reference_block_block;
	extern s_tag_struct_definition scenario_sky_reference_block_block_struct;
	extern s_tag_block_definition scenario_sky_reference_block_block;
	extern s_tag_struct_definition scenario_zone_set_bsp_checksum_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_bsp_checksum_block_block;
	extern s_tag_struct_definition scenario_zone_set_cluster_pvs_bit_vector_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_cluster_pvs_bit_vector_block_block;
	extern s_tag_struct_definition scenario_zone_set_bsp_bits_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_bsp_bits_block_block;
	extern s_tag_struct_definition scenario_zone_set_cluster_pvs_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_cluster_pvs_block_block;
	extern s_tag_struct_definition scenario_zone_set_cluster_reference_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_cluster_reference_block_block;
	extern s_tag_struct_definition scenario_zone_set_bsp_seam_cluster_mappings_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_bsp_seam_cluster_mappings_block_block;
	extern s_tag_struct_definition scenario_zone_set_bsp_pvs_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_bsp_pvs_block_block;
	extern s_tag_struct_definition scenario_zone_set_pvs_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_pvs_block_block;
	extern s_tag_struct_definition scenario_zone_set_budget_override_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_budget_override_block_block;
	extern s_tag_struct_definition scenario_zone_set_lipsync_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_lipsync_block_block;
	extern s_tag_struct_definition scenario_zone_set_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_block_block;
	extern s_tag_struct_definition scenario_lighting_zone_set_block_block_struct;
	extern s_tag_block_definition scenario_lighting_zone_set_block_block;
	extern s_tag_struct_definition scenario_function_block_block_struct;
	extern s_tag_block_definition scenario_function_block_block;
	extern s_tag_struct_definition editor_comment_block_block_struct;
	extern s_tag_block_definition editor_comment_block_block;
	extern s_tag_struct_definition dont_use_me_scenario_environment_object_block_block_struct;
	extern s_tag_block_definition dont_use_me_scenario_environment_object_block_block;
	extern s_tag_struct_definition scenario_object_names_block_block_struct;
	extern s_tag_block_definition scenario_object_names_block_block;
	extern s_tag_struct_definition scenarioAttachedEffectsBlock_block_struct;
	extern s_tag_block_definition scenarioAttachedEffectsBlock_block;
	extern s_tag_struct_definition scenarioAttachedLensFlaresBlock_block_struct;
	extern s_tag_block_definition scenarioAttachedLensFlaresBlock_block;
	extern s_tag_struct_definition scenarioAttachedLightConesBlock_block_struct;
	extern s_tag_block_definition scenarioAttachedLightConesBlock_block;
	extern s_tag_struct_definition scenario_soft_ceilings_block_block_struct;
	extern s_tag_block_definition scenario_soft_ceilings_block_block;
	extern s_tag_struct_definition scenario_players_block_block_struct;
	extern s_tag_block_definition scenario_players_block_block;
	extern s_tag_struct_definition trigger_volume_point_block_block_struct;
	extern s_tag_block_definition trigger_volume_point_block_block;
	extern s_tag_struct_definition trigger_volume_runtime_triangles_block_block_struct;
	extern s_tag_block_definition trigger_volume_runtime_triangles_block_block;
	extern s_tag_block_definition scenario_trigger_volume_block_block;
	extern s_tag_struct_definition scenario_zone_set_switch_trigger_volume_block_block_struct;
	extern s_tag_block_definition scenario_zone_set_switch_trigger_volume_block_block;
	extern s_tag_struct_definition scenario_decals_block_block_struct;
	extern s_tag_block_definition scenario_decals_block_block;
	extern s_tag_struct_definition scenario_decal_palette_block_block_struct;
	extern s_tag_block_definition scenario_decal_palette_block_block;
	extern s_tag_struct_definition scenario_detail_object_collection_palette_block_block_struct;
	extern s_tag_block_definition scenario_detail_object_collection_palette_block_block;
	extern s_tag_struct_definition scenario_cutscene_flag_block_block_struct;
	extern s_tag_block_definition scenario_cutscene_flag_block_block;
	extern s_tag_struct_definition scenario_cutscene_camera_point_block_block_struct;
	extern s_tag_block_definition scenario_cutscene_camera_point_block_block;
	extern s_tag_struct_definition scenario_kill_trigger_volumes_block_block_struct;
	extern s_tag_block_definition scenario_kill_trigger_volumes_block_block;
	extern s_tag_struct_definition scenario_safe_zone_trigger_volumes_block_block_struct;
	extern s_tag_block_definition scenario_safe_zone_trigger_volumes_block_block;
	extern s_tag_struct_definition trigger_volume_mopp_code_block_block_struct;
	extern s_tag_block_definition trigger_volume_mopp_code_block_block;
	extern s_tag_struct_definition scenario_requisition_trigger_volumes_block_block_struct;
	extern s_tag_block_definition scenario_requisition_trigger_volumes_block_block;
	extern s_tag_struct_definition scenario_location_name_trigger_volumes_block_block_struct;
	extern s_tag_block_definition scenario_location_name_trigger_volumes_block_block;
	extern s_tag_struct_definition scenarioUnsafeSpawnZoneTriggerVolumesBlock_block_struct;
	extern s_tag_block_definition scenarioUnsafeSpawnZoneTriggerVolumesBlock_block;
	extern s_tag_struct_definition scenario_atmosphere_palette_block_block_struct;
	extern s_tag_block_definition scenario_atmosphere_palette_block_block;
	extern s_tag_struct_definition scenario_camera_fx_palette_block_block_struct;
	extern s_tag_block_definition scenario_camera_fx_palette_block_block;
	extern s_tag_struct_definition scenario_weather_palette_block_block_struct;
	extern s_tag_block_definition scenario_weather_palette_block_block;
	extern s_tag_struct_definition scenario_cluster_points_block_block_struct;
	extern s_tag_block_definition scenario_cluster_points_block_block;
	extern s_tag_struct_definition scenario_cluster_acoustics_block_block_struct;
	extern s_tag_block_definition scenario_cluster_acoustics_block_block;
	extern s_tag_struct_definition scenario_cluster_atmosphere_properties_block_block_struct;
	extern s_tag_block_definition scenario_cluster_atmosphere_properties_block_block;
	extern s_tag_struct_definition scenario_cluster_camera_fx_properties_block_block_struct;
	extern s_tag_block_definition scenario_cluster_camera_fx_properties_block_block;
	extern s_tag_struct_definition scenario_cluster_weather_properties_block_block_struct;
	extern s_tag_block_definition scenario_cluster_weather_properties_block_block;
	extern s_tag_struct_definition scenario_cluster_data_block_block_struct;
	extern s_tag_block_definition scenario_cluster_data_block_block;
	extern s_tag_struct_definition scenario_spawn_data_block_block_struct;
	extern s_tag_block_definition scenario_spawn_data_block_block;
	extern s_tag_struct_definition SoundSubtitleBlock_block_struct;
	extern s_tag_block_definition SoundSubtitleBlock_block;
	extern s_tag_struct_definition scenario_cheap_particle_system_palette_block_block_struct;
	extern s_tag_block_definition scenario_cheap_particle_system_palette_block_block;
	extern s_tag_struct_definition scenario_cheap_particle_systems_block_block_struct;
	extern s_tag_block_definition scenario_cheap_particle_systems_block_block;
	extern s_tag_struct_definition scenario_cinematic_lighting_palette_block_block_struct;
	extern s_tag_block_definition scenario_cinematic_lighting_palette_block_block;
	extern s_tag_struct_definition scenario_airprobes_block_block_struct;
	extern s_tag_block_definition scenario_airprobes_block_block;
	extern s_tag_struct_definition scenario_budget_references_block_block_struct;
	extern s_tag_block_definition scenario_budget_references_block_block;
	extern s_tag_struct_definition model_references_block_block_struct;
	extern s_tag_block_definition model_references_block_block;
	extern s_tag_struct_definition scenario_performance_actor_block_block_struct;
	extern s_tag_block_definition scenario_performance_actor_block_block;
	extern s_tag_struct_definition scenario_performance_task_block_block_struct;
	extern s_tag_block_definition scenario_performance_task_block_block;
	extern s_tag_struct_definition scenario_performances_block_block_struct;
	extern s_tag_block_definition scenario_performances_block_block;
	extern s_tag_struct_definition scenarioRandomOrdnanceDropPointBlock_block_struct;
	extern s_tag_block_definition scenarioRandomOrdnanceDropPointBlock_block;
	extern s_tag_struct_definition scenarioRandomOrdnanceDropSetBlock_block_struct;
	extern s_tag_block_definition scenarioRandomOrdnanceDropSetBlock_block;
	extern s_tag_block_definition ScenarioUnitRecordingBlock_block;
	extern s_tag_struct_definition loadScreenReferenceBlock_block_struct;
	extern s_tag_block_definition loadScreenReferenceBlock_block;
	extern s_tag_block_definition scenario_block_block;
	extern s_tag_block_definition scenario_required_resource_block_block;

	extern s_tag_struct_definition scenarioFloatingShadowCascadeSettingsArray_struct_definition;
	extern s_tag_array_definition scenarioFloatingShadowCascadeSettingsArray_array;
	extern s_tag_struct_definition object_salt_storage_array_struct_definition;
	extern s_tag_array_definition object_salt_storage_array_array;
	extern s_tag_struct_definition manualBspFlagsReferences_struct_definition;
	extern s_tag_struct_definition scenario_struct_definition_struct_definition; // tag group
	extern s_tag_struct_definition scenarioVolumetricLightShaftSettingsStruct_struct_definition;
	extern s_tag_struct_definition scenarioFloatingShadowSettingsStruct_struct_definition;
	extern s_tag_struct_definition scenario_lightmap_setting_struct_struct_definition;
	extern s_tag_struct_definition scenario_trigger_volume_struct_struct_definition;
	extern s_tag_struct_definition ScenarioUnitRecordingBlock_struct_struct_definition;
	extern s_tag_struct_definition scenario_required_resource_struct_definition_struct_definition; // tag group

	extern c_versioned_string_list function_bounds_mode_enum_strings;
	extern s_string_list_definition function_bounds_mode_enum;
	extern c_versioned_string_list scenario_function_flags_strings;
	extern s_string_list_definition scenario_function_flags;
	extern c_versioned_string_list scenario_soft_ceiling_flags_definition_strings;
	extern s_string_list_definition scenario_soft_ceiling_flags_definition;
	extern c_versioned_string_list scenario_player_flags_strings;
	extern s_string_list_definition scenario_player_flags;
	extern c_versioned_string_list kill_volume_flags_strings;
	extern s_string_list_definition kill_volume_flags;
	extern c_versioned_string_list scenario_requisition_trigger_volume_flags_definition_strings;
	extern s_string_list_definition scenario_requisition_trigger_volume_flags_definition;
	extern c_versioned_string_list trigger_volume_type_enum_strings;
	extern s_string_list_definition trigger_volume_type_enum;
	extern c_versioned_string_list scenario_zone_set_switch_trigger_volume_flags_definition_strings;
	extern s_string_list_definition scenario_zone_set_switch_trigger_volume_flags_definition;
	extern c_versioned_string_list scenario_zone_set_pvs_flags_strings;
	extern s_string_list_definition scenario_zone_set_pvs_flags;
	extern c_versioned_string_list scenario_zone_set_flags_definition_strings;
	extern s_string_list_definition scenario_zone_set_flags_definition;
	extern c_versioned_string_list scenario_structure_size_enum_strings;
	extern s_string_list_definition scenario_structure_size_enum;
	extern c_versioned_string_list scenario_structure_refinement_size_enum_strings;
	extern s_string_list_definition scenario_structure_refinement_size_enum;
	extern c_versioned_string_list scenario_structure_bsp_reference_flags_definition_strings;
	extern s_string_list_definition scenario_structure_bsp_reference_flags_definition;
	extern c_versioned_string_list scenarioVolumetricLightShaftSettingsFlags_strings;
	extern s_string_list_definition scenarioVolumetricLightShaftSettingsFlags;
	extern c_versioned_string_list floatingShadowQualityDefinition_strings;
	extern s_string_list_definition floatingShadowQualityDefinition;
	extern c_versioned_string_list floatingShadowBufferResolution_strings;
	extern s_string_list_definition floatingShadowBufferResolution;
	extern c_versioned_string_list scenario_lightmap_per_bsp_flags_strings;
	extern s_string_list_definition scenario_lightmap_per_bsp_flags;
	extern c_versioned_string_list scenario_performance_actor_flags_definition_strings;
	extern s_string_list_definition scenario_performance_actor_flags_definition;
	extern c_versioned_string_list scenario_performance_line_animation_flags_definition_strings;
	extern s_string_list_definition scenario_performance_line_animation_flags_definition;
	extern c_versioned_string_list scenario_performance_line_sync_action_flag_type_definition_strings;
	extern s_string_list_definition scenario_performance_line_sync_action_flag_type_definition;
	extern c_versioned_string_list scenario_performance_line_scenery_sync_action_flag_type_definition_strings;
	extern s_string_list_definition scenario_performance_line_scenery_sync_action_flag_type_definition;
	extern c_versioned_string_list scenario_performance_fragment_placement_definition_strings;
	extern s_string_list_definition scenario_performance_fragment_placement_definition;
	extern c_versioned_string_list scenario_performance_fragment_type_definition_strings;
	extern s_string_list_definition scenario_performance_fragment_type_definition;
	extern c_versioned_string_list scenario_performance_line_point_interaction_type_definition_strings;
	extern s_string_list_definition scenario_performance_line_point_interaction_type_definition;
	extern c_versioned_string_list scenario_performance_line_progress_definition_strings;
	extern s_string_list_definition scenario_performance_line_progress_definition;
	extern c_versioned_string_list scenario_performance_line_flags_strings;
	extern s_string_list_definition scenario_performance_line_flags;
	extern c_versioned_string_list performance_flags_strings;
	extern s_string_list_definition performance_flags;
	extern c_versioned_string_list decal_placement_flags_strings;
	extern s_string_list_definition decal_placement_flags;
	extern c_versioned_string_list editor_comment_type_enum_definition_strings;
	extern s_string_list_definition editor_comment_type_enum_definition;
	extern c_versioned_string_list scenario_type_enum_strings;
	extern s_string_list_definition scenario_type_enum;
	extern c_versioned_string_list scenario_flags_strings;
	extern s_string_list_definition scenario_flags;
	extern c_versioned_string_list scenario_runtime_trigger_volume_flags_strings;
	extern s_string_list_definition scenario_runtime_trigger_volume_flags;
	extern c_versioned_string_list camera_fx_palette_flags_strings;
	extern s_string_list_definition camera_fx_palette_flags;
	extern c_versioned_string_list ordnance_flags_strings;
	extern s_string_list_definition ordnance_flags;
	extern c_versioned_string_list ordnance_dropset_flags_strings;
	extern s_string_list_definition ordnance_dropset_flags;
	extern c_versioned_string_list multiplayer_map_size_enum_strings;
	extern s_string_list_definition multiplayer_map_size_enum;

} // namespace blofeld

