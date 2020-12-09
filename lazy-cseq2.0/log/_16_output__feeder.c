CBMC version 5.10 (cbmc-5.10) 64-bit x86_64 linux
Parsing ../workspace/multithread/_cs_generalized.c
Converting
Type-checking _cs_generalized
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
Generic Property Instrumentation
Running with 8 object bits, 24 offset bits (default)
Starting Bounded Model Checking
size of program expression: 8536 steps
simple slicing removed 75 assignments
Generated 210 VCC(s), 202 remaining after simplification
Passing problem to propositional reduction
converting SSA
Running propositional reduction
Post-processing
Solving with MiniSAT 2.2.1 with simplifier
93353 variables, 349692 clauses
SAT checker: instance is SATISFIABLE
Runtime decision procedure: 1.21709s
Building error trace
Counterexample:

State 218 file ../workspace/multithread/_cs_generalized.c line 3715 function main thread 0
----------------------------------------------------
  __cs_tmp_t0_r0=2 (010)

State 219 file ../workspace/multithread/_cs_generalized.c line 3716 function main thread 0
----------------------------------------------------
  __cs_pc_cs[0]=2 (00000001 0)

State 227 file ../workspace/multithread/_cs_generalized.c line 3459 function main_thread thread 0
----------------------------------------------------
  __cs_m=&lock (00000111 00000000 00000000 00000000)

State 228 file ../workspace/multithread/_cs_generalized.c line 3459 function main_thread thread 0
----------------------------------------------------
  __cs_val=0 (00000000 00000000 00000000 00000000)

State 229 file ../workspace/multithread/_cs_generalized.c line 112 function __cs_mutex_init thread 0
----------------------------------------------------
  lock=-1 (11111111 11111111 11111111 11111111)

State 232 file ../workspace/multithread/_cs_generalized.c line 3464 function main_thread thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_init_valid_on_current_logical_core_ss=mystack.top (00000011 00000000 00000000 00000000)

State 233 file ../workspace/multithread/_cs_generalized.c line 3466 function main_thread thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_init_valid_on_current_logical_core_user_state=NULL (00000000 00000000 00000000 00000000)

State 236 file ../workspace/multithread/_cs_generalized.c line 3467 function main_thread thread 0
----------------------------------------------------
  __cs_m=&library_lock (00001000 00000000 00000000 00000000)

State 237 file ../workspace/multithread/_cs_generalized.c line 3467 function main_thread thread 0
----------------------------------------------------
  __cs_val=0 (00000000 00000000 00000000 00000000)

State 238 file ../workspace/multithread/_cs_generalized.c line 112 function __cs_mutex_init thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 241 file ../workspace/multithread/_cs_generalized.c line 3471 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_3=FALSE (00000000)

State 243 file ../workspace/multithread/_cs_generalized.c line 3486 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_4=FALSE (00000000)

State 245 file ../workspace/multithread/_cs_generalized.c line 3501 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core___cs_tmp_if_cond_5=TRUE (00000001)

State 247 file ../workspace/multithread/_cs_generalized.c line 3505 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 248 file ../workspace/multithread/_cs_generalized.c line 3506 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_init_valid_on_current_logical_core_c$object=0 (00000000)

State 251 file ../workspace/multithread/_cs_generalized.c line 3513 function main_thread thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 252 file ../workspace/multithread/_cs_generalized.c line 3513 function main_thread thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)

State 253 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=1 (00000000 00000000 00000000 00000001)

State 256 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 260 file ../workspace/multithread/_cs_generalized.c line 3514 function main_thread thread 0
----------------------------------------------------
  mystack.top[0]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 261 file ../workspace/multithread/_cs_generalized.c line 3515 function main_thread thread 0
----------------------------------------------------
  mystack.top[1]=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 262 file ../workspace/multithread/_cs_generalized.c line 3516 function main_thread thread 0
----------------------------------------------------
  mystack.user_state=NULL (00000000 00000000 00000000 00000000)

State 263 file ../workspace/multithread/_cs_generalized.c line 3519 function main_thread thread 0
----------------------------------------------------
  __cs_param_lfds711_misc_internal_backoff_init_bs=&mystack.pop_backoff.lock (00000011 00000000 00000000 00010000)

State 264 file ../workspace/multithread/_cs_generalized.c line 3523 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1=FALSE (00000000)

State 266 file ../workspace/multithread/_cs_generalized.c line 3538 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2=TRUE (00000001)

State 268 file ../workspace/multithread/_cs_generalized.c line 3542 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 269 file ../workspace/multithread/_cs_generalized.c line 3543 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c$object=0 (00000000)

State 270 file ../workspace/multithread/_cs_generalized.c line 3550 function main_thread thread 0
----------------------------------------------------
  mystack.pop_backoff.lock=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 271 file ../workspace/multithread/_cs_generalized.c line 3551 function main_thread thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 272 file ../workspace/multithread/_cs_generalized.c line 3552 function main_thread thread 0
----------------------------------------------------
  mystack.pop_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 273 file ../workspace/multithread/_cs_generalized.c line 3553 function main_thread thread 0
----------------------------------------------------
  mystack.pop_backoff.metric=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 274 file ../workspace/multithread/_cs_generalized.c line 3554 function main_thread thread 0
----------------------------------------------------
  mystack.pop_backoff.total_operations=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 276 file ../workspace/multithread/_cs_generalized.c line 3565 function main_thread thread 0
----------------------------------------------------
  __cs_param_lfds711_misc_internal_backoff_init_bs=&mystack.push_backoff.lock (00000011 00000000 00000000 00111000)

State 277 file ../workspace/multithread/_cs_generalized.c line 3569 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_1=FALSE (00000000)

State 279 file ../workspace/multithread/_cs_generalized.c line 3584 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init___cs_tmp_if_cond_2=TRUE (00000001)

State 281 file ../workspace/multithread/_cs_generalized.c line 3588 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c=((char *)NULL) (00000000 00000000 00000000 00000000)

State 282 file ../workspace/multithread/_cs_generalized.c line 3589 function main_thread thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_internal_backoff_init_c$object=0 (00000000)

State 283 file ../workspace/multithread/_cs_generalized.c line 3596 function main_thread thread 0
----------------------------------------------------
  mystack.push_backoff.lock=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 284 file ../workspace/multithread/_cs_generalized.c line 3597 function main_thread thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[0]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 285 file ../workspace/multithread/_cs_generalized.c line 3598 function main_thread thread 0
----------------------------------------------------
  mystack.push_backoff.backoff_iteration_frequency_counters[1]=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 286 file ../workspace/multithread/_cs_generalized.c line 3599 function main_thread thread 0
----------------------------------------------------
  mystack.push_backoff.metric=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 287 file ../workspace/multithread/_cs_generalized.c line 3600 function main_thread thread 0
----------------------------------------------------
  mystack.push_backoff.total_operations=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 291 file ../workspace/multithread/_cs_generalized.c line 3611 function main_thread thread 0
----------------------------------------------------
  __cs_var=&__cs_local_lfds711_misc_force_store_destination (00001010 00000000 00000000 00000000)

State 292 file ../workspace/multithread/_cs_generalized.c line 3611 function main_thread thread 0
----------------------------------------------------
  __cs_size=8u (00000000 00000000 00000000 00001000)

State 296 file ../workspace/multithread/_cs_generalized.c line 74 function __cs_init_scalar thread 0
----------------------------------------------------
  malloc_size=8u (00000000 00000000 00000000 00001000)

State 313 file ../workspace/multithread/_cs_generalized.c line 74 function __cs_init_scalar thread 0
----------------------------------------------------
  __cs_var=&dynamic_object1 (00001011 00000000 00000000 00000000)

State 315 file ../workspace/multithread/_cs_generalized.c line 3616 function main_thread thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_previous=&__cs_local_lfds711_misc_force_store_destination (00001010 00000000 00000000 00000000)

State 316 file ../workspace/multithread/_cs_generalized.c line 3618 function main_thread thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_new=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 317 file ../workspace/multithread/_cs_generalized.c line 3620 function main_thread thread 0
----------------------------------------------------
  __cs_param___atomic_exchange_n_memorder=0 (00000000 00000000 00000000 00000000)

State 321 file ../workspace/multithread/_cs_generalized.c line 3622 function main_thread thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_previous=&__cs_local_lfds711_misc_force_store_destination (00001010 00000000 00000000 00000000)

State 322 file ../workspace/multithread/_cs_generalized.c line 3622 function main_thread thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_new=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 323 file ../workspace/multithread/_cs_generalized.c line 3622 function main_thread thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_exchange_memorder=0 (00000000 00000000 00000000 00000000)

State 324 file ../workspace/multithread/_cs_generalized.c line 734 function __CSEQ_atomic_exchange thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_exchange_old=0u (00000000 00000000 00000000 00000000)

State 325 file ../workspace/multithread/_cs_generalized.c line 735 function __CSEQ_atomic_exchange thread 0
----------------------------------------------------
  __cs_local_lfds711_misc_force_store_destination=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 330 file ../workspace/multithread/_cs_generalized.c line 3622 function main_thread thread 0
----------------------------------------------------
  __cs_local___atomic_exchange_n_res=0 (00000000 00000000 00000000 00000000)

State 331 file ../workspace/multithread/_cs_generalized.c line 3623 function main_thread thread 0
----------------------------------------------------
  __cs_retval____atomic_exchange_n_1=0u (00000000 00000000 00000000 00000000)

State 336 file ../workspace/multithread/_cs_generalized.c line 3645 function main_thread thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 337 file ../workspace/multithread/_cs_generalized.c line 3645 function main_thread thread 0
----------------------------------------------------
  __cs_thread_index=0 (00)

State 338 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 341 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 346 file ../workspace/multithread/_cs_generalized.c line 3654 function main_thread thread 0
----------------------------------------------------
  __cs_retval__init_1=mystack.top (00000011 00000000 00000000 00000000)

State 348 file ../workspace/multithread/_cs_generalized.c line 3663 function main_thread thread 0
----------------------------------------------------
  ss=mystack.top (00000011 00000000 00000000 00000000)

State 351 file ../workspace/multithread/_cs_generalized.c line 3694 function main_thread thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_t1 (00001101 00000000 00000000 00000000)

State 352 file ../workspace/multithread/_cs_generalized.c line 3694 function main_thread thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 353 file ../workspace/multithread/_cs_generalized.c line 3694 function main_thread thread 0
----------------------------------------------------
  __cs_thread_function=push_0 (00001110 00000000 00000000 00000000)

State 354 file ../workspace/multithread/_cs_generalized.c line 3694 function main_thread thread 0
----------------------------------------------------
  __cs_arg=NULL (00000000 00000000 00000000 00000000)

State 355 file ../workspace/multithread/_cs_generalized.c line 3694 function main_thread thread 0
----------------------------------------------------
  __cs_threadID=1 (00000000 00000000 00000000 00000001)

State 357 file ../workspace/multithread/_cs_generalized.c line 88 function __cs_create thread 0
----------------------------------------------------
  __cs_local_main_t1=1 (00000000 00000000 00000000 00000001)

State 358 file ../workspace/multithread/_cs_generalized.c line 89 function __cs_create thread 0
----------------------------------------------------
  __cs_active_thread[1]=1 (1)

State 359 file ../workspace/multithread/_cs_generalized.c line 90 function __cs_create thread 0
----------------------------------------------------
  __cs_threadargs[1]=NULL (00000000 00000000 00000000 00000000)

State 362 file ../workspace/multithread/_cs_generalized.c line 91 function __cs_create thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00001111 00000000 00000000 00000000)

State 369 file ../workspace/multithread/_cs_generalized.c line 3696 function main_thread thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_t6 (00010000 00000000 00000000 00000000)

State 370 file ../workspace/multithread/_cs_generalized.c line 3696 function main_thread thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 371 file ../workspace/multithread/_cs_generalized.c line 3696 function main_thread thread 0
----------------------------------------------------
  __cs_thread_function=pop_0 (00010001 00000000 00000000 00000000)

State 372 file ../workspace/multithread/_cs_generalized.c line 3696 function main_thread thread 0
----------------------------------------------------
  __cs_arg=NULL (00000000 00000000 00000000 00000000)

State 373 file ../workspace/multithread/_cs_generalized.c line 3696 function main_thread thread 0
----------------------------------------------------
  __cs_threadID=2 (00000000 00000000 00000000 00000010)

State 375 file ../workspace/multithread/_cs_generalized.c line 88 function __cs_create thread 0
----------------------------------------------------
  __cs_local_main_t6=2 (00000000 00000000 00000000 00000010)

State 376 file ../workspace/multithread/_cs_generalized.c line 89 function __cs_create thread 0
----------------------------------------------------
  __cs_active_thread[2]=1 (1)

State 377 file ../workspace/multithread/_cs_generalized.c line 90 function __cs_create thread 0
----------------------------------------------------
  __cs_threadargs[2]=NULL (00000000 00000000 00000000 00000000)

State 380 file ../workspace/multithread/_cs_generalized.c line 91 function __cs_create thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00001111 00000000 00000000 00000000)

State 388 file ../workspace/multithread/_cs_generalized.c line 3709 function main_thread thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 389 file ../workspace/multithread/_cs_generalized.c line 3709 function main_thread thread 0
----------------------------------------------------
  __cs_thread_index=0u (00000000 00000000 00000000 00000000)

State 390 file ../workspace/multithread/_cs_generalized.c line 102 function __cs_exit thread 0
----------------------------------------------------
  __cs_thread_joinargs[0]=NULL (00000000 00000000 00000000 00000000)

State 395 file ../workspace/multithread/_cs_generalized.c line 3720 function main thread 0
----------------------------------------------------
  __cs_pc[0]=2 (00000010)

State 396 file ../workspace/multithread/_cs_generalized.c line 3722 function main thread 0
----------------------------------------------------
  __cs_tmp_t1_r0=122 (1111010)

State 398 file ../workspace/multithread/_cs_generalized.c line 3725 function main thread 0
----------------------------------------------------
  __cs_pc_cs[1]=122 (00111101 0)

State 402 file ../workspace/multithread/_cs_generalized.c line 3727 function main thread 0
----------------------------------------------------
  __cs_param_push___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 404 file ../workspace/multithread/_cs_generalized.c line 752 function push_0 thread 0
----------------------------------------------------
  __cs_local_push_loop=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 406 file ../workspace/multithread/_cs_generalized.c line 758 function push_0 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_22=FALSE (00000000)

State 410 file ../workspace/multithread/_cs_generalized.c line 771 function push_0 thread 0
----------------------------------------------------
  __cs_param_insert_s=mystack.top (00000011 00000000 00000000 00000000)

State 411 file ../workspace/multithread/_cs_generalized.c line 773 function push_0 thread 0
----------------------------------------------------
  __cs_param_insert_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 416 file ../workspace/multithread/_cs_generalized.c line 776 function push_0 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 417 file ../workspace/multithread/_cs_generalized.c line 65 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 420 file ../workspace/multithread/_cs_generalized.c line 65 function __cs_safe_malloc thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 437 file ../workspace/multithread/_cs_generalized.c line 65 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 441 file ../workspace/multithread/_cs_generalized.c line 776 function push_0 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 443 file ../workspace/multithread/_cs_generalized.c line 778 function push_0 thread 0
----------------------------------------------------
  dynamic_object2.user_id=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 445 file ../workspace/multithread/_cs_generalized.c line 780 function push_0 thread 0
----------------------------------------------------
  dynamic_object2.se.value=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 447 file ../workspace/multithread/_cs_generalized.c line 784 function push_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=mystack.top (00000011 00000000 00000000 00000000)

State 449 file ../workspace/multithread/_cs_generalized.c line 787 function push_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 450 file ../workspace/multithread/_cs_generalized.c line 790 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 452 file ../workspace/multithread/_cs_generalized.c line 797 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

State 456 file ../workspace/multithread/_cs_generalized.c line 816 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

State 460 file ../workspace/multithread/_cs_generalized.c line 832 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 462 file ../workspace/multithread/_cs_generalized.c line 834 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) (00000000 00000000 00000000 00000000)

State 464 file ../workspace/multithread/_cs_generalized.c line 836 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) (00000000 00000000 00000000 00000000)

State 465 file ../workspace/multithread/_cs_generalized.c line 837 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 466 file ../workspace/multithread/_cs_generalized.c line 839 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 471 file ../workspace/multithread/_cs_generalized.c line 848 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 472 file ../workspace/multithread/_cs_generalized.c line 848 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 476 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 479 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 484 file ../workspace/multithread/_cs_generalized.c line 850 function push_0 thread 0
----------------------------------------------------
  dynamic_object2.se.next=((struct lfds711_stack_element *)NULL) (00000000 00000000 00000000 00000000)

State 488 file ../workspace/multithread/_cs_generalized.c line 852 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 489 file ../workspace/multithread/_cs_generalized.c line 852 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 493 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 496 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 501 file ../workspace/multithread/_cs_generalized.c line 854 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 505 file ../workspace/multithread/_cs_generalized.c line 856 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 506 file ../workspace/multithread/_cs_generalized.c line 856 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 510 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 513 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 521 file ../workspace/multithread/_cs_generalized.c line 858 function push_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 522 file ../workspace/multithread/_cs_generalized.c line 858 function push_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00010010 00000000 00000000 00000000)

State 523 file ../workspace/multithread/_cs_generalized.c line 858 function push_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00010011 00000000 00000000 00000000)

State 524 file ../workspace/multithread/_cs_generalized.c line 696 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 526 file ../workspace/multithread/_cs_generalized.c line 699 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  mystack={ .top={ &dynamic_object2.se.next, ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,
    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull } } ({ { 00000010 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 } })

State 531 file ../workspace/multithread/_cs_generalized.c line 858 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 535 file ../workspace/multithread/_cs_generalized.c line 860 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 536 file ../workspace/multithread/_cs_generalized.c line 860 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 540 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 543 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 547 file ../workspace/multithread/_cs_generalized.c line 864 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

State 550 file ../workspace/multithread/_cs_generalized.c line 915 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 551 file ../workspace/multithread/_cs_generalized.c line 919 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

State 559 file ../workspace/multithread/_cs_generalized.c line 1304 function push_0 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_23=FALSE (00000000)

State 562 file ../workspace/multithread/_cs_generalized.c line 1316 function push_0 thread 0
----------------------------------------------------
  __cs_local_push_loop=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 564 file ../workspace/multithread/_cs_generalized.c line 1322 function push_0 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_22=FALSE (00000000)

State 568 file ../workspace/multithread/_cs_generalized.c line 1335 function push_0 thread 0
----------------------------------------------------
  __cs_param_insert_s=mystack.top (00000011 00000000 00000000 00000000)

State 569 file ../workspace/multithread/_cs_generalized.c line 1337 function push_0 thread 0
----------------------------------------------------
  __cs_param_insert_id=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 574 file ../workspace/multithread/_cs_generalized.c line 1340 function push_0 thread 0
----------------------------------------------------
  __cs_size=24u (00000000 00000000 00000000 00011000)

State 575 file ../workspace/multithread/_cs_generalized.c line 65 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 578 file ../workspace/multithread/_cs_generalized.c line 65 function __cs_safe_malloc thread 0
----------------------------------------------------
  malloc_size=24u (00000000 00000000 00000000 00011000)

State 595 file ../workspace/multithread/_cs_generalized.c line 65 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 599 file ../workspace/multithread/_cs_generalized.c line 1340 function push_0 thread 0
----------------------------------------------------
  __cs_local_insert_td=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 601 file ../workspace/multithread/_cs_generalized.c line 1342 function push_0 thread 0
----------------------------------------------------
  dynamic_object3.user_id=1ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001)

State 603 file ../workspace/multithread/_cs_generalized.c line 1344 function push_0 thread 0
----------------------------------------------------
  dynamic_object3.se.value=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 605 file ../workspace/multithread/_cs_generalized.c line 1348 function push_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_ss=mystack.top (00000011 00000000 00000000 00000000)

State 607 file ../workspace/multithread/_cs_generalized.c line 1351 function push_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_push_se=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 608 file ../workspace/multithread/_cs_generalized.c line 1354 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 610 file ../workspace/multithread/_cs_generalized.c line 1361 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_14=FALSE (00000000)

State 614 file ../workspace/multithread/_cs_generalized.c line 1380 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_15=FALSE (00000000)

State 618 file ../workspace/multithread/_cs_generalized.c line 1396 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[0]=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 620 file ../workspace/multithread/_cs_generalized.c line 1398 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) (00000000 00000000 00000000 00000000)

State 622 file ../workspace/multithread/_cs_generalized.c line 1400 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_original_top[0]=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 623 file ../workspace/multithread/_cs_generalized.c line 1401 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=0 (00000000)

State 624 file ../workspace/multithread/_cs_generalized.c line 1403 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=0 (00000000 00000000 00000000 00000000)

State 629 file ../workspace/multithread/_cs_generalized.c line 1412 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 630 file ../workspace/multithread/_cs_generalized.c line 1412 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 634 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 637 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 642 file ../workspace/multithread/_cs_generalized.c line 1414 function push_0 thread 0
----------------------------------------------------
  dynamic_object3.se.next=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 646 file ../workspace/multithread/_cs_generalized.c line 1416 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 647 file ../workspace/multithread/_cs_generalized.c line 1416 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 651 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 654 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 659 file ../workspace/multithread/_cs_generalized.c line 1418 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_new_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 663 file ../workspace/multithread/_cs_generalized.c line 1420 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 664 file ../workspace/multithread/_cs_generalized.c line 1420 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 668 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=2 (00000000 00000000 00000000 00000010)

State 671 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 679 file ../workspace/multithread/_cs_generalized.c line 1422 function push_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 680 file ../workspace/multithread/_cs_generalized.c line 1422 function push_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_push_original_top (00010100 00000000 00000000 00000000)

State 681 file ../workspace/multithread/_cs_generalized.c line 1422 function push_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_push_new_top (00010101 00000000 00000000 00000000)

State 682 file ../workspace/multithread/_cs_generalized.c line 696 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 684 file ../workspace/multithread/_cs_generalized.c line 699 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  mystack={ .top={ &dynamic_object3.se.next, ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,
    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull } } ({ { 00000100 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 } })

State 689 file ../workspace/multithread/_cs_generalized.c line 1422 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_result=1 (00000001)

State 693 file ../workspace/multithread/_cs_generalized.c line 1424 function push_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 694 file ../workspace/multithread/_cs_generalized.c line 1424 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1 (01)

State 698 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 701 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 705 file ../workspace/multithread/_cs_generalized.c line 1428 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_16=FALSE (00000000)

State 708 file ../workspace/multithread/_cs_generalized.c line 1479 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push_i=1 (00000000 00000000 00000000 00000001)

State 709 file ../workspace/multithread/_cs_generalized.c line 1483 function push_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_push___cs_tmp_if_cond_17=FALSE (00000000)

State 717 file ../workspace/multithread/_cs_generalized.c line 1868 function push_0 thread 0
----------------------------------------------------
  __cs_local_push___cs_tmp_if_cond_23=FALSE (00000000)

State 720 file ../workspace/multithread/_cs_generalized.c line 1880 function push_0 thread 0
----------------------------------------------------
  __cs_local_push_loop=2ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000010)

State 727 file ../workspace/multithread/_cs_generalized.c line 1892 function push_0 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 728 file ../workspace/multithread/_cs_generalized.c line 1892 function push_0 thread 0
----------------------------------------------------
  __cs_thread_index=1u (00000000 00000000 00000000 00000001)

State 729 file ../workspace/multithread/_cs_generalized.c line 102 function __cs_exit thread 0
----------------------------------------------------
  __cs_thread_joinargs[1]=NULL (00000000 00000000 00000000 00000000)

State 734 file ../workspace/multithread/_cs_generalized.c line 3728 function main thread 0
----------------------------------------------------
  __cs_pc[1]=122 (01111010)

State 735 file ../workspace/multithread/_cs_generalized.c line 3731 function main thread 0
----------------------------------------------------
  __cs_tmp_t2_r0=156 (10011100)

State 737 file ../workspace/multithread/_cs_generalized.c line 3734 function main thread 0
----------------------------------------------------
  __cs_pc_cs[2]=156 (01001110 0)

State 741 file ../workspace/multithread/_cs_generalized.c line 3736 function main thread 0
----------------------------------------------------
  __cs_param_pop___cs_unused=NULL (00000000 00000000 00000000 00000000)

State 743 file ../workspace/multithread/_cs_generalized.c line 1898 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop_res=0 (00000000 00000000 00000000 00000000)

State 744 file ../workspace/multithread/_cs_generalized.c line 1900 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop_count=0 (00000000 00000000 00000000 00000000)

State 745 file ../workspace/multithread/_cs_generalized.c line 1902 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop_loop=0 (00000000 00000000 00000000 00000000)

State 747 file ../workspace/multithread/_cs_generalized.c line 1908 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_24=FALSE (00000000)

State 751 file ../workspace/multithread/_cs_generalized.c line 1922 function pop_0 thread 0
----------------------------------------------------
  __cs_param_delete_s=mystack.top (00000011 00000000 00000000 00000000)

State 753 file ../workspace/multithread/_cs_generalized.c line 1930 function pop_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=mystack.top (00000011 00000000 00000000 00000000)

State 755 file ../workspace/multithread/_cs_generalized.c line 1933 function pop_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00000101 00000000 00000000 00000000)

State 756 file ../workspace/multithread/_cs_generalized.c line 1936 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 758 file ../workspace/multithread/_cs_generalized.c line 1943 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

State 762 file ../workspace/multithread/_cs_generalized.c line 1962 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

State 768 file ../workspace/multithread/_cs_generalized.c line 1978 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 769 file ../workspace/multithread/_cs_generalized.c line 1978 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 773 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 776 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 783 file ../workspace/multithread/_cs_generalized.c line 1980 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 784 file ../workspace/multithread/_cs_generalized.c line 1980 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 788 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 791 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 796 file ../workspace/multithread/_cs_generalized.c line 1982 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) (00000000 00000000 00000000 00000000)

State 798 file ../workspace/multithread/_cs_generalized.c line 1984 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 799 file ../workspace/multithread/_cs_generalized.c line 1986 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 800 file ../workspace/multithread/_cs_generalized.c line 1990 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 801 file ../workspace/multithread/_cs_generalized.c line 1995 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=FALSE (00000000)

State 805 file ../workspace/multithread/_cs_generalized.c line 2007 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 807 file ../workspace/multithread/_cs_generalized.c line 2009 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 811 file ../workspace/multithread/_cs_generalized.c line 2011 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 812 file ../workspace/multithread/_cs_generalized.c line 2011 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 816 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 819 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 827 file ../workspace/multithread/_cs_generalized.c line 2013 function pop_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 828 file ../workspace/multithread/_cs_generalized.c line 2013 function pop_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00010110 00000000 00000000 00000000)

State 829 file ../workspace/multithread/_cs_generalized.c line 2013 function pop_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00010111 00000000 00000000 00000000)

State 830 file ../workspace/multithread/_cs_generalized.c line 696 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 832 file ../workspace/multithread/_cs_generalized.c line 699 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  mystack={ .top={ &dynamic_object2.se.next, ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,
    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull } } ({ { 00000010 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 } })

State 837 file ../workspace/multithread/_cs_generalized.c line 2013 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 841 file ../workspace/multithread/_cs_generalized.c line 2015 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 842 file ../workspace/multithread/_cs_generalized.c line 2015 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 846 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 849 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 853 file ../workspace/multithread/_cs_generalized.c line 2019 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9=FALSE (00000000)

State 856 file ../workspace/multithread/_cs_generalized.c line 2074 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 857 file ../workspace/multithread/_cs_generalized.c line 2078 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 859 file ../workspace/multithread/_cs_generalized.c line 2087 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=1 (00000000 00000000 00000000 00000001)

State 867 file ../workspace/multithread/_cs_generalized.c line 2617 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_se=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 868 file ../workspace/multithread/_cs_generalized.c line 2618 function pop_0 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=1 (00000000 00000000 00000000 00000001)

State 870 file ../workspace/multithread/_cs_generalized.c line 2627 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_res=1 (00000000 00000000 00000000 00000001)

State 871 file ../workspace/multithread/_cs_generalized.c line 2631 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=FALSE (00000000)

State 874 file ../workspace/multithread/_cs_generalized.c line 2640 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_temp_td=&dynamic_object3.se.next (00000100 00000000 00000000 00000000)

State 876 file ../workspace/multithread/_cs_generalized.c line 2643 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_id_popped=0 (00000000 00000000 00000000 00000000)
%llu


State 879 file ../workspace/multithread/_cs_generalized.c line 2646 function pop_0 thread 0
----------------------------------------------------
  __cs_retval__delete_1=1 (00000000 00000000 00000000 00000001)

State 882 file ../workspace/multithread/_cs_generalized.c line 2660 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_25=FALSE (00000000)

State 885 file ../workspace/multithread/_cs_generalized.c line 2672 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop_loop=1 (00000000 00000000 00000000 00000001)

State 887 file ../workspace/multithread/_cs_generalized.c line 2678 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_24=FALSE (00000000)

State 891 file ../workspace/multithread/_cs_generalized.c line 2692 function pop_0 thread 0
----------------------------------------------------
  __cs_param_delete_s=mystack.top (00000011 00000000 00000000 00000000)

State 893 file ../workspace/multithread/_cs_generalized.c line 2700 function pop_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_ss=mystack.top (00000011 00000000 00000000 00000000)

State 895 file ../workspace/multithread/_cs_generalized.c line 2703 function pop_0 thread 0
----------------------------------------------------
  __cs_param_lfds711_stack_pop_se=&__cs_local_delete_se (00000110 00000000 00000000 00000000)

State 896 file ../workspace/multithread/_cs_generalized.c line 2706 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_backoff_iteration=0ull (00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000)

State 898 file ../workspace/multithread/_cs_generalized.c line 2713 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_6=FALSE (00000000)

State 902 file ../workspace/multithread/_cs_generalized.c line 2732 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_7=FALSE (00000000)

State 908 file ../workspace/multithread/_cs_generalized.c line 2748 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 909 file ../workspace/multithread/_cs_generalized.c line 2748 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 913 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 916 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 923 file ../workspace/multithread/_cs_generalized.c line 2750 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 924 file ../workspace/multithread/_cs_generalized.c line 2750 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 928 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 931 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 936 file ../workspace/multithread/_cs_generalized.c line 2752 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) (00000000 00000000 00000000 00000000)

State 938 file ../workspace/multithread/_cs_generalized.c line 2754 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_original_top[0]=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 939 file ../workspace/multithread/_cs_generalized.c line 2756 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=0 (00000000 00000000 00000000 00000000)

State 940 file ../workspace/multithread/_cs_generalized.c line 2760 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=0 (00000000 00000000 00000000 00000000)

State 941 file ../workspace/multithread/_cs_generalized.c line 2765 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_8=FALSE (00000000)

State 945 file ../workspace/multithread/_cs_generalized.c line 2777 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[1]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) + 12 (00000000 00000000 00000000 00001100)

State 947 file ../workspace/multithread/_cs_generalized.c line 2779 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_new_top[0]=((struct lfds711_stack_element { struct lfds711_stack_element * volatile next; const void *key; const void *value; } *)NULL) (00000000 00000000 00000000 00000000)

State 951 file ../workspace/multithread/_cs_generalized.c line 2781 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_lock=&library_lock (00001000 00000000 00000000 00000000)

State 952 file ../workspace/multithread/_cs_generalized.c line 2781 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 956 file ../workspace/multithread/_cs_generalized.c line 129 function __cs_mutex_lock thread 0
----------------------------------------------------
  library_lock=3 (00000000 00000000 00000000 00000011)

State 959 file ../workspace/multithread/_cs_generalized.c line 130 function __cs_mutex_lock thread 0
----------------------------------------------------
  __cs_message="lock acquired" (00001001 00000000 00000000 00000000)

State 967 file ../workspace/multithread/_cs_generalized.c line 2783 function pop_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_top=mystack.top (00000011 00000000 00000000 00000000)

State 968 file ../workspace/multithread/_cs_generalized.c line 2783 function pop_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_oldtop=__cs_local_lfds711_stack_pop_original_top (00011000 00000000 00000000 00000000)

State 969 file ../workspace/multithread/_cs_generalized.c line 2783 function pop_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_swap_stack_top_newtop=__cs_local_lfds711_stack_pop_new_top (00011001 00000000 00000000 00000000)

State 970 file ../workspace/multithread/_cs_generalized.c line 696 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_swap_stack_top___cs_tmp_if_cond_0=TRUE (00000001)

State 972 file ../workspace/multithread/_cs_generalized.c line 699 function __CSEQ_atomic_swap_stack_top thread 0
----------------------------------------------------
  mystack={ .top={ ((struct lfds711_stack_element *)NULL), ((struct lfds711_stack_element *)NULL) }, .user_state=NULL,
    .$pad2=0u, .pop_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull }, .push_backoff={ .lock=0ull, .backoff_iteration_frequency_counters={ 0ull, 0ull }, .metric=1ull,
    .total_operations=0ull } } ({ { 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, { 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 }, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001, 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 } })

State 977 file ../workspace/multithread/_cs_generalized.c line 2783 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_result=1 (00000001)

State 981 file ../workspace/multithread/_cs_generalized.c line 2785 function pop_0 thread 0
----------------------------------------------------
  __cs_mutex_to_unlock=&library_lock (00001000 00000000 00000000 00000000)

State 982 file ../workspace/multithread/_cs_generalized.c line 2785 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2 (10)

State 986 file ../workspace/multithread/_cs_generalized.c line 138 function __cs_mutex_unlock thread 0
----------------------------------------------------
  library_lock=-1 (11111111 11111111 11111111 11111111)

State 989 file ../workspace/multithread/_cs_generalized.c line 139 function __cs_mutex_unlock thread 0
----------------------------------------------------
  __cs_message="lock released" (00001100 00000000 00000000 00000000)

State 993 file ../workspace/multithread/_cs_generalized.c line 2789 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_9=FALSE (00000000)

State 996 file ../workspace/multithread/_cs_generalized.c line 2844 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop_i=1 (00000000 00000000 00000000 00000001)

State 997 file ../workspace/multithread/_cs_generalized.c line 2848 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_tmp_if_cond_10=FALSE (00000000)

State 999 file ../workspace/multithread/_cs_generalized.c line 2857 function pop_0 thread 0
----------------------------------------------------
  __cs_local_lfds711_stack_pop___cs_dowhile_onetime_1=1 (00000000 00000000 00000000 00000001)

State 1007 file ../workspace/multithread/_cs_generalized.c line 3387 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_se=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 1008 file ../workspace/multithread/_cs_generalized.c line 3388 function pop_0 thread 0
----------------------------------------------------
  __cs_retval__lfds711_stack_pop_1=1 (00000000 00000000 00000000 00000001)

State 1010 file ../workspace/multithread/_cs_generalized.c line 3397 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_res=1 (00000000 00000000 00000000 00000001)

State 1011 file ../workspace/multithread/_cs_generalized.c line 3401 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete___cs_tmp_if_cond_19=FALSE (00000000)

State 1014 file ../workspace/multithread/_cs_generalized.c line 3410 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_temp_td=&dynamic_object2.se.next (00000010 00000000 00000000 00000000)

State 1016 file ../workspace/multithread/_cs_generalized.c line 3413 function pop_0 thread 0
----------------------------------------------------
  __cs_local_delete_id_popped=0 (00000000 00000000 00000000 00000000)
%llu


State 1019 file ../workspace/multithread/_cs_generalized.c line 3416 function pop_0 thread 0
----------------------------------------------------
  __cs_retval__delete_1=1 (00000000 00000000 00000000 00000001)

State 1022 file ../workspace/multithread/_cs_generalized.c line 3430 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_25=FALSE (00000000)

State 1025 file ../workspace/multithread/_cs_generalized.c line 3442 function pop_0 thread 0
----------------------------------------------------
  __cs_local_pop_loop=2 (00000000 00000000 00000000 00000010)

State 1032 file ../workspace/multithread/_cs_generalized.c line 3454 function pop_0 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 1033 file ../workspace/multithread/_cs_generalized.c line 3454 function pop_0 thread 0
----------------------------------------------------
  __cs_thread_index=2u (00000000 00000000 00000000 00000010)

State 1034 file ../workspace/multithread/_cs_generalized.c line 102 function __cs_exit thread 0
----------------------------------------------------
  __cs_thread_joinargs[2]=NULL (00000000 00000000 00000000 00000000)

State 1039 file ../workspace/multithread/_cs_generalized.c line 3737 function main thread 0
----------------------------------------------------
  __cs_pc[2]=156 (10011100)

State 1040 file ../workspace/multithread/_cs_generalized.c line 3739 function main thread 0
----------------------------------------------------
  __cs_tmp_t0_r1=2 (010)

State 1042 file ../workspace/multithread/_cs_generalized.c line 3742 function main thread 0
----------------------------------------------------
  __cs_pc_cs[0]=4 (00000010 0)

State 1052 file ../workspace/multithread/_cs_generalized.c line 3698 function main_thread thread 0
----------------------------------------------------
  __cs_id=1 (00000000 00000000 00000000 00000001)

State 1053 file ../workspace/multithread/_cs_generalized.c line 3698 function main_thread thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

State 1055 file ../workspace/multithread/_cs_generalized.c line 97 function __cs_join thread 0
----------------------------------------------------
  __cs_value_ptr$object=NULL (00000000 00000000 00000000 00000000)

State 1061 file ../workspace/multithread/_cs_generalized.c line 3700 function main_thread thread 0
----------------------------------------------------
  __cs_id=2 (00000000 00000000 00000000 00000010)

State 1062 file ../workspace/multithread/_cs_generalized.c line 3700 function main_thread thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

State 1064 file ../workspace/multithread/_cs_generalized.c line 97 function __cs_join thread 0
----------------------------------------------------
  __cs_value_ptr$object=NULL (00000000 00000000 00000000 00000000)

Violated property:
  file ../workspace/multithread/_cs_generalized.c line 3701 function main_thread
  assertion 0
  0 != 0


VERIFICATION FAILED
