/****************************************************************
 *								*
 * Copyright (c) 2010-2015 Fidelity National Information 	*
 * Services, Inc. and/or its subsidiaries. All rights reserved.	*
 *								*
 *	This source code contains the intellectual property	*
 *	of its copyright holder(s), and is made available	*
 *	under a license.  If you do not know the terms of	*
 *	the license, please stop and do not read further.	*
 *								*
 ****************************************************************/

/* Generated by /usr/library/V62002/tools/gen_gtm_threadgbl_deftypes.csh */

#ifndef GTM_THREADGBL_DEFTYPES_INCLUDED
#define GTM_THREADGBL_DEFTYPES_INCLUDED
/* Output selection criteria for PRO build */
#if !defined(DEBUG) || defined(PRO_BUILD)
# define ggo_grabbing_crit 0
# define ggt_grabbing_crit gd_region *
# define ggo_boolchain 8
# define ggt_boolchain triple
# define ggo_boolchain_ptr 144
# define ggt_boolchain_ptr triple *
# define ggo_bool_targ_anchor 152
# define ggt_bool_targ_anchor tbp
# define ggo_bool_targ_ptr 176
# define ggt_bool_targ_ptr tbp *
# define ggo_code_generated 184
# define ggt_code_generated boolean_t
# define ggo_codegen_padlen 188
# define ggt_codegen_padlen int4
# define ggo_compile_time 192
# define ggt_compile_time boolean_t
# define ggo_curtchain 200
# define ggt_curtchain triple *
# define ggo_director_ident 208
# define ggt_director_ident mstr
# define ggo_director_mval 224
# define ggt_director_mval mval
# define ggo_director_token 256
# define ggt_director_token char
# define ggo_dollar_zcstatus 260
# define ggt_dollar_zcstatus int4
# define ggo_expr_depth 264
# define ggt_expr_depth unsigned int
# define ggo_expr_start 272
# define ggt_expr_start triple *
# define ggo_expr_start_orig 280
# define ggt_expr_start_orig triple *
# define ggo_defined_symbols 288
# define ggt_defined_symbols struct sym_table *
# define ggo_for_stack_ptr 296
# define ggt_for_stack_ptr oprtype **
# define ggo_gtm_fullbool 304
# define ggt_gtm_fullbool unsigned int
# define ggo_ind_result 312
# define ggt_ind_result mval *
# define ggo_ind_source 320
# define ggt_ind_source mval *
# define ggo_indirection_mval 328
# define ggt_indirection_mval mval
# define ggo_last_source_column 360
# define ggt_last_source_column int
# define ggo_max_advancewindow_line 364
# define ggt_max_advancewindow_line int4
# define ggo_linkage_first 368
# define ggt_linkage_first struct linkage_entry *
# define ggo_linkage_last 376
# define ggt_linkage_last struct linkage_entry *
# define ggo_objhash_state 384
# define ggt_objhash_state hash128_state_t
# define ggo_pos_in_chain 424
# define ggt_pos_in_chain triple
# define ggo_s2n_intlit 560
# define ggt_s2n_intlit boolean_t
# define ggo_routine_source_offset 564
# define ggt_routine_source_offset uint4
# define ggo_saw_side_effect 568
# define ggt_saw_side_effect boolean_t
# define ggo_shift_side_effects 572
# define ggt_shift_side_effects int
# define ggo_side_effect_base 576
# define ggt_side_effect_base boolean_t *
# define ggo_side_effect_depth 584
# define ggt_side_effect_depth uint4
# define ggo_side_effect_handling 588
# define ggt_side_effect_handling int
# define ggo_source_error_found 592
# define ggt_source_error_found int4
# define ggo_temp_subs 596
# define ggt_temp_subs boolean_t
# define ggo_trigger_compile_and_link 600
# define ggt_trigger_compile_and_link boolean_t
# define ggo_window_ident 608
# define ggt_window_ident mstr
# define ggo_window_mval 624
# define ggt_window_mval mval
# define ggo_window_token 656
# define ggt_window_token char
# define ggo_dbinit_max_hrtbt_delta 660
# define ggt_dbinit_max_hrtbt_delta uint4
# define ggo_dollar_zmaxtptime 664
# define ggt_dollar_zmaxtptime int4
# define ggo_donot_commit 668
# define ggt_donot_commit boolean_t
# define ggo_donot_write_inctn_in_wcs_recover 672
# define ggt_donot_write_inctn_in_wcs_recover boolean_t
# define ggo_gbuff_limit 680
# define ggt_gbuff_limit mval
# define ggo_gd_targ_tn 712
# define ggt_gd_targ_tn trans_num
# define ggo_gd_targ_reg_array 720
# define ggt_gd_targ_reg_array trans_num *
# define ggo_gd_targ_reg_array_size 728
# define ggt_gd_targ_reg_array_size uint4
# define ggo_gd_targ_addr 736
# define ggt_gd_targ_addr gd_addr *
# define ggo_gd_targ_gvnh_reg 744
# define ggt_gd_targ_gvnh_reg gvnh_reg_t *
# define ggo_gd_targ_map 752
# define ggt_gd_targ_map gd_binding *
# define ggo_gtm_custom_errors 760
# define ggt_gtm_custom_errors mstr
# define ggo_gv_extname_size 776
# define ggt_gv_extname_size int4
# define ggo_gv_last_subsc_null 780
# define ggt_gv_last_subsc_null boolean_t
# define ggo_gv_mergekey2 784
# define ggt_gv_mergekey2 gv_key *
# define ggo_gv_reorgkey 792
# define ggt_gv_reorgkey gv_key *
# define ggo_gv_some_subsc_null 800
# define ggt_gv_some_subsc_null boolean_t
# define ggo_gv_sparekey 808
# define ggt_gv_sparekey gv_key *
# define ggo_gv_sparekey_mval 816
# define ggt_gv_sparekey_mval mval
# define ggo_gv_sparekey_size 848
# define ggt_gv_sparekey_size int4
# define ggo_gv_tporigkey_ptr 856
# define ggt_gv_tporigkey_ptr gv_orig_key_array *
# define ggo_gv_tporig_extnam_str 864
# define ggt_gv_tporig_extnam_str mstr
# define ggo_in_gvcst_redo_root_search 880
# define ggt_in_gvcst_redo_root_search boolean_t
# define ggo_in_op_gvget 884
# define ggt_in_op_gvget boolean_t
# define ggo_issue_DBROLLEDBACK_anyways 888
# define ggt_issue_DBROLLEDBACK_anyways boolean_t
# define ggo_last_fnquery_return_subcnt 892
# define ggt_last_fnquery_return_subcnt int
# define ggo_last_fnquery_return_varname 896
# define ggt_last_fnquery_return_varname mval
# define ggo_ok_to_call_wcs_recover 928
# define ggt_ok_to_call_wcs_recover boolean_t
# define ggo_in_gvcst_bmp_mark_free 932
# define ggt_in_gvcst_bmp_mark_free boolean_t
# define ggo_prev_gv_target 936
# define ggt_prev_gv_target gv_namehead *
# define ggo_ready2signal_gvundef 944
# define ggt_ready2signal_gvundef boolean_t
# define ggo_redo_rootsrch_ctxt 952
# define ggt_redo_rootsrch_ctxt redo_root_search_context
# define ggo_semwait2long 2072
# define ggt_semwait2long volatile boolean_t
# define ggo_skip_file_corrupt_check 2076
# define ggt_skip_file_corrupt_check boolean_t
# define ggo_tpnotacidtime 2080
# define ggt_tpnotacidtime int4
# define ggo_tp_restart_count 2084
# define ggt_tp_restart_count uint4
# define ggo_tp_restart_dont_counts 2088
# define ggt_tp_restart_dont_counts int4
# define ggo_tp_restart_entryref 2096
# define ggt_tp_restart_entryref mval
# define ggo_tp_restart_failhist_indx 2128
# define ggt_tp_restart_failhist_indx int4
# define ggo_tprestart_syslog_delta 2132
# define ggt_tprestart_syslog_delta int4
# define ggo_tprestart_syslog_limit 2136
# define ggt_tprestart_syslog_limit int4
# define ggo_transform 2140
# define ggt_transform boolean_t
# define ggo_wcs_recover_done 2144
# define ggt_wcs_recover_done boolean_t
# define ggo_in_op_fnnext 2148
# define ggt_in_op_fnnext boolean_t
# define ggo_local_collseq 2152
# define ggt_local_collseq collseq *
# define ggo_local_collseq_stdnull 2160
# define ggt_local_collseq_stdnull boolean_t
# define ggo_local_coll_nums_as_strings 2164
# define ggt_local_coll_nums_as_strings boolean_t
# define ggo_lv_null_subs 2168
# define ggt_lv_null_subs int
# define ggo_max_lcl_coll_xform_bufsiz 2172
# define ggt_max_lcl_coll_xform_bufsiz int
# define ggo_replgbl 2176
# define ggt_replgbl replgbl_t
# define ggo_tqread_nowait 2200
# define ggt_tqread_nowait boolean_t
# define ggo_arlink_enabled 2204
# define ggt_arlink_enabled boolean_t
# define ggo_arlink_loaded 2208
# define ggt_arlink_loaded uint4
# define ggo_collseq_list 2216
# define ggt_collseq_list collseq *
# define ggo_create_fatal_error_zshow_dmp_fptr 2224
# define ggt_create_fatal_error_zshow_dmp_fptr void
# define gga_create_fatal_error_zshow_dmp_fptr (void)
typedef void (*ggf_create_fatal_error_zshow_dmp_fptr)(void);
# define ggo_disable_sigcont 2232
# define ggt_disable_sigcont boolean_t
# define ggo_dollar_zcompile 2240
# define ggt_dollar_zcompile mstr
# define ggo_dollar_zmode 2256
# define ggt_dollar_zmode mval
# define ggo_dollar_zonlnrlbk 2288
# define ggt_dollar_zonlnrlbk int
# define ggo_dollar_zclose 2292
# define ggt_dollar_zclose int
# define ggo_dollar_zroutines 2296
# define ggt_dollar_zroutines mstr
# define ggo_error_on_jnl_file_lost 2312
# define ggt_error_on_jnl_file_lost unsigned int
# define ggo_fnzsearch_lv_vars 2320
# define ggt_fnzsearch_lv_vars lv_val *
# define ggo_fnzsearch_sub_mval 2328
# define ggt_fnzsearch_sub_mval mval
# define ggo_fnzsearch_nullsubs_sav 2360
# define ggt_fnzsearch_nullsubs_sav int
# define ggo_fnzsearch_globbuf_ptr 2368
# define ggt_fnzsearch_globbuf_ptr glob_t *
# define ggo_glvn_pool_ptr 2376
# define ggt_glvn_pool_ptr glvn_pool *
# define ggo_gtm_env_init_started 2384
# define ggt_gtm_env_init_started boolean_t
# define ggo_gtm_env_xlate_entry 2392
# define ggt_gtm_env_xlate_entry int
# define gga_gtm_env_xlate_entry ()
typedef int (*ggf_gtm_env_xlate_entry)();
# define ggo_gtm_environment_init 2400
# define ggt_gtm_environment_init boolean_t
# define ggo_gtm_sigusr1_handler 2408
# define ggt_gtm_sigusr1_handler void
# define gga_gtm_sigusr1_handler (void)
typedef void (*ggf_gtm_sigusr1_handler)(void);
# define ggo_gtm_linktmpdir 2416
# define ggt_gtm_linktmpdir mstr
# define ggo_gtm_trctbl_cur 2432
# define ggt_gtm_trctbl_cur trctbl_entry *
# define ggo_gtm_trctbl_end 2440
# define ggt_gtm_trctbl_end trctbl_entry *
# define ggo_gtm_trctbl_groups 2448
# define ggt_gtm_trctbl_groups unsigned int
# define ggo_gtm_trctbl_start 2456
# define ggt_gtm_trctbl_start trctbl_entry *
# define ggo_gtm_waitstuck_script 2464
# define ggt_gtm_waitstuck_script mstr
# define ggo_gtmprompt 2480
# define ggt_gtmprompt mstr
# define ggo_gtmsecshr_comkey 2496
# define ggt_gtmsecshr_comkey unsigned int
# define ggo_in_zwrite 2500
# define ggt_in_zwrite boolean_t
# define ggo_lab_lnr 2504
# define ggt_lab_lnr lnr_tabent **
# define ggo_jobexam_counter 2512
# define ggt_jobexam_counter unsigned int
# define ggo_lnk_proxy 2520
# define ggt_lnk_proxy lnk_tabent_proxy
# define ggo_mprof_alloc_reclaim 2544
# define ggt_mprof_alloc_reclaim boolean_t
# define ggo_mprof_chunk_avail_size 2548
# define ggt_mprof_chunk_avail_size int
# define ggo_mprof_env_gbl_name 2552
# define ggt_mprof_env_gbl_name mval
# define ggo_mprof_ptr 2584
# define ggt_mprof_ptr mprof_wrapper *
# define ggo_mprof_reclaim_addr 2592
# define ggt_mprof_reclaim_addr char *
# define ggo_mprof_reclaim_cnt 2600
# define ggt_mprof_reclaim_cnt int
# define ggo_mprof_stack_curr_frame 2608
# define ggt_mprof_stack_curr_frame mprof_stack_frame *
# define ggo_mprof_stack_next_frame 2616
# define ggt_mprof_stack_next_frame mprof_stack_frame *
# define ggo_open_relinkctl_list 2624
# define ggt_open_relinkctl_list open_relinkctl_sgm *
# define ggo_relinkctl_shm_min_index 2632
# define ggt_relinkctl_shm_min_index int
# define ggo_gtm_autorelink_keeprtn 2636
# define ggt_gtm_autorelink_keeprtn boolean_t
# define ggo_open_shlib_root 2640
# define ggt_open_shlib_root open_shlib *
# define ggo_parm_pool_ptr 2648
# define ggt_parm_pool_ptr parm_pool *
# define ggo_parms_cnt 2656
# define ggt_parms_cnt unsigned int
# define ggo_zpeek_regname 2660
# define ggt_zpeek_regname char
# define ggl_zpeek_regname 31
# define ggo_zpeek_regname_len 2692
# define ggt_zpeek_regname_len int
# define ggo_zpeek_reg_ptr 2696
# define ggt_zpeek_reg_ptr gd_region *
# define ggo_pipefifo_interrupt 2704
# define ggt_pipefifo_interrupt int
# define ggo_prof_fp 2712
# define ggt_prof_fp mprof_stack_frame *
# define ggo_relink_allowed 2720
# define ggt_relink_allowed int
# define ggo_save_zhist 2728
# define ggt_save_zhist zro_hist *
# define ggo_set_zroutines_cycle 2736
# define ggt_set_zroutines_cycle uint4
# define ggo_trans_code_pop 2744
# define ggt_trans_code_pop mval *
# define ggo_view_ydirt_str 2752
# define ggt_view_ydirt_str char *
# define ggo_view_ydirt_str_len 2760
# define ggt_view_ydirt_str_len int4
# define ggo_zdate_form 2764
# define ggt_zdate_form int4
# define ggo_zintcmd_active 2768
# define ggt_zintcmd_active zintcmd_active_info
# define ggl_zintcmd_active 72
# define ggo_zro_root 2840
# define ggt_zro_root zro_ent *
# define ggo_zsearch_var 2848
# define ggt_zsearch_var lv_val *
# define ggo_poll_fds_buffer 2856
# define ggt_poll_fds_buffer char *
# define ggo_poll_fds_buffer_size 2864
# define ggt_poll_fds_buffer_size size_t
# define ggo_socket_handle_counter 2872
# define ggt_socket_handle_counter int
# define ggo_director_string 2876
# define ggt_director_string char
# define ggl_director_string 32
# define ggo_fnpca 2912
# define ggt_fnpca fnpc_area
# define ggo_for_stack 21328
# define ggt_for_stack oprtype *
# define ggl_for_stack 256
# define ggo_for_temps 21584
# define ggt_for_temps boolean_t
# define ggl_for_temps 128
# define ggo_last_fnquery_return_sub 21712
# define ggt_last_fnquery_return_sub mval
# define ggl_last_fnquery_return_sub 1024
# define ggo_lcl_coll_xform_buff 22736
# define ggt_lcl_coll_xform_buff char *
# define ggo_protmem_ba 22744
# define ggt_protmem_ba mstr
# define ggo_parm_ary 22760
# define ggt_parm_ary char *
# define ggl_parm_ary 8192
# define ggo_parm_ary_len 30952
# define ggt_parm_ary_len int
# define ggl_parm_ary_len 4096
# define ggo_parm_str_len 35048
# define ggt_parm_str_len int
# define ggl_parm_str_len 4096
# define ggo_prombuf 39144
# define ggt_prombuf char
# define ggl_prombuf 32
# define ggo_tp_restart_failhist_arry 39176
# define ggt_tp_restart_failhist_arry char
# define ggl_tp_restart_failhist_arry 32
# define ggo_window_string 39208
# define ggt_window_string char
# define ggl_window_string 32
# define ggo_tmp_object_file_name 39240
# define ggt_tmp_object_file_name char
# define ggl_tmp_object_file_name 4097
# define ggo_last_va_list_ptr 43344
# define ggt_last_va_list_ptr va_list
# define ggo_util_outbuff 43368
# define ggt_util_outbuff char
# define ggl_util_outbuff 6144
# define ggo_util_outbuff_ptr 49512
# define ggt_util_outbuff_ptr char *
# define ggo_util_outptr 49520
# define ggt_util_outptr char *
# define ggo_callin_hashtab 49528
# define ggt_callin_hashtab hash_table_str *
# define ggo_ci_table 49536
# define ggt_ci_table callin_entry_list *
# define ggo_extcall_package_root 49544
# define ggt_extcall_package_root struct extcall_package_list *
# define ggo_gtmci_nested_level 49552
# define ggt_gtmci_nested_level unsigned int
# define ggo_temp_fgncal_stack 49560
# define ggt_temp_fgncal_stack unsigned char *
# define ggo_midchild_send_locals 49568
# define ggt_midchild_send_locals boolean_t
# define ggo_want_empty_gvts 49572
# define ggt_want_empty_gvts boolean_t
# define ggo_in_mu_swap_root_state 49576
# define ggt_in_mu_swap_root_state unsigned int
# define ggo_prev_t_tries 49580
# define ggt_prev_t_tries unsigned int
# define ggo_rlbk_during_redo_root 49584
# define ggt_rlbk_during_redo_root boolean_t
# define ggo_mlk_yield_pid 49588
# define ggt_mlk_yield_pid uint4
# define ggo_jnl_extract_nocol 49592
# define ggt_jnl_extract_nocol uint4
# define ggo_skip_gtm_putmsg 49596
# define ggt_skip_gtm_putmsg boolean_t
# define ggo_spangbl_seen 49600
# define ggt_spangbl_seen boolean_t
# define ggo_no_spangbls 49604
# define ggt_no_spangbls boolean_t
# define ggo_max_fid_index 49608
# define ggt_max_fid_index int
# define ggo_is_mu_rndwn_rlnkctl 49612
# define ggt_is_mu_rndwn_rlnkctl int
# define ggo_expand_prev_key 49616
# define ggt_expand_prev_key boolean_t
# define ggo_gtm_autorelink_ctlmax 49620
# define ggt_gtm_autorelink_ctlmax uint4
# define ggo_gvt_triggers_read_this_tn 49624
# define ggt_gvt_triggers_read_this_tn boolean_t
# define ggo_op_fntext_tlevel 49628
# define ggt_op_fntext_tlevel uint4
# define ggo_in_op_fntext 49632
# define ggt_in_op_fntext boolean_t
# define ggo_ztrigbuff 49640
# define ggt_ztrigbuff char *
# define ggo_ztrigbuffAllocLen 49648
# define ggt_ztrigbuffAllocLen int
# define ggo_ztrigbuffLen 49652
# define ggt_ztrigbuffLen int
# define ggo_ztrig_use_io_curr_device 49656
# define ggt_ztrig_use_io_curr_device boolean_t
# define size_gtm_threadgbl_struct 49664
#else
# define ggo_grabbing_crit 0
# define ggt_grabbing_crit gd_region *
# define ggo_boolchain 8
# define ggt_boolchain triple
# define ggo_boolchain_ptr 144
# define ggt_boolchain_ptr triple *
# define ggo_bool_targ_anchor 152
# define ggt_bool_targ_anchor tbp
# define ggo_bool_targ_ptr 176
# define ggt_bool_targ_ptr tbp *
# define ggo_code_generated 184
# define ggt_code_generated boolean_t
# define ggo_codegen_padlen 188
# define ggt_codegen_padlen int4
# define ggo_compile_time 192
# define ggt_compile_time boolean_t
# define ggo_curtchain 200
# define ggt_curtchain triple *
# define ggo_director_ident 208
# define ggt_director_ident mstr
# define ggo_director_mval 224
# define ggt_director_mval mval
# define ggo_director_token 256
# define ggt_director_token char
# define ggo_dollar_zcstatus 260
# define ggt_dollar_zcstatus int4
# define ggo_expr_depth 264
# define ggt_expr_depth unsigned int
# define ggo_expr_start 272
# define ggt_expr_start triple *
# define ggo_expr_start_orig 280
# define ggt_expr_start_orig triple *
# define ggo_defined_symbols 288
# define ggt_defined_symbols struct sym_table *
# define ggo_for_stack_ptr 296
# define ggt_for_stack_ptr oprtype **
# define ggo_gtm_fullbool 304
# define ggt_gtm_fullbool unsigned int
# define ggo_ind_result 312
# define ggt_ind_result mval *
# define ggo_ind_source 320
# define ggt_ind_source mval *
# define ggo_indirection_mval 328
# define ggt_indirection_mval mval
# define ggo_last_source_column 360
# define ggt_last_source_column int
# define ggo_max_advancewindow_line 364
# define ggt_max_advancewindow_line int4
# define ggo_linkage_first 368
# define ggt_linkage_first struct linkage_entry *
# define ggo_linkage_last 376
# define ggt_linkage_last struct linkage_entry *
# define ggo_objhash_state 384
# define ggt_objhash_state hash128_state_t
# define ggo_pos_in_chain 424
# define ggt_pos_in_chain triple
# define ggo_s2n_intlit 560
# define ggt_s2n_intlit boolean_t
# define ggo_routine_source_offset 564
# define ggt_routine_source_offset uint4
# define ggo_saw_side_effect 568
# define ggt_saw_side_effect boolean_t
# define ggo_shift_side_effects 572
# define ggt_shift_side_effects int
# define ggo_side_effect_base 576
# define ggt_side_effect_base boolean_t *
# define ggo_side_effect_depth 584
# define ggt_side_effect_depth uint4
# define ggo_side_effect_handling 588
# define ggt_side_effect_handling int
# define ggo_source_error_found 592
# define ggt_source_error_found int4
# define ggo_temp_subs 596
# define ggt_temp_subs boolean_t
# define ggo_trigger_compile_and_link 600
# define ggt_trigger_compile_and_link boolean_t
# define ggo_window_ident 608
# define ggt_window_ident mstr
# define ggo_window_mval 624
# define ggt_window_mval mval
# define ggo_window_token 656
# define ggt_window_token char
# define ggo_dbinit_max_hrtbt_delta 660
# define ggt_dbinit_max_hrtbt_delta uint4
# define ggo_dollar_zmaxtptime 664
# define ggt_dollar_zmaxtptime int4
# define ggo_donot_commit 668
# define ggt_donot_commit boolean_t
# define ggo_donot_write_inctn_in_wcs_recover 672
# define ggt_donot_write_inctn_in_wcs_recover boolean_t
# define ggo_gbuff_limit 680
# define ggt_gbuff_limit mval
# define ggo_gd_targ_tn 712
# define ggt_gd_targ_tn trans_num
# define ggo_gd_targ_reg_array 720
# define ggt_gd_targ_reg_array trans_num *
# define ggo_gd_targ_reg_array_size 728
# define ggt_gd_targ_reg_array_size uint4
# define ggo_gd_targ_addr 736
# define ggt_gd_targ_addr gd_addr *
# define ggo_gd_targ_gvnh_reg 744
# define ggt_gd_targ_gvnh_reg gvnh_reg_t *
# define ggo_gd_targ_map 752
# define ggt_gd_targ_map gd_binding *
# define ggo_gtm_custom_errors 760
# define ggt_gtm_custom_errors mstr
# define ggo_gv_extname_size 776
# define ggt_gv_extname_size int4
# define ggo_gv_last_subsc_null 780
# define ggt_gv_last_subsc_null boolean_t
# define ggo_gv_mergekey2 784
# define ggt_gv_mergekey2 gv_key *
# define ggo_gv_reorgkey 792
# define ggt_gv_reorgkey gv_key *
# define ggo_gv_some_subsc_null 800
# define ggt_gv_some_subsc_null boolean_t
# define ggo_gv_sparekey 808
# define ggt_gv_sparekey gv_key *
# define ggo_gv_sparekey_mval 816
# define ggt_gv_sparekey_mval mval
# define ggo_gv_sparekey_size 848
# define ggt_gv_sparekey_size int4
# define ggo_gv_tporigkey_ptr 856
# define ggt_gv_tporigkey_ptr gv_orig_key_array *
# define ggo_gv_tporig_extnam_str 864
# define ggt_gv_tporig_extnam_str mstr
# define ggo_in_gvcst_redo_root_search 880
# define ggt_in_gvcst_redo_root_search boolean_t
# define ggo_in_op_gvget 884
# define ggt_in_op_gvget boolean_t
# define ggo_issue_DBROLLEDBACK_anyways 888
# define ggt_issue_DBROLLEDBACK_anyways boolean_t
# define ggo_last_fnquery_return_subcnt 892
# define ggt_last_fnquery_return_subcnt int
# define ggo_last_fnquery_return_varname 896
# define ggt_last_fnquery_return_varname mval
# define ggo_ok_to_call_wcs_recover 928
# define ggt_ok_to_call_wcs_recover boolean_t
# define ggo_in_gvcst_bmp_mark_free 932
# define ggt_in_gvcst_bmp_mark_free boolean_t
# define ggo_prev_gv_target 936
# define ggt_prev_gv_target gv_namehead *
# define ggo_ready2signal_gvundef 944
# define ggt_ready2signal_gvundef boolean_t
# define ggo_redo_rootsrch_ctxt 952
# define ggt_redo_rootsrch_ctxt redo_root_search_context
# define ggo_semwait2long 2112
# define ggt_semwait2long volatile boolean_t
# define ggo_skip_file_corrupt_check 2116
# define ggt_skip_file_corrupt_check boolean_t
# define ggo_tpnotacidtime 2120
# define ggt_tpnotacidtime int4
# define ggo_tp_restart_count 2124
# define ggt_tp_restart_count uint4
# define ggo_tp_restart_dont_counts 2128
# define ggt_tp_restart_dont_counts int4
# define ggo_tp_restart_entryref 2136
# define ggt_tp_restart_entryref mval
# define ggo_tp_restart_failhist_indx 2168
# define ggt_tp_restart_failhist_indx int4
# define ggo_tprestart_syslog_delta 2172
# define ggt_tprestart_syslog_delta int4
# define ggo_tprestart_syslog_limit 2176
# define ggt_tprestart_syslog_limit int4
# define ggo_transform 2180
# define ggt_transform boolean_t
# define ggo_wcs_recover_done 2184
# define ggt_wcs_recover_done boolean_t
# define ggo_in_op_fnnext 2188
# define ggt_in_op_fnnext boolean_t
# define ggo_local_collseq 2192
# define ggt_local_collseq collseq *
# define ggo_local_collseq_stdnull 2200
# define ggt_local_collseq_stdnull boolean_t
# define ggo_local_coll_nums_as_strings 2204
# define ggt_local_coll_nums_as_strings boolean_t
# define ggo_lv_null_subs 2208
# define ggt_lv_null_subs int
# define ggo_max_lcl_coll_xform_bufsiz 2212
# define ggt_max_lcl_coll_xform_bufsiz int
# define ggo_replgbl 2216
# define ggt_replgbl replgbl_t
# define ggo_tqread_nowait 2240
# define ggt_tqread_nowait boolean_t
# define ggo_arlink_enabled 2244
# define ggt_arlink_enabled boolean_t
# define ggo_arlink_loaded 2248
# define ggt_arlink_loaded uint4
# define ggo_collseq_list 2256
# define ggt_collseq_list collseq *
# define ggo_create_fatal_error_zshow_dmp_fptr 2264
# define ggt_create_fatal_error_zshow_dmp_fptr void
# define gga_create_fatal_error_zshow_dmp_fptr (void)
typedef void (*ggf_create_fatal_error_zshow_dmp_fptr)(void);
# define ggo_disable_sigcont 2272
# define ggt_disable_sigcont boolean_t
# define ggo_dollar_zcompile 2280
# define ggt_dollar_zcompile mstr
# define ggo_dollar_zmode 2296
# define ggt_dollar_zmode mval
# define ggo_dollar_zonlnrlbk 2328
# define ggt_dollar_zonlnrlbk int
# define ggo_dollar_zclose 2332
# define ggt_dollar_zclose int
# define ggo_dollar_zroutines 2336
# define ggt_dollar_zroutines mstr
# define ggo_error_on_jnl_file_lost 2352
# define ggt_error_on_jnl_file_lost unsigned int
# define ggo_fnzsearch_lv_vars 2360
# define ggt_fnzsearch_lv_vars lv_val *
# define ggo_fnzsearch_sub_mval 2368
# define ggt_fnzsearch_sub_mval mval
# define ggo_fnzsearch_nullsubs_sav 2400
# define ggt_fnzsearch_nullsubs_sav int
# define ggo_fnzsearch_globbuf_ptr 2408
# define ggt_fnzsearch_globbuf_ptr glob_t *
# define ggo_glvn_pool_ptr 2416
# define ggt_glvn_pool_ptr glvn_pool *
# define ggo_gtmdbgflags 2424
# define ggt_gtmdbgflags int
# define ggo_gtmdbgflags_freq 2428
# define ggt_gtmdbgflags_freq int
# define ggo_gtmdbgflags_freq_cntr 2432
# define ggt_gtmdbgflags_freq_cntr int
# define ggo_gtm_env_init_started 2436
# define ggt_gtm_env_init_started boolean_t
# define ggo_gtm_env_xlate_entry 2440
# define ggt_gtm_env_xlate_entry int
# define gga_gtm_env_xlate_entry ()
typedef int (*ggf_gtm_env_xlate_entry)();
# define ggo_gtm_environment_init 2448
# define ggt_gtm_environment_init boolean_t
# define ggo_gtm_sigusr1_handler 2456
# define ggt_gtm_sigusr1_handler void
# define gga_gtm_sigusr1_handler (void)
typedef void (*ggf_gtm_sigusr1_handler)(void);
# define ggo_gtm_linktmpdir 2464
# define ggt_gtm_linktmpdir mstr
# define ggo_gtm_trctbl_cur 2480
# define ggt_gtm_trctbl_cur trctbl_entry *
# define ggo_gtm_trctbl_end 2488
# define ggt_gtm_trctbl_end trctbl_entry *
# define ggo_gtm_trctbl_groups 2496
# define ggt_gtm_trctbl_groups unsigned int
# define ggo_gtm_trctbl_start 2504
# define ggt_gtm_trctbl_start trctbl_entry *
# define ggo_gtm_waitstuck_script 2512
# define ggt_gtm_waitstuck_script mstr
# define ggo_gtmprompt 2528
# define ggt_gtmprompt mstr
# define ggo_gtmsecshr_comkey 2544
# define ggt_gtmsecshr_comkey unsigned int
# define ggo_in_zwrite 2548
# define ggt_in_zwrite boolean_t
# define ggo_lab_lnr 2552
# define ggt_lab_lnr lnr_tabent **
# define ggo_jobexam_counter 2560
# define ggt_jobexam_counter unsigned int
# define ggo_lnk_proxy 2568
# define ggt_lnk_proxy lnk_tabent_proxy
# define ggo_mprof_alloc_reclaim 2592
# define ggt_mprof_alloc_reclaim boolean_t
# define ggo_mprof_chunk_avail_size 2596
# define ggt_mprof_chunk_avail_size int
# define ggo_mprof_env_gbl_name 2600
# define ggt_mprof_env_gbl_name mval
# define ggo_mprof_ptr 2632
# define ggt_mprof_ptr mprof_wrapper *
# define ggo_mprof_reclaim_addr 2640
# define ggt_mprof_reclaim_addr char *
# define ggo_mprof_reclaim_cnt 2648
# define ggt_mprof_reclaim_cnt int
# define ggo_mprof_stack_curr_frame 2656
# define ggt_mprof_stack_curr_frame mprof_stack_frame *
# define ggo_mprof_stack_next_frame 2664
# define ggt_mprof_stack_next_frame mprof_stack_frame *
# define ggo_open_relinkctl_list 2672
# define ggt_open_relinkctl_list open_relinkctl_sgm *
# define ggo_relinkctl_shm_min_index 2680
# define ggt_relinkctl_shm_min_index int
# define ggo_gtm_autorelink_keeprtn 2684
# define ggt_gtm_autorelink_keeprtn boolean_t
# define ggo_open_shlib_root 2688
# define ggt_open_shlib_root open_shlib *
# define ggo_parm_pool_ptr 2696
# define ggt_parm_pool_ptr parm_pool *
# define ggo_parms_cnt 2704
# define ggt_parms_cnt unsigned int
# define ggo_zpeek_regname 2708
# define ggt_zpeek_regname char
# define ggl_zpeek_regname 31
# define ggo_zpeek_regname_len 2740
# define ggt_zpeek_regname_len int
# define ggo_zpeek_reg_ptr 2744
# define ggt_zpeek_reg_ptr gd_region *
# define ggo_pipefifo_interrupt 2752
# define ggt_pipefifo_interrupt int
# define ggo_prof_fp 2760
# define ggt_prof_fp mprof_stack_frame *
# define ggo_relink_allowed 2768
# define ggt_relink_allowed int
# define ggo_save_zhist 2776
# define ggt_save_zhist zro_hist *
# define ggo_set_zroutines_cycle 2784
# define ggt_set_zroutines_cycle uint4
# define ggo_trans_code_pop 2792
# define ggt_trans_code_pop mval *
# define ggo_view_ydirt_str 2800
# define ggt_view_ydirt_str char *
# define ggo_view_ydirt_str_len 2808
# define ggt_view_ydirt_str_len int4
# define ggo_zdate_form 2812
# define ggt_zdate_form int4
# define ggo_zintcmd_active 2816
# define ggt_zintcmd_active zintcmd_active_info
# define ggl_zintcmd_active 72
# define ggo_zro_root 2888
# define ggt_zro_root zro_ent *
# define ggo_zsearch_var 2896
# define ggt_zsearch_var lv_val *
# define ggo_poll_fds_buffer 2904
# define ggt_poll_fds_buffer char *
# define ggo_poll_fds_buffer_size 2912
# define ggt_poll_fds_buffer_size size_t
# define ggo_socket_handle_counter 2920
# define ggt_socket_handle_counter int
# define ggo_director_string 2924
# define ggt_director_string char
# define ggl_director_string 32
# define ggo_fnpca 2960
# define ggt_fnpca fnpc_area
# define ggo_for_stack 21376
# define ggt_for_stack oprtype *
# define ggl_for_stack 256
# define ggo_for_temps 21632
# define ggt_for_temps boolean_t
# define ggl_for_temps 128
# define ggo_last_fnquery_return_sub 21760
# define ggt_last_fnquery_return_sub mval
# define ggl_last_fnquery_return_sub 1024
# define ggo_lcl_coll_xform_buff 22784
# define ggt_lcl_coll_xform_buff char *
# define ggo_protmem_ba 22792
# define ggt_protmem_ba mstr
# define ggo_parm_ary 22808
# define ggt_parm_ary char *
# define ggl_parm_ary 8192
# define ggo_parm_ary_len 31000
# define ggt_parm_ary_len int
# define ggl_parm_ary_len 4096
# define ggo_parm_str_len 35096
# define ggt_parm_str_len int
# define ggl_parm_str_len 4096
# define ggo_prombuf 39192
# define ggt_prombuf char
# define ggl_prombuf 32
# define ggo_tp_restart_failhist_arry 39224
# define ggt_tp_restart_failhist_arry char
# define ggl_tp_restart_failhist_arry 32
# define ggo_window_string 39256
# define ggt_window_string char
# define ggl_window_string 32
# define ggo_tmp_object_file_name 39288
# define ggt_tmp_object_file_name char
# define ggl_tmp_object_file_name 4097
# define ggo_last_va_list_ptr 43392
# define ggt_last_va_list_ptr va_list
# define ggo_util_outbuff 43416
# define ggt_util_outbuff char
# define ggl_util_outbuff 6144
# define ggo_util_outbuff_ptr 49560
# define ggt_util_outbuff_ptr char *
# define ggo_util_outptr 49568
# define ggt_util_outptr char *
# define ggo_callin_hashtab 49576
# define ggt_callin_hashtab hash_table_str *
# define ggo_ci_table 49584
# define ggt_ci_table callin_entry_list *
# define ggo_extcall_package_root 49592
# define ggt_extcall_package_root struct extcall_package_list *
# define ggo_gtmci_nested_level 49600
# define ggt_gtmci_nested_level unsigned int
# define ggo_temp_fgncal_stack 49608
# define ggt_temp_fgncal_stack unsigned char *
# define ggo_midchild_send_locals 49616
# define ggt_midchild_send_locals boolean_t
# define ggo_want_empty_gvts 49620
# define ggt_want_empty_gvts boolean_t
# define ggo_in_mu_swap_root_state 49624
# define ggt_in_mu_swap_root_state unsigned int
# define ggo_prev_t_tries 49628
# define ggt_prev_t_tries unsigned int
# define ggo_rlbk_during_redo_root 49632
# define ggt_rlbk_during_redo_root boolean_t
# define ggo_mlk_yield_pid 49636
# define ggt_mlk_yield_pid uint4
# define ggo_jnl_extract_nocol 49640
# define ggt_jnl_extract_nocol uint4
# define ggo_skip_gtm_putmsg 49644
# define ggt_skip_gtm_putmsg boolean_t
# define ggo_spangbl_seen 49648
# define ggt_spangbl_seen boolean_t
# define ggo_no_spangbls 49652
# define ggt_no_spangbls boolean_t
# define ggo_max_fid_index 49656
# define ggt_max_fid_index int
# define ggo_is_mu_rndwn_rlnkctl 49660
# define ggt_is_mu_rndwn_rlnkctl int
# define ggo_expand_prev_key 49664
# define ggt_expand_prev_key boolean_t
# define ggo_gtm_autorelink_ctlmax 49668
# define ggt_gtm_autorelink_ctlmax uint4
# define ggo_gvt_triggers_read_this_tn 49672
# define ggt_gvt_triggers_read_this_tn boolean_t
# define ggo_op_fntext_tlevel 49676
# define ggt_op_fntext_tlevel uint4
# define ggo_in_op_fntext 49680
# define ggt_in_op_fntext boolean_t
# define ggo_ztrigbuff 49688
# define ggt_ztrigbuff char *
# define ggo_ztrigbuffAllocLen 49696
# define ggt_ztrigbuffAllocLen int
# define ggo_ztrigbuffLen 49700
# define ggt_ztrigbuffLen int
# define ggo_ztrig_use_io_curr_device 49704
# define ggt_ztrig_use_io_curr_device boolean_t
# define ggo_continue_proc_cnt 49708
# define ggt_continue_proc_cnt int
# define ggo_gtm_test_fake_enospc 49712
# define ggt_gtm_test_fake_enospc boolean_t
# define ggo_gtm_usesecshr 49716
# define ggt_gtm_usesecshr boolean_t
# define ggo_rts_error_unusable 49720
# define ggt_rts_error_unusable boolean_t
# define ggo_rts_error_unusable_seen 49724
# define ggt_rts_error_unusable_seen boolean_t
# define ggo_trans_restart_hist_array 49728
# define ggt_trans_restart_hist_array trans_restart_hist_t
# define ggl_trans_restart_hist_array 20480
# define ggo_trans_restart_hist_index 70208
# define ggt_trans_restart_hist_index uint4
# define ggo_skip_mv_num_approx_assert 70212
# define ggt_skip_mv_num_approx_assert boolean_t
# define ggo_gtm_gvundef_fatal 70216
# define ggt_gtm_gvundef_fatal boolean_t
# define ggo_gtm_dirtree_collhdr_always 70220
# define ggt_gtm_dirtree_collhdr_always boolean_t
# define ggo_activelv_cycle 70224
# define ggt_activelv_cycle int
# define ggo_activelv_index 70228
# define ggt_activelv_index int
# define ggo_activelv_dbg_array 70232
# define ggt_activelv_dbg_array activelv_dbg_t *
# define ggo_cli_get_str_max_len 70240
# define ggt_cli_get_str_max_len uint4
# define ggo_gtmio_skip_tlevel_assert 70244
# define ggt_gtmio_skip_tlevel_assert boolean_t
# define ggo_in_trigger_upgrade 70248
# define ggt_in_trigger_upgrade boolean_t
# define ggo_gtm_test_autorelink_always 70252
# define ggt_gtm_test_autorelink_always boolean_t
# define ggo_fork_without_child_wait 70256
# define ggt_fork_without_child_wait boolean_t
# define size_gtm_threadgbl_struct 70264
#endif
#endif