#pragma once

struct nicename("device_terminal") tag_group('term') s_device_terminal_definition_legacy
{
	enum nicename("Object Type") e_object_type : uint16_t
	{
		/*nicename("Biped")*/ _object_type_biped = 0ui16,
		/*nicename("Vehicle")*/ _object_type_vehicle = 1ui16,
		/*nicename("Weapon")*/ _object_type_weapon = 2ui16,
		/*nicename("Equipment")*/ _object_type_equipment = 3ui16,
		/*nicename("Terminal")*/ _object_type_terminal = 4ui16,
		/*nicename("Projectile")*/ _object_type_projectile = 5ui16,
		/*nicename("Scenery")*/ _object_type_scenery = 6ui16,
		/*nicename("Machine")*/ _object_type_machine = 7ui16,
		/*nicename("Control")*/ _object_type_control = 8ui16,
		/*nicename("Sound Scenery")*/ _object_type_sound_scenery = 9ui16,
		/*nicename("Crate")*/ _object_type_crate = 10ui16,
		/*nicename("Creature")*/ _object_type_creature = 11ui16,
		/*nicename("Giant")*/ _object_type_giant = 12ui16,
		/*nicename("Effect Scenery")*/ _object_type_effect_scenery = 13ui16,
	};

	enum nicename("Lightmap Shadow Mode Size") e_lightmap_shadow_mode_size : uint16_t
	{
		/*nicename("Default")*/ _lightmap_shadow_mode_size_default = 0ui16,
		/*nicename("Never")*/ _lightmap_shadow_mode_size_never = 1ui16,
		/*nicename("Always")*/ _lightmap_shadow_mode_size_always = 2ui16,
		/*nicename("Unknown")*/ _lightmap_shadow_mode_size_unknown = 3ui16,
	};

	enum nicename("Sweetener Size") e_sweetener_size : uint8_t
	{
		/*nicename("Small")*/ _sweetener_size_small = 0ui8,
		/*nicename("Medium")*/ _sweetener_size_medium = 1ui8,
		/*nicename("Large")*/ _sweetener_size_large = 2ui8,
	};

	enum nicename("Water Density") e_water_density : uint8_t
	{
		/*nicename("Default")*/ _water_density_default = 0ui8,
		/*nicename("Least")*/ _water_density_least = 1ui8,
		/*nicename("Some")*/ _water_density_some = 2ui8,
		/*nicename("Equal")*/ _water_density_equal = 3ui8,
		/*nicename("More")*/ _water_density_more = 4ui8,
		/*nicename("More Still")*/ _water_density_more_still = 5ui8,
		/*nicename("Lots More")*/ _water_density_lots_more = 6ui8,
	};

	enum nicename("Flags") b_flags : uint32_t /* bitfield */
	{
		/*nicename("Does Not Cast Shadow")*/ _flags_does_not_cast_shadow = 1ui32 << 0ui32,
		/*nicename("Search Cardinal Direction Lightmaps on Failure")*/ _flags_search_cardinal_direction_lightmaps_on_failure = 1ui32 << 1ui32,
		/*nicename("Preserves Initial Damage Owner")*/ _flags_preserves_initial_damage_owner = 1ui32 << 2ui32,
		/*nicename("Not A Pathfinding Obstacle")*/ _flags_not_a_pathfinding_obstacle = 1ui32 << 3ui32,
		/*nicename("Extension Of Parent")*/ _flags_extension_of_parent = 1ui32 << 4ui32,
		/*nicename("Does Not Cause Collision Damage")*/ _flags_does_not_cause_collision_damage = 1ui32 << 5ui32,
		/*nicename("Early Mover")*/ _flags_early_mover = 1ui32 << 6ui32,
		/*nicename("Early Mover Localized Physics")*/ _flags_early_mover_localized_physics = 1ui32 << 7ui32,
		/*nicename("Use Static Massive Lightmap Sample")*/ _flags_use_static_massive_lightmap_sample = 1ui32 << 8ui32,
		/*nicename("Object Scales Attachments")*/ _flags_object_scales_attachments = 1ui32 << 9ui32,
		/*nicename("Inherits Player's Appearance")*/ _flags_inherits_players_appearance = 1ui32 << 10ui32,
		/*nicename("Non-Physical in Map Editor")*/ _flags_non_physical_in_map_editor = 1ui32 << 11ui32,
		/*nicename("Object Is Always On Ceiling")*/ _flags_object_is_always_on_ceiling = 1ui32 << 12ui32,
		/*nicename("Sample Environment Lighting Only Ignore Object Lighting")*/ _flags_sample_environment_lighting_only_ignore_object_lighting = 1ui32 << 13ui32,
		/*nicename("Effects Created By This Object Do Not Spawn Objects In Multiplayer")*/ _flags_effects_created_by_this_object_do_not_spawn_objects_in_multiplayer = 1ui32 << 14ui32,
		/*nicename("Does Not Collide With Camera")*/ _flags_does_not_collide_with_camera = 1ui32 << 15ui32,
		/*nicename("Force Collide With Camera")*/ _flags_force_collide_with_camera = 1ui32 << 16ui32,
		/*nicename("Damage Not Blocked By Obstructions")*/ _flags_damage_not_blocked_by_obstructions = 1ui32 << 17ui32,
		/*nicename("Does Not Damage Breakable Surfaces")*/ _flags_does_not_damage_breakable_surfaces = 1ui32 << 18ui32,
		/*nicename("Bit 19")*/ _flags_bit_19 = 1ui32 << 19ui32,
		/*nicename("Bit 20")*/ _flags_bit_20 = 1ui32 << 20ui32,
		/*nicename("Bit 21")*/ _flags_bit_21 = 1ui32 << 21ui32,
		/*nicename("Bit 22")*/ _flags_bit_22 = 1ui32 << 22ui32,
		/*nicename("Bit 23")*/ _flags_bit_23 = 1ui32 << 23ui32,
		/*nicename("Bit 24")*/ _flags_bit_24 = 1ui32 << 24ui32,
		/*nicename("Bit 25")*/ _flags_bit_25 = 1ui32 << 25ui32,
		/*nicename("Bit 26")*/ _flags_bit_26 = 1ui32 << 26ui32,
		/*nicename("Bit 27")*/ _flags_bit_27 = 1ui32 << 27ui32,
		/*nicename("Bit 28")*/ _flags_bit_28 = 1ui32 << 28ui32,
		/*nicename("Bit 29")*/ _flags_bit_29 = 1ui32 << 29ui32,
		/*nicename("Bit 30")*/ _flags_bit_30 = 1ui32 << 30ui32,
		/*nicename("Bit 31")*/ _flags_bit_31 = 1ui32 << 31ui32,
	};

	enum nicename("Flags") b_flags1 : uint32_t /* bitfield */
	{
		/*nicename("Position Loops")*/ _flags1_position_loops = 1ui32 << 0ui32,
		/*nicename("Bit 1")*/ _flags1_bit_1 = 1ui32 << 1ui32,
		/*nicename("Position Interpolation")*/ _flags1_position_interpolation = 1ui32 << 2ui32,
		/*nicename("Bit 3")*/ _flags1_bit_3 = 1ui32 << 3ui32,
		/*nicename("Bit 4")*/ _flags1_bit_4 = 1ui32 << 4ui32,
		/*nicename("Bit 5")*/ _flags1_bit_5 = 1ui32 << 5ui32,
		/*nicename("Bit 6")*/ _flags1_bit_6 = 1ui32 << 6ui32,
		/*nicename("Bit 7")*/ _flags1_bit_7 = 1ui32 << 7ui32,
		/*nicename("Bit 8")*/ _flags1_bit_8 = 1ui32 << 8ui32,
		/*nicename("Bit 9")*/ _flags1_bit_9 = 1ui32 << 9ui32,
		/*nicename("Bit 10")*/ _flags1_bit_10 = 1ui32 << 10ui32,
		/*nicename("Bit 11")*/ _flags1_bit_11 = 1ui32 << 11ui32,
		/*nicename("Bit 12")*/ _flags1_bit_12 = 1ui32 << 12ui32,
		/*nicename("Bit 13")*/ _flags1_bit_13 = 1ui32 << 13ui32,
		/*nicename("Bit 14")*/ _flags1_bit_14 = 1ui32 << 14ui32,
		/*nicename("Bit 15")*/ _flags1_bit_15 = 1ui32 << 15ui32,
		/*nicename("Bit 16")*/ _flags1_bit_16 = 1ui32 << 16ui32,
		/*nicename("Bit 17")*/ _flags1_bit_17 = 1ui32 << 17ui32,
		/*nicename("Bit 18")*/ _flags1_bit_18 = 1ui32 << 18ui32,
		/*nicename("Bit 19")*/ _flags1_bit_19 = 1ui32 << 19ui32,
		/*nicename("Bit 20")*/ _flags1_bit_20 = 1ui32 << 20ui32,
		/*nicename("Bit 21")*/ _flags1_bit_21 = 1ui32 << 21ui32,
		/*nicename("Bit 22")*/ _flags1_bit_22 = 1ui32 << 22ui32,
		/*nicename("Bit 23")*/ _flags1_bit_23 = 1ui32 << 23ui32,
		/*nicename("Bit 24")*/ _flags1_bit_24 = 1ui32 << 24ui32,
		/*nicename("Bit 25")*/ _flags1_bit_25 = 1ui32 << 25ui32,
		/*nicename("Bit 26")*/ _flags1_bit_26 = 1ui32 << 26ui32,
		/*nicename("Bit 27")*/ _flags1_bit_27 = 1ui32 << 27ui32,
		/*nicename("Bit 28")*/ _flags1_bit_28 = 1ui32 << 28ui32,
		/*nicename("Bit 29")*/ _flags1_bit_29 = 1ui32 << 29ui32,
		/*nicename("Bit 30")*/ _flags1_bit_30 = 1ui32 << 30ui32,
		/*nicename("Bit 31")*/ _flags1_bit_31 = 1ui32 << 31ui32,
	};

	enum nicename("Lightmap Flags") b_lightmap_flags : uint32_t /* bitfield */
	{
		/*nicename("Don't Use In Lightmap")*/ _lightmap_flags_dont_use_in_lightmap = 1ui32 << 0ui32,
		/*nicename("Don't Use In Lightprobe")*/ _lightmap_flags_dont_use_in_lightprobe = 1ui32 << 1ui32,
		/*nicename("Bit 2")*/ _lightmap_flags_bit_2 = 1ui32 << 2ui32,
		/*nicename("Bit 3")*/ _lightmap_flags_bit_3 = 1ui32 << 3ui32,
		/*nicename("Bit 4")*/ _lightmap_flags_bit_4 = 1ui32 << 4ui32,
		/*nicename("Bit 5")*/ _lightmap_flags_bit_5 = 1ui32 << 5ui32,
		/*nicename("Bit 6")*/ _lightmap_flags_bit_6 = 1ui32 << 6ui32,
		/*nicename("Bit 7")*/ _lightmap_flags_bit_7 = 1ui32 << 7ui32,
		/*nicename("Bit 8")*/ _lightmap_flags_bit_8 = 1ui32 << 8ui32,
		/*nicename("Bit 9")*/ _lightmap_flags_bit_9 = 1ui32 << 9ui32,
		/*nicename("Bit 10")*/ _lightmap_flags_bit_10 = 1ui32 << 10ui32,
		/*nicename("Bit 11")*/ _lightmap_flags_bit_11 = 1ui32 << 11ui32,
		/*nicename("Bit 12")*/ _lightmap_flags_bit_12 = 1ui32 << 12ui32,
		/*nicename("Bit 13")*/ _lightmap_flags_bit_13 = 1ui32 << 13ui32,
		/*nicename("Bit 14")*/ _lightmap_flags_bit_14 = 1ui32 << 14ui32,
		/*nicename("Bit 15")*/ _lightmap_flags_bit_15 = 1ui32 << 15ui32,
		/*nicename("Bit 16")*/ _lightmap_flags_bit_16 = 1ui32 << 16ui32,
		/*nicename("Bit 17")*/ _lightmap_flags_bit_17 = 1ui32 << 17ui32,
		/*nicename("Bit 18")*/ _lightmap_flags_bit_18 = 1ui32 << 18ui32,
		/*nicename("Bit 19")*/ _lightmap_flags_bit_19 = 1ui32 << 19ui32,
		/*nicename("Bit 20")*/ _lightmap_flags_bit_20 = 1ui32 << 20ui32,
		/*nicename("Bit 21")*/ _lightmap_flags_bit_21 = 1ui32 << 21ui32,
		/*nicename("Bit 22")*/ _lightmap_flags_bit_22 = 1ui32 << 22ui32,
		/*nicename("Bit 23")*/ _lightmap_flags_bit_23 = 1ui32 << 23ui32,
		/*nicename("Bit 24")*/ _lightmap_flags_bit_24 = 1ui32 << 24ui32,
		/*nicename("Bit 25")*/ _lightmap_flags_bit_25 = 1ui32 << 25ui32,
		/*nicename("Bit 26")*/ _lightmap_flags_bit_26 = 1ui32 << 26ui32,
		/*nicename("Bit 27")*/ _lightmap_flags_bit_27 = 1ui32 << 27ui32,
		/*nicename("Bit 28")*/ _lightmap_flags_bit_28 = 1ui32 << 28ui32,
		/*nicename("Bit 29")*/ _lightmap_flags_bit_29 = 1ui32 << 29ui32,
		/*nicename("Bit 30")*/ _lightmap_flags_bit_30 = 1ui32 << 30ui32,
		/*nicename("Bit 31")*/ _lightmap_flags_bit_31 = 1ui32 << 31ui32,
	};

	struct nicename("Early Mover Properties") s_early_mover_properties_definition_legacy
	{
		string_id_legacy nicename("Name") name;
		s_undefined32_legacy __unknown0;
		s_undefined32_legacy __unknown1;
		s_undefined32_legacy __unknown2;
		s_undefined32_legacy __unknown3;
		s_undefined32_legacy __unknown4;
		s_undefined32_legacy __unknown5;
		s_undefined32_legacy __unknown6;
		s_undefined32_legacy __unknown7;
		s_undefined32_legacy __unknown8;
		s_undefined32_legacy __unknown9;
	};

	struct nicename("AI Properties") s_ai_properties_definition_legacy
	{
		enum nicename("Size") e_size : uint16_t
		{
			/*nicename("Default")*/ _size_default = 0ui16,
			/*nicename("Tiny")*/ _size_tiny = 1ui16,
			/*nicename("Small")*/ _size_small = 2ui16,
			/*nicename("Medium")*/ _size_medium = 3ui16,
			/*nicename("Large")*/ _size_large = 4ui16,
			/*nicename("Huge")*/ _size_huge = 5ui16,
			/*nicename("Immobile")*/ _size_immobile = 6ui16,
		};

		enum nicename("Leap Jump Speed") e_leap_jump_speed : uint16_t
		{
			/*nicename("None")*/ _leap_jump_speed_none = 0ui16,
			/*nicename("Down")*/ _leap_jump_speed_down = 1ui16,
			/*nicename("Step")*/ _leap_jump_speed_step = 2ui16,
			/*nicename("Crouch")*/ _leap_jump_speed_crouch = 3ui16,
			/*nicename("Stand")*/ _leap_jump_speed_stand = 4ui16,
			/*nicename("Storey")*/ _leap_jump_speed_storey = 5ui16,
			/*nicename("Tower")*/ _leap_jump_speed_tower = 6ui16,
			/*nicename("Infinite")*/ _leap_jump_speed_infinite = 7ui16,
		};

		enum nicename("Flags") b_flags1 : uint32_t /* bitfield */
		{
			/*nicename("Destroyable Cover")*/ _flags1_destroyable_cover = 1ui32 << 0ui32,
			/*nicename("Pathfinding Ignore When Dead")*/ _flags1_pathfinding_ignore_when_dead = 1ui32 << 1ui32,
			/*nicename("Dynamic Cover")*/ _flags1_dynamic_cover = 1ui32 << 2ui32,
			/*nicename("Bit 3")*/ _flags1_bit_3 = 1ui32 << 3ui32,
			/*nicename("Bit 4")*/ _flags1_bit_4 = 1ui32 << 4ui32,
			/*nicename("Bit 5")*/ _flags1_bit_5 = 1ui32 << 5ui32,
			/*nicename("Bit 6")*/ _flags1_bit_6 = 1ui32 << 6ui32,
			/*nicename("Bit 7")*/ _flags1_bit_7 = 1ui32 << 7ui32,
			/*nicename("Bit 8")*/ _flags1_bit_8 = 1ui32 << 8ui32,
			/*nicename("Bit 9")*/ _flags1_bit_9 = 1ui32 << 9ui32,
			/*nicename("Bit 10")*/ _flags1_bit_10 = 1ui32 << 10ui32,
			/*nicename("Bit 11")*/ _flags1_bit_11 = 1ui32 << 11ui32,
			/*nicename("Bit 12")*/ _flags1_bit_12 = 1ui32 << 12ui32,
			/*nicename("Bit 13")*/ _flags1_bit_13 = 1ui32 << 13ui32,
			/*nicename("Bit 14")*/ _flags1_bit_14 = 1ui32 << 14ui32,
			/*nicename("Bit 15")*/ _flags1_bit_15 = 1ui32 << 15ui32,
			/*nicename("Bit 16")*/ _flags1_bit_16 = 1ui32 << 16ui32,
			/*nicename("Bit 17")*/ _flags1_bit_17 = 1ui32 << 17ui32,
			/*nicename("Bit 18")*/ _flags1_bit_18 = 1ui32 << 18ui32,
			/*nicename("Bit 19")*/ _flags1_bit_19 = 1ui32 << 19ui32,
			/*nicename("Bit 20")*/ _flags1_bit_20 = 1ui32 << 20ui32,
			/*nicename("Bit 21")*/ _flags1_bit_21 = 1ui32 << 21ui32,
			/*nicename("Bit 22")*/ _flags1_bit_22 = 1ui32 << 22ui32,
			/*nicename("Bit 23")*/ _flags1_bit_23 = 1ui32 << 23ui32,
			/*nicename("Bit 24")*/ _flags1_bit_24 = 1ui32 << 24ui32,
			/*nicename("Bit 25")*/ _flags1_bit_25 = 1ui32 << 25ui32,
			/*nicename("Bit 26")*/ _flags1_bit_26 = 1ui32 << 26ui32,
			/*nicename("Bit 27")*/ _flags1_bit_27 = 1ui32 << 27ui32,
			/*nicename("Bit 28")*/ _flags1_bit_28 = 1ui32 << 28ui32,
			/*nicename("Bit 29")*/ _flags1_bit_29 = 1ui32 << 29ui32,
			/*nicename("Bit 30")*/ _flags1_bit_30 = 1ui32 << 30ui32,
			/*nicename("Bit 31")*/ _flags1_bit_31 = 1ui32 << 31ui32,
		};

		b_flags1 nicename("Flags") flags;
		string_id_legacy nicename("AI Type Name") ai_type_name;
		s_undefined32_legacy __unknown0;
		e_size nicename("Size") size;
		e_leap_jump_speed nicename("Leap Jump Speed") leap_jump_speed;
	};

	struct nicename("Functions") s_functions_definition_legacy
	{
		enum nicename("Flags") b_flags1 : uint32_t /* bitfield */
		{
			/*nicename("Invert")*/ _flags1_invert = 1ui32 << 0ui32,
			/*nicename("Mapping Does Not Controls Active")*/ _flags1_mapping_does_not_controls_active = 1ui32 << 1ui32,
			/*nicename("Always Active")*/ _flags1_always_active = 1ui32 << 2ui32,
			/*nicename("Random Time Offset")*/ _flags1_random_time_offset = 1ui32 << 3ui32,
			/*nicename("Bit 4")*/ _flags1_bit_4 = 1ui32 << 4ui32,
			/*nicename("Bit 5")*/ _flags1_bit_5 = 1ui32 << 5ui32,
			/*nicename("Bit 6")*/ _flags1_bit_6 = 1ui32 << 6ui32,
			/*nicename("Bit 7")*/ _flags1_bit_7 = 1ui32 << 7ui32,
			/*nicename("Bit 8")*/ _flags1_bit_8 = 1ui32 << 8ui32,
			/*nicename("Bit 9")*/ _flags1_bit_9 = 1ui32 << 9ui32,
			/*nicename("Bit 10")*/ _flags1_bit_10 = 1ui32 << 10ui32,
			/*nicename("Bit 11")*/ _flags1_bit_11 = 1ui32 << 11ui32,
			/*nicename("Bit 12")*/ _flags1_bit_12 = 1ui32 << 12ui32,
			/*nicename("Bit 13")*/ _flags1_bit_13 = 1ui32 << 13ui32,
			/*nicename("Bit 14")*/ _flags1_bit_14 = 1ui32 << 14ui32,
			/*nicename("Bit 15")*/ _flags1_bit_15 = 1ui32 << 15ui32,
			/*nicename("Bit 16")*/ _flags1_bit_16 = 1ui32 << 16ui32,
			/*nicename("Bit 17")*/ _flags1_bit_17 = 1ui32 << 17ui32,
			/*nicename("Bit 18")*/ _flags1_bit_18 = 1ui32 << 18ui32,
			/*nicename("Bit 19")*/ _flags1_bit_19 = 1ui32 << 19ui32,
			/*nicename("Bit 20")*/ _flags1_bit_20 = 1ui32 << 20ui32,
			/*nicename("Bit 21")*/ _flags1_bit_21 = 1ui32 << 21ui32,
			/*nicename("Bit 22")*/ _flags1_bit_22 = 1ui32 << 22ui32,
			/*nicename("Bit 23")*/ _flags1_bit_23 = 1ui32 << 23ui32,
			/*nicename("Bit 24")*/ _flags1_bit_24 = 1ui32 << 24ui32,
			/*nicename("Bit 25")*/ _flags1_bit_25 = 1ui32 << 25ui32,
			/*nicename("Bit 26")*/ _flags1_bit_26 = 1ui32 << 26ui32,
			/*nicename("Bit 27")*/ _flags1_bit_27 = 1ui32 << 27ui32,
			/*nicename("Bit 28")*/ _flags1_bit_28 = 1ui32 << 28ui32,
			/*nicename("Bit 29")*/ _flags1_bit_29 = 1ui32 << 29ui32,
			/*nicename("Bit 30")*/ _flags1_bit_30 = 1ui32 << 30ui32,
			/*nicename("Bit 31")*/ _flags1_bit_31 = 1ui32 << 31ui32,
		};

		struct nicename("Unknown") s_unknown_definition_legacy
		{
			int32_t __unknown0;
			float __unknown1;
			float __unknown2;
			s_undefined32_legacy __unknown3;
			float __unknown4;
			float __unknown5;
		};

		b_flags1 nicename("Flags") flags;
		string_id_legacy nicename("Import Name") import_name;
		string_id_legacy nicename("Export Name") export_name;
		string_id_legacy nicename("Turn Off With") turn_off_with;
		string_id_legacy __unknown0;
		float nicename("Minimum Value") minimum_value;
		s_data_reference_legacy nicename("Default Function") default_function_data_reference;
		string_id_legacy nicename("Scale By") scale_by;
		s_tag_block_legacy<s_unknown_definition_legacy> __unknown1;
		int32_t nicename("'Function Related' Index") function_related_index;
	};

	struct nicename("Function Related") s_function_related_definition_legacy
	{
		int32_t nicename("Function Index") function_index;
	};

	struct nicename("Attachments") s_attachments_definition_legacy
	{
		enum nicename("Change Color") e_change_color : uint16_t
		{
			/*nicename("None")*/ _change_color_none = 0ui16,
			/*nicename("Primary")*/ _change_color_primary = 1ui16,
			/*nicename("Secondary")*/ _change_color_secondary = 2ui16,
			/*nicename("Tertiary")*/ _change_color_tertiary = 3ui16,
			/*nicename("Quaternary")*/ _change_color_quaternary = 4ui16,
		};

		s_tag_reference_legacy nicename("Attachment") attachment_reference;
		string_id_legacy nicename("Marker") marker;
		e_change_color nicename("Change Color") change_color;
		int16_t __unknown0;
		string_id_legacy nicename("Primary Scale") primary_scale;
		string_id_legacy nicename("Secondary Scale") secondary_scale;
	};

	struct nicename("Material Responses") s_material_responses_definition_legacy
	{
		struct nicename("Unknown") s_unknown1_definition_legacy
		{
			string_id_legacy nicename("Material") material;
			s_data_reference_legacy __unknown0;
			float __unknown1;
			s_data_reference_legacy __unknown2;
			float __unknown3;
			s_undefined32_legacy __unknown4;
			s_undefined32_legacy __unknown5;
		};

		s_undefined32_legacy __unknown0;
		s_undefined32_legacy __unknown1;
		s_undefined32_legacy __unknown2;
		s_tag_block_legacy<s_unknown1_definition_legacy> __unknown3;
	};

	struct nicename("Jet Wash") s_jet_wash_definition_legacy
	{
		string_id_legacy nicename("Marker") marker;
		float __unknown0;
		s_undefined32_legacy __unknown1;
		float __unknown2;
		float __unknown3;
		float __unknown4;
		float __unknown5;
		float __unknown6;
		float __unknown7;
	};

	struct nicename("Widgets") s_widgets_definition_legacy
	{
		s_tag_reference_legacy nicename("Type") type_reference;
	};

	struct nicename("Change Color") s_change_color_definition_legacy
	{
		struct nicename("Initial Permutations") s_initial_permutations_definition_legacy
		{
			float nicename("Weight") weight;
			s_colorf_legacy nicename("Color Lower Bound") color_lower_bound;
			s_colorf_legacy nicename("Color Upper Bound") color_upper_bound;
			string_id_legacy nicename("Variant Name") variant_name;
		};

		struct nicename("Functions") s_functions1_definition_legacy
		{
			enum nicename("Scale Flags") b_scale_flags : uint32_t /* bitfield */
			{
				/*nicename("Blend In HSV")*/ _scale_flags_blend_in_hsv = 1ui32 << 0ui32,
				/*nicename("...More Colors")*/ _scale_flags_more_colors = 1ui32 << 1ui32,
				/*nicename("Bit 2")*/ _scale_flags_bit_2 = 1ui32 << 2ui32,
				/*nicename("Bit 3")*/ _scale_flags_bit_3 = 1ui32 << 3ui32,
				/*nicename("Bit 4")*/ _scale_flags_bit_4 = 1ui32 << 4ui32,
				/*nicename("Bit 5")*/ _scale_flags_bit_5 = 1ui32 << 5ui32,
				/*nicename("Bit 6")*/ _scale_flags_bit_6 = 1ui32 << 6ui32,
				/*nicename("Bit 7")*/ _scale_flags_bit_7 = 1ui32 << 7ui32,
				/*nicename("Bit 8")*/ _scale_flags_bit_8 = 1ui32 << 8ui32,
				/*nicename("Bit 9")*/ _scale_flags_bit_9 = 1ui32 << 9ui32,
				/*nicename("Bit 10")*/ _scale_flags_bit_10 = 1ui32 << 10ui32,
				/*nicename("Bit 11")*/ _scale_flags_bit_11 = 1ui32 << 11ui32,
				/*nicename("Bit 12")*/ _scale_flags_bit_12 = 1ui32 << 12ui32,
				/*nicename("Bit 13")*/ _scale_flags_bit_13 = 1ui32 << 13ui32,
				/*nicename("Bit 14")*/ _scale_flags_bit_14 = 1ui32 << 14ui32,
				/*nicename("Bit 15")*/ _scale_flags_bit_15 = 1ui32 << 15ui32,
				/*nicename("Bit 16")*/ _scale_flags_bit_16 = 1ui32 << 16ui32,
				/*nicename("Bit 17")*/ _scale_flags_bit_17 = 1ui32 << 17ui32,
				/*nicename("Bit 18")*/ _scale_flags_bit_18 = 1ui32 << 18ui32,
				/*nicename("Bit 19")*/ _scale_flags_bit_19 = 1ui32 << 19ui32,
				/*nicename("Bit 20")*/ _scale_flags_bit_20 = 1ui32 << 20ui32,
				/*nicename("Bit 21")*/ _scale_flags_bit_21 = 1ui32 << 21ui32,
				/*nicename("Bit 22")*/ _scale_flags_bit_22 = 1ui32 << 22ui32,
				/*nicename("Bit 23")*/ _scale_flags_bit_23 = 1ui32 << 23ui32,
				/*nicename("Bit 24")*/ _scale_flags_bit_24 = 1ui32 << 24ui32,
				/*nicename("Bit 25")*/ _scale_flags_bit_25 = 1ui32 << 25ui32,
				/*nicename("Bit 26")*/ _scale_flags_bit_26 = 1ui32 << 26ui32,
				/*nicename("Bit 27")*/ _scale_flags_bit_27 = 1ui32 << 27ui32,
				/*nicename("Bit 28")*/ _scale_flags_bit_28 = 1ui32 << 28ui32,
				/*nicename("Bit 29")*/ _scale_flags_bit_29 = 1ui32 << 29ui32,
				/*nicename("Bit 30")*/ _scale_flags_bit_30 = 1ui32 << 30ui32,
				/*nicename("Bit 31")*/ _scale_flags_bit_31 = 1ui32 << 31ui32,
			};

			b_scale_flags nicename("Scale Flags") scale_flags;
			s_colorf_legacy nicename("Color Lower Bound") color_lower_bound;
			s_colorf_legacy nicename("Color Upper Bound") color_upper_bound;
			string_id_legacy nicename("Darken By...") darken_by;
			string_id_legacy nicename("Scale By...") scale_by;
		};

		s_tag_block_legacy<s_initial_permutations_definition_legacy> nicename("Initial Permutations") initial_permutations_block;
		s_tag_block_legacy<s_functions1_definition_legacy> nicename("Functions") functions_block;
	};

	struct nicename("Predicted Resources") s_predicted_resources_definition_legacy
	{
		int16_t nicename("Type") type;
		int16_t nicename("Resource Index") resource_index;
		s_tag_reference_legacy nicename("Tag Index") tag_index_reference;
	};

	struct nicename("Multiplayer Object Properties") s_multiplayer_object_properties_definition_legacy
	{
		enum nicename("Object Type") e_object_type1 : uint8_t
		{
			/*nicename("Ordinary")*/ _object_type1_ordinary = 0ui8,
			/*nicename("Weapon")*/ _object_type1_weapon = 1ui8,
			/*nicename("Grenade")*/ _object_type1_grenade = 2ui8,
			/*nicename("Projectile")*/ _object_type1_projectile = 3ui8,
			/*nicename("Powerup")*/ _object_type1_powerup = 4ui8,
			/*nicename("Equipment")*/ _object_type1_equipment = 5ui8,
			/*nicename("Ammo Pack")*/ _object_type1_ammo_pack = 6ui8,
			/*nicename("Light Land Vehicle")*/ _object_type1_light_land_vehicle = 7ui8,
			/*nicename("Heavy Land Vehicle")*/ _object_type1_heavy_land_vehicle = 8ui8,
			/*nicename("Flying Vehicle")*/ _object_type1_flying_vehicle = 9ui8,
			/*nicename("Turret")*/ _object_type1_turret = 10ui8,
			/*nicename("Device")*/ _object_type1_device = 11ui8,
			/*nicename("Teleporter 2Way")*/ _object_type1_teleporter_2way = 12ui8,
			/*nicename("Teleporter Sender")*/ _object_type1_teleporter_sender = 13ui8,
			/*nicename("Teleporter Receiver")*/ _object_type1_teleporter_receiver = 14ui8,
			/*nicename("Player Spawn Location")*/ _object_type1_player_spawn_location = 15ui8,
			/*nicename("Player Respawn Zone")*/ _object_type1_player_respawn_zone = 16ui8,
			/*nicename("Secondary Objective")*/ _object_type1_secondary_objective = 17ui8,
			/*nicename("Primary Objective")*/ _object_type1_primary_objective = 18ui8,
			/*nicename("Named Location Area")*/ _object_type1_named_location_area = 19ui8,
			/*nicename("Danger Zone")*/ _object_type1_danger_zone = 20ui8,
			/*nicename("Fireteam 1 Respawn Zone")*/ _object_type1_fireteam_1_respawn_zone = 21ui8,
			/*nicename("Fireteam 2 Respawn Zone")*/ _object_type1_fireteam_2_respawn_zone = 22ui8,
			/*nicename("Fireteam 3 Respawn Zone")*/ _object_type1_fireteam_3_respawn_zone = 23ui8,
			/*nicename("Fireteam 4 Respawn Zone")*/ _object_type1_fireteam_4_respawn_zone = 24ui8,
			/*nicename("Safe Volume")*/ _object_type1_safe_volume = 25ui8,
			/*nicename("Kill Volume")*/ _object_type1_kill_volume = 26ui8,
			/*nicename("Cinematic Camera Position")*/ _object_type1_cinematic_camera_position = 27ui8,
		};

		enum nicename("Shape") e_shape : uint8_t
		{
			/*nicename("None")*/ _shape_none = 0ui8,
			/*nicename("Sphere")*/ _shape_sphere = 1ui8,
			/*nicename("Cylinder")*/ _shape_cylinder = 2ui8,
			/*nicename("Box")*/ _shape_box = 3ui8,
		};

		enum nicename("Spawn Timer Mode") e_spawn_timer_mode : uint8_t
		{
			/*nicename("On Death")*/ _spawn_timer_mode_on_death = 0ui8,
			/*nicename("On Disturbance")*/ _spawn_timer_mode_on_disturbance = 1ui8,
		};

		enum nicename("Teleporter Flags") b_teleporter_flags : uint8_t /* bitfield */
		{
			/*nicename("Disallows Players")*/ _teleporter_flags_disallows_players = 1ui8 << 0ui8,
			/*nicename("Allows Land Vehicles")*/ _teleporter_flags_allows_land_vehicles = 1ui8 << 1ui8,
			/*nicename("Allows Heavy Vehicles")*/ _teleporter_flags_allows_heavy_vehicles = 1ui8 << 2ui8,
			/*nicename("Allows Flying Vehicles")*/ _teleporter_flags_allows_flying_vehicles = 1ui8 << 3ui8,
			/*nicename("Allows Projectiles")*/ _teleporter_flags_allows_projectiles = 1ui8 << 4ui8,
		};

		enum nicename("Flags") b_flags1 : uint16_t /* bitfield */
		{
			/*nicename("Editor Only")*/ _flags1_editor_only = 1ui16 << 0ui16,
			/*nicename("Phased Physics")*/ _flags1_phased_physics = 1ui16 << 1ui16,
			/*nicename("Bit 2")*/ _flags1_bit_2 = 1ui16 << 2ui16,
			/*nicename("Bit 3")*/ _flags1_bit_3 = 1ui16 << 3ui16,
			/*nicename("Bit 4")*/ _flags1_bit_4 = 1ui16 << 4ui16,
			/*nicename("Bit 5")*/ _flags1_bit_5 = 1ui16 << 5ui16,
			/*nicename("Soft Area Boundary")*/ _flags1_soft_area_boundary = 1ui16 << 6ui16,
			/*nicename("Bit 7")*/ _flags1_bit_7 = 1ui16 << 7ui16,
			/*nicename("Bit 8")*/ _flags1_bit_8 = 1ui16 << 8ui16,
			/*nicename("Bit 9")*/ _flags1_bit_9 = 1ui16 << 9ui16,
			/*nicename("Bit 10")*/ _flags1_bit_10 = 1ui16 << 10ui16,
			/*nicename("Bit 11")*/ _flags1_bit_11 = 1ui16 << 11ui16,
			/*nicename("Bit 12")*/ _flags1_bit_12 = 1ui16 << 12ui16,
			/*nicename("Bit 13")*/ _flags1_bit_13 = 1ui16 << 13ui16,
			/*nicename("Bit 14")*/ _flags1_bit_14 = 1ui16 << 14ui16,
			/*nicename("Bit 15")*/ _flags1_bit_15 = 1ui16 << 15ui16,
		};

		int8_t __unknown0;
		e_object_type1 nicename("Object Type") object_type;
		b_teleporter_flags nicename("Teleporter Flags") teleporter_flags;
		int8_t __unknown1;
		float nicename("Radius/Width") radius_width;
		float nicename("Length") length;
		float nicename("Top") top;
		float nicename("Bottom") bottom;
		e_shape nicename("Shape") shape;
		e_spawn_timer_mode nicename("Spawn Timer Mode") spawn_timer_mode;
		int16_t nicename("Spawn Time") spawn_time;
		int16_t nicename("Abandon Time") abandon_time;
		b_flags1 nicename("Flags") flags;
		float __unknown2;
		int32_t __unknown3;
		int32_t __unknown4;
		s_tag_reference_legacy nicename("Child Object") child_object_reference;
		int32_t __unknown5;
		s_tag_reference_legacy nicename("Shape Shader") shape_shader_reference;
		s_tag_reference_legacy nicename("Shader 2") shader_2_reference;
		s_tag_reference_legacy __unknown6;
		s_tag_reference_legacy __unknown7;
		s_tag_reference_legacy nicename("Secondary Shader") secondary_shader_reference;
		s_tag_reference_legacy __unknown8;
		s_tag_reference_legacy __unknown9;
		s_tag_reference_legacy __unknown10;
	};

	struct nicename("Unknown") s_unknown2_definition_legacy
	{
		s_tag_reference_legacy __unknown0;
		s_tag_reference_legacy __unknown1;
		s_tag_reference_legacy __unknown2;
	};

	struct nicename("Pages") s_pages_definition_legacy
	{
		int16_t __unknown0;
		int16_t nicename("Image Index") image_index;
		string_id_legacy nicename("Page String") page_string;
	};

	e_object_type nicename("Object Type") object_type;
	int16_t __unknown0;
	b_flags nicename("Flags") flags;
	float nicename("Bounding Radius") bounding_radius;
	float nicename("Bounding Offset X") bounding_offset_x;
	float nicename("Bounding Offset Y") bounding_offset_y;
	float nicename("Bounding Offset Z") bounding_offset_z;
	float nicename("Horizontal Acceleration Scale") horizontal_acceleration_scale;
	float nicename("Vertical Acceleration Scale") vertical_acceleration_scale;
	float nicename("Angular Acceleration Scale") angular_acceleration_scale;
	e_lightmap_shadow_mode_size nicename("Lightmap Shadow Mode Size") lightmap_shadow_mode_size;
	e_sweetener_size nicename("Sweetener Size") sweetener_size;
	e_water_density nicename("Water Density") water_density;
	int32_t __unknown1;
	float nicename("Dynamic Light Sphere Radius") dynamic_light_sphere_radius;
	float nicename("Dynamic Light Sphere X Offset") dynamic_light_sphere_x_offset;
	float nicename("Dynamic Light Sphere Y Offset") dynamic_light_sphere_y_offset;
	float nicename("Dynamic Light Sphere Z Offset") dynamic_light_sphere_z_offset;
	string_id_legacy nicename("Generic HUD Text") generic_hud_text;
	s_tag_reference_legacy nicename("Generic Name List") generic_name_list_reference;
	s_tag_reference_legacy nicename("Generic Service Tag List") generic_service_tag_list_reference;
	string_id_legacy nicename("Default Variant") default_variant;
	s_tag_reference_legacy nicename("Model") model_reference;
	s_tag_reference_legacy nicename("Crate Object") crate_object_reference;
	s_tag_reference_legacy nicename("Collision Damage") collision_damage_reference;
	s_tag_reference_legacy nicename("Brittle Collision Damage") brittle_collision_damage_reference;
	s_tag_block_legacy<s_early_mover_properties_definition_legacy> nicename("Early Mover Properties") early_mover_properties_block;
	s_tag_reference_legacy nicename("Creation Effect") creation_effect_reference;
	s_tag_reference_legacy nicename("Material Effects") material_effects_reference;
	s_tag_reference_legacy nicename("Melee Impact") melee_impact_reference;
	s_tag_block_legacy<s_ai_properties_definition_legacy> nicename("AI Properties") ai_properties_block;
	s_tag_block_legacy<s_functions_definition_legacy> nicename("Functions") functions_block;
	s_tag_block_legacy<s_function_related_definition_legacy> nicename("Function Related") function_related_block;
	int16_t nicename("HUD Text Message Index") hud_text_message_index;
	int16_t __unknown2;
	s_tag_block_legacy<s_attachments_definition_legacy> nicename("Attachments") attachments_block;
	s_tag_block_legacy<s_material_responses_definition_legacy> nicename("Material Responses") material_responses_block;
	s_tag_block_legacy<s_jet_wash_definition_legacy> nicename("Jet Wash") jet_wash_block;
	s_tag_block_legacy<s_widgets_definition_legacy> nicename("Widgets") widgets_block;
	s_tag_block_legacy<s_change_color_definition_legacy> nicename("Change Color") change_color_block;
	s_tag_block_legacy<s_predicted_resources_definition_legacy> nicename("Predicted Resources") predicted_resources_block;
	s_tag_block_legacy<s_multiplayer_object_properties_definition_legacy> nicename("Multiplayer Object Properties") multiplayer_object_properties_block;
	s_tag_reference_legacy nicename("Simulation Interpolation") simulation_interpolation_reference;
	s_tag_block_legacy<s_unknown2_definition_legacy> __unknown3;
	// DEVICE : 
	b_flags1 nicename("Flags") flags1;
	float nicename("Power Transition Time") power_transition_time;
	float nicename("Power Acceleration Time") power_acceleration_time;
	float nicename("Position Transition Time") position_transition_time;
	float nicename("Position Acceleration Time") position_acceleration_time;
	float nicename("Depowered Position Transition Time") depowered_position_transition_time;
	float nicename("Depowered Position Acceleration Time") depowered_position_acceleration_time;
	b_lightmap_flags nicename("Lightmap Flags") lightmap_flags;
	s_tag_reference_legacy nicename("Open (Up)") open_up_reference;
	s_tag_reference_legacy nicename("Close (Down)") close_down_reference;
	s_tag_reference_legacy nicename("Opened") opened_reference;
	s_tag_reference_legacy nicename("Closed") closed_reference;
	s_tag_reference_legacy nicename("Depowered") depowered_reference;
	s_tag_reference_legacy nicename("Repowered") repowered_reference;
	float nicename("Delay Time") delay_time;
	s_tag_reference_legacy nicename("Delay Effect") delay_effect_reference;
	float nicename("Automatic Activation Radius") automatic_activation_radius;
	// TERMINAL : 
	s_undefined32_legacy __unknown4;
	string_id_legacy nicename("Action String") action_string;
	string_id_legacy nicename("Name") name;
	s_tag_reference_legacy nicename("Activation Sound") activation_sound_reference;
	s_tag_reference_legacy nicename("Illustration Bitmap") illustration_bitmap_reference;
	s_tag_reference_legacy nicename("Terminal Strings") terminal_strings_reference;
	s_tag_block_legacy<s_pages_definition_legacy> nicename("Pages") pages_block;
};
