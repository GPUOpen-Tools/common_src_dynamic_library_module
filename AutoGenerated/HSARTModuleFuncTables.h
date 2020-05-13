//==============================================================================
// Copyright (c) 2015-2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief This file is no longer autogenerated
//==============================================================================

#ifndef _HSARTMODULEFUNCTABLES_H_
#define _HSARTMODULEFUNCTABLES_H_

#define COMMON_1_2_AND_1_3 \
    X(status_string) \
    X(init) \
    X(shut_down) \
    X(system_get_info) \
    X(system_extension_supported) \
    X(system_get_extension_table) \
    X(agent_get_info) \
    X(iterate_agents) \
    X(agent_get_exception_policies) \
    X(agent_extension_supported) \
    X(signal_create) \
    X(signal_destroy) \
    X(signal_load_relaxed) \
    X(signal_store_relaxed) \
    X(signal_exchange_relaxed) \
    X(signal_cas_relaxed) \
    X(signal_add_relaxed) \
    X(signal_subtract_relaxed) \
    X(signal_and_relaxed) \
    X(signal_or_relaxed) \
    X(signal_xor_relaxed) \
    X(signal_wait_relaxed) \
    X(queue_create) \
    X(soft_queue_create) \
    X(queue_destroy) \
    X(queue_inactivate) \
    X(queue_load_read_index_relaxed) \
    X(queue_load_write_index_relaxed) \
    X(queue_store_write_index_relaxed) \
    X(queue_cas_write_index_relaxed) \
    X(queue_add_write_index_relaxed) \
    X(queue_store_read_index_relaxed) \
    X(region_get_info) \
    X(agent_iterate_regions) \
    X(memory_allocate) \
    X(memory_free) \
    X(memory_copy) \
    X(memory_assign_agent) \
    X(memory_register) \
    X(memory_deregister) \
    X(isa_from_name) \
    X(isa_get_info) \
    X(isa_compatible) \
    X(executable_create) \
    X(executable_destroy) \
    X(executable_freeze) \
    X(executable_get_info) \
    X(executable_global_variable_define) \
    X(executable_agent_global_variable_define) \
    X(executable_readonly_variable_define) \
    X(executable_validate) \
    X(executable_get_symbol) \
    X(executable_symbol_get_info) \
    X(executable_iterate_symbols) \

#define HSA_RUNTIME_API_TABLE COMMON_1_2_AND_1_3 \
    X(extension_get_name) \
    X(system_major_extension_supported) \
    X(system_get_major_extension_table) \
    X(cache_get_info) \
    X(agent_iterate_caches) \
    X(agent_major_extension_supported) \
    X(signal_load_scacquire) \
    X(signal_store_screlease) \
    X(signal_silent_store_relaxed) \
    X(signal_silent_store_screlease) \
    X(signal_exchange_scacq_screl) \
    X(signal_exchange_scacquire) \
    X(signal_exchange_screlease) \
    X(signal_cas_scacq_screl) \
    X(signal_cas_scacquire) \
    X(signal_cas_screlease) \
    X(signal_add_scacq_screl) \
    X(signal_add_scacquire) \
    X(signal_add_screlease) \
    X(signal_subtract_scacq_screl) \
    X(signal_subtract_scacquire) \
    X(signal_subtract_screlease) \
    X(signal_and_scacq_screl) \
    X(signal_and_scacquire) \
    X(signal_and_screlease) \
    X(signal_or_scacq_screl) \
    X(signal_or_scacquire) \
    X(signal_or_screlease) \
    X(signal_xor_scacq_screl) \
    X(signal_xor_scacquire) \
    X(signal_xor_screlease) \
    X(signal_wait_scacquire) \
    X(signal_group_create) \
    X(signal_group_destroy) \
    X(signal_group_wait_any_scacquire) \
    X(signal_group_wait_any_relaxed) \
    X(queue_load_read_index_scacquire) \
    X(queue_load_write_index_scacquire) \
    X(queue_store_write_index_screlease) \
    X(queue_cas_write_index_scacq_screl) \
    X(queue_cas_write_index_scacquire) \
    X(queue_cas_write_index_screlease) \
    X(queue_add_write_index_scacq_screl) \
    X(queue_add_write_index_scacquire) \
    X(queue_add_write_index_screlease) \
    X(queue_store_read_index_screlease) \
    X(agent_iterate_isas) \
    X(isa_get_info_alt) \
    X(isa_get_exception_policies) \
    X(isa_get_round_method) \
    X(wavefront_get_info) \
    X(isa_iterate_wavefronts) \
    X(code_object_reader_create_from_file) \
    X(code_object_reader_create_from_memory) \
    X(code_object_reader_destroy) \
    X(executable_create_alt) \
    X(executable_load_program_code_object) \
    X(executable_load_agent_code_object) \
    X(executable_validate_alt) \
    X(executable_get_symbol_by_name) \
    X(executable_iterate_agent_symbols) \
    X(executable_iterate_program_symbols) \
    X(code_object_serialize) \
    X(code_object_deserialize) \
    X(code_object_destroy) \
    X(code_object_get_info) \
    X(executable_load_code_object) \
    X(code_object_get_symbol) \
    X(code_object_get_symbol_from_name) \
    X(code_symbol_get_info) \
    X(code_object_iterate_symbols) \

#define HSA_NON_INTERCEPTABLE_RUNTIME_API_TABLE \
    X(signal_load_acquire) \
    X(signal_store_release) \
    X(signal_exchange_acq_rel) \
    X(signal_exchange_acquire) \
    X(signal_exchange_release) \
    X(signal_cas_acq_rel) \
    X(signal_cas_acquire) \
    X(signal_cas_release) \
    X(signal_add_acq_rel) \
    X(signal_add_acquire) \
    X(signal_add_release) \
    X(signal_subtract_acq_rel) \
    X(signal_subtract_acquire) \
    X(signal_subtract_release) \
    X(signal_and_acq_rel) \
    X(signal_and_acquire) \
    X(signal_and_release) \
    X(signal_or_acq_rel) \
    X(signal_or_acquire) \
    X(signal_or_release) \
    X(signal_xor_acq_rel) \
    X(signal_xor_acquire) \
    X(signal_xor_release) \
    X(signal_wait_acquire) \
    X(queue_load_read_index_acquire) \
    X(queue_load_write_index_acquire) \
    X(queue_store_write_index_release) \
    X(queue_cas_write_index_acq_rel) \
    X(queue_cas_write_index_acquire) \
    X(queue_cas_write_index_release) \
    X(queue_add_write_index_acq_rel) \
    X(queue_add_write_index_acquire) \
    X(queue_add_write_index_release) \
    X(queue_store_read_index_release) \

#define HSA_EXT_FINALIZE_API_TABLE \
    X(ext_program_create) \
    X(ext_program_destroy) \
    X(ext_program_add_module) \
    X(ext_program_iterate_modules) \
    X(ext_program_get_info) \
    X(ext_program_finalize) \

#define HSA_EXT_IMAGE_API_TABLE \
    X(ext_image_get_capability) \
    X(ext_image_data_get_info) \
    X(ext_image_create) \
    X(ext_image_destroy) \
    X(ext_image_copy) \
    X(ext_image_import) \
    X(ext_image_export) \
    X(ext_image_clear) \
    X(ext_sampler_create) \
    X(ext_sampler_destroy) \
    X(ext_image_get_capability_with_layout) \
    X(ext_image_data_get_info_with_layout) \
    X(ext_image_create_with_layout) \

#define HSA_EXT_AMD_API_TABLE \
    X(amd_coherency_get_type) \
    X(amd_coherency_set_type) \
    X(amd_profiling_set_profiler_enabled) \
    X(amd_profiling_async_copy_enable) \
    X(amd_profiling_get_dispatch_time) \
    X(amd_profiling_get_async_copy_time) \
    X(amd_profiling_convert_tick_to_system_domain) \
    X(amd_signal_create) \
    X(amd_signal_async_handler) \
    X(amd_async_function) \
    X(amd_signal_wait_any) \
    X(amd_image_get_info_max_dim) \
    X(amd_queue_cu_set_mask) \
    X(amd_memory_pool_get_info) \
    X(amd_agent_iterate_memory_pools) \
    X(amd_memory_pool_allocate) \
    X(amd_memory_pool_free) \
    X(amd_memory_async_copy) \
    X(amd_memory_async_copy_rect) \
    X(amd_agent_memory_pool_get_info) \
    X(amd_agents_allow_access) \
    X(amd_memory_pool_can_migrate) \
    X(amd_memory_migrate) \
    X(amd_memory_lock) \
    X(amd_memory_lock_to_pool) \
    X(amd_memory_unlock) \
    X(amd_memory_fill) \
    X(amd_interop_map_buffer) \
    X(amd_interop_unmap_buffer) \
    X(amd_image_create) \
    X(amd_pointer_info) \
    X(amd_pointer_info_set_userdata) \
    X(amd_ipc_memory_create) \
    X(amd_ipc_memory_attach) \
    X(amd_ipc_memory_detach) \
    X(amd_ipc_signal_create) \
    X(amd_ipc_signal_attach) \
    X(amd_queue_set_priority) \

#define HSA_VEN_AMD_LOADER_API_TABLE \
    X(ven_amd_loader_query_host_address) \
    X(ven_amd_loader_query_segment_descriptors) \
    X(ven_amd_loader_query_executable) \
    X(ven_amd_loader_executable_iterate_loaded_code_objects) \
    X(ven_amd_loader_loaded_code_object_get_info) \

#define HSA_VEN_AMD_AQL_PROFILE_API_TABLE \
    X(ven_amd_aqlprofile_version_major) \
    X(ven_amd_aqlprofile_version_minor) \
    X(ven_amd_aqlprofile_validate_event) \
    X(ven_amd_aqlprofile_start) \
    X(ven_amd_aqlprofile_stop) \
    X(ven_amd_aqlprofile_read) \
    X(ven_amd_aqlprofile_legacy_get_pm4) \
    X(ven_amd_aqlprofile_get_info) \
    X(ven_amd_aqlprofile_iterate_data) \
    X(ven_amd_aqlprofile_error_string) \

#endif // _HSARTMODULEFUNCTABLES_H_

