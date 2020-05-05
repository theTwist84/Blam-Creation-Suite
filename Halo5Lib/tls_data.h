#pragma once

struct __declspec(align(4)) tls_data
{
	char* unknown0[2];
	struct data_array* simulation_gamestate_entities;
	struct main_gamestate_timing* main_gamestate_timing;
	struct main_render_timing* main_render_timing;
	struct main_time_globals* main_time_globals;
	struct preferences* preferences;
	char* unknown1C;
	char* threading;
	char* unknown24[4];
	int deterministic_random_seed;
	int filo_related;
	struct game_globals* game_globals;
	struct players_header* players_header;
	struct players_globals* players_globals;
	struct game_engine_globals* game_engine_globals;
	uint8_t* local_game_engine_globals;
	int game_time;
	int breakable_surface;
	data_array* breakable_surface_set_broken_event;
	struct player_mapping* player_mapping_globals;
	struct director_globals* director_globals;
	struct director_scripting* director_scripting;
	struct hs_thread_deterministic_data* hs_thread_deterministic_data;
	int hs_runtime;
	data_array* hs_global_data;
	data_array* hs_distributed_global_data;
	data_array* hs_thread_tracking_data;
	data_array* hs_thread_non_deterministic_data;
	char* unknown80[8];
	data_array* effect;
	data_array* effect_event;
	struct effect_location_globals* effect_location;
	int effect_counts;
	data_array* effect_geometry_sample;
	int effect_messaging_queue;
	int effect_lightprobes;
	int havok_gamestate;
	int halo_managed_memory;
	struct player_control_globals* player_control_globals;
	struct player_control_deterministic* player_control_deterministic;
	data_array* object_looping_sounds;
	int game_sound_globals;
	int game_sound_scripted_impulses;
	int s_structure_seam;
	int visibility_active_portals;
	struct campaign_metagame_globals* campaign_metagame;
	int observer_gamestate;
	struct observer_globals* observer_globals;
	struct rumble_globals* rumble_globals;
	int bink_gamestate;
	int unknownF4;
	struct c_font_cache_mt_safe* c_font_cache_mt_safe;
	int sound_classes;
	struct game_allegiance_globals* game_allegiance;
	int atmosphere_fog;
	int soft_surface;
	int game_sound_player_effects;
	data_array* havok_proxies;
	char* unknown114;
	LPWSTR* SavedGame;
	char* unknown11C[129];
	int cinematic_new;
	struct cinematic_globals* cinematic;
	int cinematic_light;
	struct physics_constants* physics_constants;
	int recorded_animations;
	struct game_save_globals* game_save;
	data_array* screen_effect;
	struct player_effect_globals* player_effect_globals;
	int scenario_interpolator;
	struct survival_mode_globals* survival_mode_globals;
	struct player_training_globals* player_training_globals;
	int kill_trigger_volume_state;
	int deterministic_game_sound;
	data_array* decal_system;
	int decal_counts;
	data_array* decal;
	int decal_messaging_queue;
	struct impact_globals* impact;
	data_array* impacts;
	data_array* impact_arrays;
	data_array* object_list_header;
	data_array* object_list_data;
	struct camera_script_globals* camera_script_globals;
	int particles;
	data_array* particle_system;
	data_array* contrail_system;
	data_array* contrail;
	data_array* contrail_location;
	data_array* contrail_profile;
	data_array* particle_location_data;
	data_array* light_volume_system;
	data_array* light_volume_location;
	data_array* light_volume;
	data_array* beam_system;
	data_array* beam;
	data_array* beam_location;
	int unknown3B0_render_postprocess_color_tweaking;
	int ragdolls;
	data_array* particle_emitter;
	struct rasterizer_game_states* rasterizer_game_states;
	struct hue_saturation_control* hue_saturation_control;
	int unknown3C4;
	struct scripted_exposure_globals* scripted_exposure_globals;
	struct render_hud_globals* render_hud_globals;
	struct water_interaction_ripples* water_interaction_ripples;
	struct render_texture_globals* render_texture_camera_globals;
	int render_game_globals;
	int depth_of_field_game_globals;
	struct cached_object_render_states_globals* cached_object_render_states;
	data_array* particle_emitter_gpu_row;
	data_array* particle_emitter_gpu_1;
	int particle_emitter_gpu_2;
	data_array* beam_gpu;
	data_array* beam_gpu_row;
	int particle_emitter_gpu_3;
	data_array* contrail_gpu_row;
	data_array* contrail_gpu;
	int particle_emitter_gpu_4;
	data_array* light_volume_gpu;
	data_array* light_volume_gpu_row;
	int particle_emitter_gpu_5;
	int rasterizer_implicit_geometry_data;
	int render_object;
	int shield_render_cache_message;
	struct chud_persistent_user_data* chud_persistent_user_data;
	struct chud_persistent_global_data* chud_persistent_global_data;
	data_array* user_widget[4];
	struct first_person_orientation_globals* first_person_orientation_globals;
	struct first_person_weapons* first_person_weapons;
	int cortana_globals;
	int campaign_objectives;
	struct object_header* object_header;
	struct object_globals* object_globals;
	int objects_memory_pool;
	struct object_name_list* object_name_list;
	int object_messaging_queue;
	data_array* collideable_object;
	int damage_globals;
	int unknown464;
	data_array* noncollideable_object;
	int noncollideable_cluster_reference;
	char* unknown470;
	int object_render_data;
	int damage;
	int object_placement;
	struct device_groups_globals* device_groups;
	int object_scripting;
	struct s_object_broadphase* object_broadphase;
	struct object_early_movers* object_early_movers;
	int object_schedule;
	int object_activation_regions;
	data_array* lights;
	int* lights_game_globals;
	data_array* light_data_reference;
	int light_cluster_reference;
	int light_first_data;
	int nondeterministic_render_light_data;
	data_array* widget;
	int recycling_volumes;
	data_array* recycling_group;
	data_array* muffin;
	data_array* leaf_system;
	data_array* antenna;
	struct cloth_globals* cloth;
	char* unknown4CC[17];
	char* unknown528;
	char* unknown52C[2];
	struct actor_globals* actor;
	int actor_firing_position;
	int ai_reference_frame;
	struct ai_globals* ai;
	struct ai_player_state_globals* ai_player_state_globals;
	data_array* vocalization_records;
	struct vocalization_timers* vocalization_timers;
	struct command_script_globals* command_scripts;
	data_array* objectives;
	struct s_task_record_datum* task_records;
	struct squads_globals* squads;
	struct squad_group_globals* squad_group;
	struct swarm_globals* swarm;
	int swarm_spawner;
	int spawner;
	int dynamic_firing_points;
	struct propref_globals* propref;
	struct prop_globals* prop;
	struct tracking_globals* tracking;
	struct joint_state_globals* joint_state;
	struct clump_globals* clump;
	struct squad_patrol_globals* squad_patrol;
	struct flocks_globals* flocks;
	struct formations_globals* formations;
	int vision_mode;
};
