/* (C) 2018 Rocket Software */
#ifndef _ASM_ZOS_BPX_OFFSETS_H
#define _ASM_ZOS_BPX_OFFSETS_H 1
#include <asm/unistd_64.h>

/* BPX assembler callable services */

/* All services
 * High order bits are all 0.
 */

#define  __BPX_off_resource                    8     /*  BPX1RMG  */
#define  __BPX_off_isatty                      12    /*  BPX1ITY  */
#define  __BPX_off_ttyname                     16    /*  BPX1TYN  */
#define  __BPX_off_tcflush                     20    /*  BPX1TFH  */
#define  __BPX_off_tcdrain                     24    /*  BPX1TDR  */
#define  __BPX_off_tcflow                      28    /*  BPX1TFW  */
#define  __BPX_off_tcgetattr                   32    /*  BPX1TGA  */
#define  __BPX_off_tcgetpgrp                   36    /*  BPX1TGP  */
#define  __BPX_off_tcsetattr                   40    /*  BPX1TSA  */
#define  __BPX_off_tcsendbreak                 44    /*  BPX1TSB  */
#define  __BPX_off_tcsetpgrp                   48    /*  BPX1TSP  */
#define  __BPX_off_access                      52    /*  BPX1ACC  */
#define  __BPX_off_chdir                       56    /*  BPX1CHD  */
#define  __BPX_off_chmod                       60    /*  BPX1CHM  */
#define  __BPX_off_chown                       64    /*  BPX1CHO  */
#define  __BPX_off_closedir                    68    /*  BPX1CLD  */
#define  __BPX_off_close                       72    /*  BPX1CLO  */
#define  __BPX_off_w_getmntent                 76    /*  BPX1GMN  */
#define  __BPX_off_w_statvfs                    80    /*  BPX1STF  */
#define  __BPX_off_chaudit                     84    /*  BPX1CHA  */
#define  __BPX_off_fchmod                      88    /*  BPX1FCM  */
#define  __BPX_off_fchown                      92    /*  BPX1FCO  */
#define  __BPX_off_fcntl                       96    /*  BPX1FCT  */
#define  __BPX_off_fpathconf                   100   /*  BPX1FPC  */
#define  __BPX_off_fstat                       104   /*  BPX1FST  */
#define  __BPX_off_fsync                       108   /*  BPX1FSY  */
#define  __BPX_off_ftruncate                   112   /*  BPX1FTR  */
#define  __BPX_off_getcwd                      116   /*  BPX1GCW  */
#define  __BPX_off_w_ioctl                     120   /*  BPX1IOC  */
#define  __BPX_off_link                        124   /*  BPX1LNK  */
#define  __BPX_off_lseek                       128   /*  BPX1LSK  */
#define  __BPX_off_lstat                       132   /*  BPX1LST  */
#define  __BPX_off_mkdir                       136   /*  BPX1MKD  */
#define  __BPX_off_fchaudit                    140   /*  BPX1FCA  */
#define  __BPX_off_mknod                       144   /*  BPX1MKN  */
#define  __BPX_off_mount                       148   /*  BPX1MNT  */
#define  __BPX_off_opendir                     152   /*  BPX1OPD  */
#define  __BPX_off_open                        156   /*  BPX1OPN  */
#define  __BPX_off_pathconf                    160   /*  BPX1PCF  */
#define  __BPX_off_pipe                        164   /*  BPX1PIP  */
#define  __BPX_off_readdir                     168   /*  BPX1RDD  */
#define  __BPX_off_readlink                    172   /*  BPX1RDL  */
#define  __BPX_off_read                        176   /*  BPX1RED  */
#define  __BPX_off_rename                      180   /*  BPX1REN  */
#define  __BPX_off_rewinddir                   184   /*  BPX1RWD  */
#define  __BPX_off_rmdir                       188   /*  BPX1RMD  */
#define  __BPX_off_stat                        192   /*  BPX1STA  */
#define  __BPX_off_symlink                     196   /*  BPX1SYM  */
#define  __BPX_off_extlink_np                  200   /*  BPX1EXT  */
#define  __BPX_off_umask                       204   /*  BPX1UMK  */
#define  __BPX_off_umount                      208   /*  BPX1UMT  */
#define  __BPX_off_unlink                      212   /*  BPX1UNL  */
#define  __BPX_off_utime                       216   /*  BPX1UTI  */
#define  __BPX_off_write                       220   /*  BPX1WRT  */
#define  __BPX_off_alarm                       224   /*  BPX1ALR  */
#define  __BPX_off_exec                        228   /*  BPX1EXC  */
#define  __BPX_off__exit                       232   /*  BPX1EXI  */
#define  __BPX_off_execmvs                     236   /*  BPX1EXM  */
#define  __BPX_off_fork                        240   /*  BPX1FRK  */
#define  __BPX_off_getegid                     244   /*  BPX1GEG  */
#define  __BPX_off_geteuid                     248   /*  BPX1GEU  */
#define  __BPX_off_getgrgid                    252   /*  BPX1GGI  */
#define  __BPX_off_getgrnam                    256   /*  BPX1GGN  */
#define  __BPX_off_getgroups                   260   /*  BPX1GGR  */
#define  __BPX_off_getgid                      264   /*  BPX1GID  */
#define  __BPX_off_getlogin                    268   /*  BPX1GLG  */
#define  __BPX_off_getpgrp                     272   /*  BPX1GPG  */
#define  __BPX_off_getpid                      276   /*  BPX1GPI  */
#define  __BPX_off_getpwnam                    280   /*  BPX1GPN  */
#define  __BPX_off_getppid                     284   /*  BPX1GPP  */
#define  __BPX_off_getpwuid                    288   /*  BPX1GPU  */
#define  __BPX_off_getugrps                    292   /*  BPX1GUG  */
#define  __BPX_off_getuid                      296   /*  BPX1GUI  */
#define  __BPX_off_setdubdefault               300   /*  BPX1SDD  */
#define  __BPX_off_kill                        308   /*  BPX1KIL  */
#define  __BPX_off_mvssigsetup                 312   /*  BPX1MSS  */
#define  __BPX_off_pause                       316   /*  BPX1PAS  */
#define  __BPX_off_ptrace                      320   /*  BPX1PTR  */
#define  __BPX_off_sigaction                   324   /*  BPX1SIA  */
#define  __BPX_off_setgid                      328   /*  BPX1SGI  */
#define  __BPX_off_mvsunsigsetup               336   /*  BPX1MSD  */
#define  __BPX_off_sigpending                  340   /*  BPX1SIP  */
#define  __BPX_off_sleep                       344   /*  BPX1SLP  */
#define  __BPX_off_setpgid                     348   /*  BPX1SPG  */
#define  __BPX_off_sigprocmask                 352   /*  BPX1SPM  */
#define  __BPX_off_setsid                      356   /*  BPX1SSI  */
#define  __BPX_off_sigsuspend                  360   /*  BPX1SSU  */
#define  __BPX_off_setuid                      364   /*  BPX1SUI  */
#define  __BPX_off_sysconf                     368   /*  BPX1SYC  */
#define  __BPX_off_times                       372   /*  BPX1TIM  */
#define  __BPX_off_uname                       376   /*  BPX1UNA  */
#define  __BPX_off_wait                        380   /*  BPX1WAT  */
#define  __BPX_off_quiesce                     388   /*  BPX1QSE  */
#define  __BPX_off_unquiesce                   392   /*  BPX1UQS  */
#define  __BPX_off_MvsIptAffinity              396   /*  BPX1IPT  */
#define  __BPX_off_mvsprocclp                  408   /*  BPX1MPC  */
#define  __BPX_off_pthread_quiesc              412   /*  BPX1PTQ  */
#define  __BPX_off_sigputback                  416   /*  BPX1SPB  */
#define  __BPX_off_seteuid                     420   /*  BPX1SEU  */
#define  __BPX_off_setegid                     424   /*  BPX1SEG  */
#define  __BPX_off_w_getpsent                  428   /*  BPX1GPS  */
#define  __BPX_off_pthread_create              432   /*  BPX1PTC  */
#define  __BPX_off_pthread_xandg               436   /*  BPX1PTX  */
#define  __BPX_off_pthread_join                440   /*  BPX1PTJ  */
#define  __BPX_off_pthread_detach              444   /*  BPX1PTD  */
#define  __BPX_off_pthread_cancel              448   /*  BPX1PTB  */
#define  __BPX_off_pthread_self                452   /*  BPX1PTS  */
#define  __BPX_off_pthread_setintr             460   /*  BPX1PSI  */
#define  __BPX_off_pthread_kill                464   /*  BPX1PTK  */
#define  __BPX_off_sigwait                     468   /*  BPX1SWT  */
#define  __BPX_off_pthread_setintrtype         472   /*  BPX1PST  */
#define  __BPX_off_pthread_testintr            476   /*  BPX1PTI  */
#define  __BPX_off_cond_cancel                 480   /*  BPX1CCA  */
#define  __BPX_off_cond_post                   484   /*  BPX1CPO  */
#define  __BPX_off_cond_setup                  488   /*  BPX1CSE  */
#define  __BPX_off_cond_timed_wait             492   /*  BPX1CTW  */
#define  __BPX_off_cond_wait                   496   /*  BPX1CWA  */
#define  __BPX_off_chattr                      500   /*  BPX1CHR  */
#define  __BPX_off_fchattr                     504   /*  BPX1FCR  */
#define  __BPX_off_accept                      508   /*  BPX1ACP  */
#define  __BPX_off_bind                        512   /*  BPX1BND  */
#define  __BPX_off_connect                     516   /*  BPX1CON  */
#define  __BPX_off_gethostid                   520   /*  BPX1HST  */
#define  __BPX_off_getpeername                 524   /*  BPX1GNM  */
#define  __BPX_off_getsockopt                  528   /*  BPX1OPT  */
#define  __BPX_off_listen                      532   /*  BPX1LSN  */
#define  __BPX_off_readv                       536   /*  BPX1RDV  */
#define  __BPX_off_recv                        540   /*  BPX1RCV  */
#define  __BPX_off_recvfrom                    544   /*  BPX1RFM  */
#define  __BPX_off_recvmsg                     548   /*  BPX1RMS  */
#define  __BPX_off_select                      552   /*  BPX1SEL  */
#define  __BPX_off_send                        556   /*  BPX1SND  */
#define  __BPX_off_sendmsg                     560   /*  BPX1SMS  */
#define  __BPX_off_sendto                      564   /*  BPX1STO  */
#define  __BPX_off_setpeer                     568   /*  BPX1SPR  */
#define  __BPX_off_shutdown                    572   /*  BPX1SHT  */
#define  __BPX_off_socket_pair                 576   /*  BPX1SOC  */
#define  __BPX_off_writev                      580   /*  BPX1WRV  */
#define  __BPX_off_v_reg                       584   /*  BPX1VRG  */
#define  __BPX_off_v_rpn                       588   /*  BPX1VRP  */
#define  __BPX_off_bind2addrsel                592   /*  BPX1BAS  */
#define  __BPX_off_v_get                       596   /*  BPX1VGT  */
#define  __BPX_off_v_rel                       600   /*  BPX1VRL  */
#define  __BPX_off_v_lookup                    604   /*  BPX1VLK  */
#define  __BPX_off_v_rdwr                      608   /*  BPX1VRW  */
#define  __BPX_off_v_readdir                   612   /*  BPX1VRD  */
#define  __BPX_off_v_readlink                  616   /*  BPX1VRA  */
#define  __BPX_off_v_create                    620   /*  BPX1VCR  */
#define  __BPX_off_v_mkdir                     624   /*  BPX1VMD  */
#define  __BPX_off_v_symlink                   628   /*  BPX1VSY  */
#define  __BPX_off_v_getattr                   632   /*  BPX1VGA  */
#define  __BPX_off_v_settatr                   636   /*  BPX1VSA  */
#define  __BPX_off_v_link                      640   /*  BPX1VLN  */
#define  __BPX_off_v_rmdir                     644   /*  BPX1VRE  */
#define  __BPX_off_v_remove                    648   /*  BPX1VRM  */
#define  __BPX_off_v_rename                    652   /*  BPX1VRN  */
#define  __BPX_off_v_fstatfs                   656   /*  BPX1VSF  */
#define  __BPX_off_v_lockctl                   660   /*  BPX1VLO  */
#define  __BPX_off_attach_exec                 664   /*  BPX1ATX  */
#define  __BPX_off_attach_execmvs              668   /*  BPX1ATM  */
#define  __BPX_off_MVSpauseInit                680   /*  BPX1MPI  */
#define  __BPX_off_set_thread_limits           684   /*  BPX1STL  */
#define  __BPX_off_MVSpause                    688   /*  BPX1MP   */
#define  __BPX_off_msgctl                      692   /*  BPX1QCT  */
#define  __BPX_off_msgget                      696   /*  BPX1QGT  */
#define  __BPX_off_msgrcv                      700   /*  BPX1QRC  */
#define  __BPX_off_msgsnd                      704   /*  BPX1QSN  */
#define  __BPX_off_semctl                      708   /*  BPX1SCT  */
#define  __BPX_off_semget                      712   /*  BPX1SGT  */
#define  __BPX_off_semop                       716   /*  BPX1SOP  */
#define  __BPX_off_shmat                       720   /*  BPX1MAT  */
#define  __BPX_off_shmctl                      724   /*  BPX1MCT  */
#define  __BPX_off_shmdt                       728   /*  BPX1MDT  */
#define  __BPX_off_shmget                      732   /*  BPX1MGT  */
#define  __BPX_off_w_getipc                    736   /*  BPX1GET  */
#define  __BPX_off_setpriority                 740   /*  BPX1SPY  */
#define  __BPX_off_getpriority                 744   /*  BPX1GPY  */
#define  __BPX_off_nice                        748   /*  BPX1NIC  */
#define  __BPX_off_getitimer                   752   /*  BPX1GTR  */
#define  __BPX_off_setitimer                   756   /*  BPX1STR  */
#define  __BPX_off_spawn                       760   /*  BPX1SPN  */
#define  __BPX_off_chpriority                  764   /*  BPX1CHP  */
#define  __BPX_off_pfsctl                      768   /*  BPX1PCT  */
#define  __BPX_off_getgrent                    772   /*  BPX1GGE  */
#define  __BPX_off_getpwent                    776   /*  BPX1GPE  */
#define  __BPX_off_setgrent                    780   /*  BPX1SGE  */
#define  __BPX_off_setpwent                    784   /*  BPX1SPE  */
#define  __BPX_off_password                    788   /*  BPX1PWD  */
#define  __BPX_off_setgroups                   792   /*  BPX1SGR  */
#define  __BPX_off_mmap                        796   /*  BPX1MMP  */
#define  __BPX_off_mprotect                    800   /*  BPX1MPR  */
#define  __BPX_off_msync                       804   /*  BPX1MSY  */
#define  __BPX_off_munmap                      808   /*  BPX1MUN  */
#define  __BPX_off_setrlimit                   816   /*  BPX1SRL  */
#define  __BPX_off_getrlimit                   820   /*  BPX1GRL  */
#define  __BPX_off_getrusage                   824   /*  BPX1GRU  */
#define  __BPX_off_truncate                    828   /*  BPX1TRU  */
#define  __BPX_off_lchown                      832   /*  BPX1LCO  */
#define  __BPX_off_waitid_wait3                840   /*  BPX1WTE  */
#define  __BPX_off_statvfs                     844   /*  BPX1STV  */
#define  __BPX_off_fstatvfs                    848   /*  BPX1FTV  */
#define  __BPX_off_fchdir                      852   /*  BPX1FCD  */
#define  __BPX_off_readdir2                    856   /*  BPX1RD2  */
#define  __BPX_off_getpgid                     860   /*  BPX1GEP  */
#define  __BPX_off_getsid                      864   /*  BPX1GES  */
#define  __BPX_off_sync                        868   /*  BPX1SYN  */
#define  __BPX_off_chroot                      872   /*  BPX1CRT  */
#define  __BPX_off_v_export                    876   /*  BPX1VEX  */
#define  __BPX_off_loadhfs                     880   /*  BPX1LOD  */
#define  __BPX_off_realpath                    884   /*  BPX1RPH  */
#define  __BPX_off_deletehfs                   888   /*  BPX1DEL  */
#define  __BPX_off_setreuid                    892   /*  BPX1SRU  */
#define  __BPX_off_setregid                    896   /*  BPX1SRG  */
#define  __BPX_off_tcgetcp                     900   /*  BPX1TGC  */
#define  __BPX_off_tcsetcp                     904   /*  BPX1TSC  */
#define  __BPX_off_tcsettables                 908   /*  BPX1TST  */
#define  __BPX_off_tcgetsid                    912   /*  BPX1TGS  */
#define  __BPX_off_grantpt                     916   /*  BPX1GPT  */
#define  __BPX_off_unlockpt                    920   /*  BPX1UPT  */
#define  __BPX_off_ttyname2                    924   /*  BPX2TYN  */
#define  __BPX_off_isatty2                     928   /*  BPX2ITY  */
#define  __BPX_off_poll                        932   /*  BPX1POL  */
#define  __BPX_off_getwd                       936   /*  BPX1GWD  */
#define  __BPX_off_read_extlink                940   /*  BPX1RDX  */
#define  __BPX_off_v_access                    944   /*  BPX1VAC  */
#define  __BPX_off_querydub                    948   /*  BPX1QDB  */
#define  __BPX_off_oe_env_np                   960   /*  BPX1ENV  */
#define  __BPX_off_pthread_security_np         964   /*  BPX1TLS  */
#define  __BPX_off_auth_check_rsrc_np          972   /*  BPX1ACK  */
#define  __BPX_off_recvmsg2                    976   /*  BPX2RMS  */
#define  __BPX_off_sendmsg2                    980   /*  BPX2SMS  */
#define  __BPX_off_w_pioctl                    984   /*  BPX1PIO  */
#define  __BPX_off_asyncio                     988   /*  BPX1AIO  */
#define  __BPX_off_server_init                 1004  /*  BPX1SIN  */
#define  __BPX_off_server_pwu                  1008  /*  BPX1SPW  */
#define  __BPX_off_console_np                  1012  /*  BPX1CCS  */
#define  __BPX_off_pthread_tag_np              1016  /*  BPX1PTT  */
#define  __BPX_off_getclientid                 1024  /*  BPX1GCL  */
#define  __BPX_off_givesocket                  1028  /*  BPX1GIV  */
#define  __BPX_off_takesocket                  1032  /*  BPX1TAK  */
#define  __BPX_off___smf_record                1036  /*  BPX1SMF  */
#define  __BPX_off_v_pathconf                  1040  /*  BPX1VPC  */
#define  __BPX_off___security                  1044  /*  BPX1SEC  */
#define  __BPX_off___wlm                       1048  /*  BPX1WLM  */
#define  __BPX_off_openstat                    1052  /*  BPX2OPN  */
#define  __BPX_off___getthent                  1056  /*  BPX1GTH  */
#define  __BPX_off_accept_and_recv             1060  /*  BPX1ANR  */
#define  __BPX_off_send_file                   1064  /*  BPX1SF   */
#define  __BPX_off___shm_lock                  1068  /*  BPX1SLK  */
#define  __BPX_off___pid_affinity              1072  /*  BPX1PAF  */
#define  __BPX_off_set_timer_event             1076  /*  BPX1STE  */
#define  __BPX_off_srx_np                      1080  /*  BPX1SRX  */
#define  __BPX_off___Sigactionset              1084  /*  BPX1SA2  */
#define  __BPX_off_aio_suspend                 1088  /*  BPX1ASP  */
#define  __BPX_off_sigtimedwait                1096  /*  BPX1STW  */
#define  __BPX_off___osenv                     1100  /*  BPX1OSE  */
#define  __BPX_off_sigqueue                    1104  /*  BPX1SGQ  */
#define  __BPX_off_Pread                       1108  /*  BPX1RW   */
#define  __BPX_off___smc                       1112  /*  BPX1SMC  */
#define  __BPX_off_sw_signaldelv               1124  /*  BPX1DSD  */
#define  __BPX_off___mount                     1128  /*  BPX2MNT  */
#define  __BPX_off___cpl                       1132  /*  BPX1CPL  */
#define  __BPX_off___map_init                  1136  /*  BPX1MMI  */
#define  __BPX_off___map_service               1140  /*  BPX1MMS  */
#define  __BPX_off_server_thread_query         1144  /*  BPX1STQ  */
#define  __BPX_off_MvsThreadAffinity           1148  /*  BPX1TAF  */
#define  __BPX_off_pthread_quiesce_and_get_np  1152  /*  BPX1PQG  */
#define  __BPX_off_gethostbyname               1156  /*  BPX1GHN  */
#define  __BPX_off_gethostbyaddr               1160  /*  BPX1GHA  */
#define  __BPX_off_GetAddrInfo                 1164  /*  BPX1GAI  */
#define  __BPX_off_FreeAddrInfo                1168  /*  BPX1FAI  */
#define  __BPX_off_GetNameInfo                 1172  /*  BPX1GNI  */
#define  __BPX_off___poe                       1176  /*  BPX1POE  */
#define  __BPX_off_lchattr                     1180  /*  BPX1LCR  */
#define  __BPX_off_v_open                      1184  /*  BPX1VOP  */
#define  __BPX_off_v_close                     1188  /*  BPX1VCL  */

/* Mapping all Linux s390 syscall names to their nearest z/OS
   equivalents. Many of them might not be used by glibc.
   Anything defined to 0 means that the corresponding linux syscall
   has no sufficiently similar BPX service, and may or may not need
   to be implemented from scratch, if possible. */

#define __BPX_exit    __BPX_off__exit
#define __BPX_fork    __BPX_off_fork
#define __BPX_read    __BPX_off_read
#define __BPX_write   __BPX_off_write
#define __BPX_open    __BPX_off_open
#define __BPX_close   __BPX_off_close
#define __BPX_restart_syscall 0 /* no glibc wrapper expected */
#define __BPX_creat   0 /* no direct equivalent */
#define __BPX_link    __BPX_off_link
#define __BPX_unlink  __BPX_off_unlink
#define __BPX_execve  __BPX_off_exec /* TODO: different semantics/behavior */
#define __BPX_chdir   __BPX_off_chdir
#define __BPX_mknod   __BPX_off_mknod
#define __BPX_chmod   __BPX_off_chmod
#define __BPX_lseek   __BPX_off_lseek
#define __BPX_getpid  __BPX_off_getpid
#define __BPX_mount   __BPX_off_mount /* or __mount? */
#define __BPX_umount  0 /* can be implemented with umount2 */
#define __BPX_ptrace  __BPX_off_ptrace
#define __BPX_alarm   __BPX_off_alarm
#define __BPX_pause   __BPX_off_pause
#define __BPX_utime   __BPX_off_utime
#define __BPX_access  __BPX_off_access
#define __BPX_nice    __BPX_off_nice
#define __BPX_sync    __BPX_off_sync
#define __BPX_kill    __BPX_off_kill
#define __BPX_rename  __BPX_off_rename
#define __BPX_mkdir   __BPX_off_mkdir
#define __BPX_rmdir   __BPX_off_rmdir
#define __BPX_dup     0 /* most functionality is in fcntl */
#define __BPX_pipe    __BPX_off_pipe
#define __BPX_times   __BPX_off_times
#define __BPX_brk     0 /* TODO: this is problematic */
#define __BPX_signal  0 /* TODO: might be able to emulate with sigaction */
#define __BPX_acct    0 /* process accounting is not supported */
#define __BPX_umount2 __BPX_off_umount /* see umount above */
#define __BPX_ioctl   __BPX_off_w_ioctl /* what does the w mean? */
#define __BPX_fcntl   __BPX_off_fcntl
#define __BPX_setpgid __BPX_off_setpgid
#define __BPX_umask   __BPX_off_umask
#define __BPX_chroot  __BPX_off_chroot
#define __BPX_ustat   __BPX_off_w_getmntent /* not an exact mapping */
#define __BPX_dup2    0 /* implement with fcntl */
#define __BPX_getppid __BPX_off_getppid
#define __BPX_getpgrp __BPX_off_getpgrp
#define __BPX_setsid  __BPX_off_setsid
#define __BPX_sigaction   __BPX_off_sigaction /* and __Sigactionset */
#define __BPX_sigsuspend  __BPX_off_sigsuspend
#define __BPX_sigpending  __BPX_off_sigpending
#define __BPX_sethostname 0 /* TODO: */
#define __BPX_setrlimit   __BPX_off_setrlimit
#define __BPX_getrusage   __BPX_off_getrusage
#define __BPX_gettimeofday 0 /* TODO: this is problematic */
#define __BPX_settimeofday 0 /* see gettimeofday */
#define __BPX_symlink     __BPX_off_symlink
#define __BPX_readlink    __BPX_off_readlink
#define __BPX_uselib      0 /* no glibc wrapper expected */
#define __BPX_swapon      0 /* TODO: how does z/OS manage swap? */
#define __BPX_reboot      0 /* we should leave this as a stub for now */
#define __BPX_readdir   __BPX_off_readdir /* no glibc wrapper expected, see readdir2 */
#define __BPX_mmap      __BPX_off_mmap
#define __BPX_munmap    __BPX_off_munmap
#define __BPX_truncate  __BPX_off_truncate
#define __BPX_ftruncate __BPX_off_ftruncate
#define __BPX_fchmod    __BPX_off_fchmod
#define __BPX_getpriority __BPX_off_getpriority
#define __BPX_setpriority __BPX_off_setpriority
#define __BPX_statfs      0 /* can implement with statvfs */
#define __BPX_fstatfs     0 /* can implement with fstatvfs */
#define __BPX_socketcall  0 /* can implement with the other socket services */
#define __BPX_syslog      0 /* linux-style kernel logging is not supported */
#define __BPX_setitimer   __BPX_off_setitimer
#define __BPX_getitimer   __BPX_off_getitimer
#define __BPX_stat  __BPX_off_stat
#define __BPX_lstat __BPX_off_lstat
#define __BPX_fstat __BPX_off_fstat
#define __BPX_lookup_dcookie 0 /* I can't find a corresponding service */
#define __BPX_vhangup 0 /* try to implement with other termios */
#define __BPX_idle    0 /* doesn't exist in linux anymore */
#define __BPX_wait4   0 /* might be able to implement with waitid */
#define __BPX_swapoff 0 /* see swapon */
#define __BPX_sysinfo 0 /* no straightforward equivalent, maybe a non-BPX service? */
#define __BPX_ipc     0 /* could be implemented with other sysvipcs */
#define __BPX_fsync   __BPX_off_fsync
#define __BPX_sigreturn 0 /* TODO: without this, implementing signal handlers is hard */
#define __BPX_clone    0 /* cannot be implemented as is in linux without kernel support */
#define __BPX_setdomainname 0 /* Maybe other services could implement this */
#define __BPX_uname    __BPX_off_uname
#define __BPX_adjtimex 0 /* might not be implementable on z/OS */
#define __BPX_mprotect __BPX_off_mprotect
#define __BPX_sigprocmask __BPX_off_sigprocmask
#define __BPX_create_module   0 /* no glibc wrapper expected */
#define __BPX_init_module     0 /* no glibc wrapper expected */
#define __BPX_delete_module   0 /* no glibc wrapper expected */
#define __BPX_get_kernel_syms 0 /* no glibc wrapper expected */
#define __BPX_quotactl 0 /* maybe implementable with non-BPX services */
#define __BPX_getpgid  __BPX_off_getpgid
#define __BPX_fchdir   __BPX_off_fchdir
#define __BPX_bdflush  0 /* deprecated on linux */
#define __BPX_sysfs    0 /* implementable with other calls */
#define __BPX_personality 0 /* no straightforward equivalent */
#define __BPX_afs_syscall 0 /* stub pseudo-call */
#define __BPX_getdents 0 /* no glibc wrapper expected */
#define __BPX_select   __BPX_off_select
#define __BPX_flock    0 /* TODO: implement this, somehow */
#define __BPX_msync    __BPX_off_msync
#define __BPX_readv    __BPX_off_readv
#define __BPX_writev   __BPX_off_writev
#define __BPX_getsid   __BPX_off_getsid
#define __BPX_fdatasync  0 /* can be implemented with fsync */
#define __BPX__sysctl    0 /* no glibc wrapper expected */
#define __BPX_mlock      0 /* is arbitrary memory locking possible? */
#define __BPX_munlock    0 /* see mlock */
#define __BPX_mlockall   0 /* see mlock */
#define __BPX_munlockall 0 /* see mlock */
#define __BPX_sched_setparam         0 /* bpx scheduler interface? */
#define __BPX_sched_getparam         0 /* bpx scheduler interface? */
#define __BPX_sched_setscheduler     0 /* bpx scheduler interface? */
#define __BPX_sched_getscheduler     0 /* bpx scheduler interface? */
#define __BPX_sched_yield            0 /* bpx scheduler interface? */
#define __BPX_sched_get_priority_max 0 /* bpx scheduler interface? */
#define __BPX_sched_get_priority_min 0 /* bpx scheduler interface? */
#define __BPX_sched_rr_get_interval  0 /* bpx scheduler interface? */
#define __BPX_nanosleep  0 /* implement with cond_timed_wait */
#define __BPX_mremap     0 /* difficult to implement */
#define __BPX_query_module 0 /* no glibc wrapper expected */
#define __BPX_poll __BPX_off_poll
#define __BPX_nfsservctl 0 /* removed in linux */
#define __BPX_prctl 0 /* could be implemented with other syscalls */
#define __BPX_rt_sigreturn    0 /* no rt signal support */
#define __BPX_rt_sigaction    0 /* no rt signal support */
#define __BPX_rt_sigprocmask  0 /* no rt signal support */
#define __BPX_rt_sigpending   0 /* no rt signal support */
#define __BPX_rt_sigtimedwait 0 /* no rt signal support */
#define __BPX_rt_sigqueueinfo 0 /* no rt signal support */
#define __BPX_rt_sigsuspend   0 /* no rt signal support */
#define __BPX_pread64   __BPX_off_Pread /* pread/pwrite share a call */
#define __BPX_pwrite64  __BPX_off_Pread /* pread/pwrite share a call */
#define __BPX_getcwd    __BPX_off_getcwd
#define __BPX_capget    0 /* implement with cap_get_proc if needed */
#define __BPX_capset    0 /* implement with cap_set_proc if needed */
#define __BPX_sigaltstack 0 /* how could this be implemented? */
#define __BPX_sendfile  0 /* emulate with read()+write() */
#define __BPX_getpmsg   0 /* stub pseudo-call */
#define __BPX_putpmsg   0 /* stub pseudo-call */
#define __BPX_vfork     0 /* implement with fork */
#define __BPX_getrlimit __BPX_off_getrlimit
#define __BPX_lchown    __BPX_off_lchown
#define __BPX_getuid    __BPX_off_getuid
#define __BPX_getgid    __BPX_off_getgid
#define __BPX_geteuid   __BPX_off_geteuid
#define __BPX_getegid   __BPX_off_getegid
#define __BPX_setreuid  __BPX_off_setreuid
#define __BPX_setregid  __BPX_off_setregid
#define __BPX_getgroups __BPX_off_getgroups
#define __BPX_setgroups __BPX_off_setgroups
#define __BPX_fchown    __BPX_off_fchown
#define __BPX_setresuid 0 /* any calls that implement the saved part? */
#define __BPX_getresuid 0 /* any calls that implement the saved part? */
#define __BPX_setresgid 0 /* any calls that implement the saved part? */
#define __BPX_getresgid 0 /* any calls that implement the saved part? */
#define __BPX_chown     __BPX_off_chown
#define __BPX_setuid    __BPX_off_setuid
#define __BPX_setgid    __BPX_off_setgid
#define __BPX_setfsuid  0 /* any calls that implement the saved part? */
#define __BPX_setfsgid  0 /* any calls that implement the saved part? */
#define __BPX_pivot_root 0 /* no glibc wrapper required */
#define __BPX_mincore   0 /* how to check for resident pages? */
#define __BPX_madvise   0 /* no support for kernel hinting */
#define __BPX_getdents64 0 /* no glibc wrapper required */
#define __BPX_readahead 0 /* read file into cache */
#define __BPX_setxattr     0 /* does z/OS have xattr support? */
#define __BPX_lsetxattr    0 /* does z/OS have xattr support? */
#define __BPX_fsetxattr    0 /* does z/OS have xattr support? */
#define __BPX_getxattr     0 /* does z/OS have xattr support? */
#define __BPX_lgetxattr    0 /* does z/OS have xattr support? */
#define __BPX_fgetxattr    0 /* does z/OS have xattr support? */
#define __BPX_listxattr    0 /* does z/OS have xattr support? */
#define __BPX_llistxattr   0 /* does z/OS have xattr support? */
#define __BPX_flistxattr   0 /* does z/OS have xattr support? */
#define __BPX_removexattr  0 /* does z/OS have xattr support? */
#define __BPX_lremovexattr 0 /* does z/OS have xattr support? */
#define __BPX_fremovexattr 0 /* does z/OS have xattr support? */
#define __BPX_gettid 0 /* no glibc wrapper expected */
#define __BPX_tkill  0 /* no glibc wrapper expected */
#define __BPX_futex  0 /* no glibc wrapper expected */
#define __BPX_sched_setaffinity 0 /* bpx scheduler interface? */
#define __BPX_sched_getaffinity 0 /* bpx scheduler interface? */
#define __BPX_tgkill 0 /* no glibc wrapper expected */
#define __BPX_io_setup     0 /* no glibc wrapper expected */
#define __BPX_io_destroy   0 /* no glibc wrapper expected */
#define __BPX_io_getevents 0 /* no glibc wrapper expected */
#define __BPX_io_submit    0 /* no glibc wrapper expected */
#define __BPX_io_cancel    0 /* no glibc wrapper expected */
#define __BPX_exit_group   0 /* z/OS thread support is strange */
#define __BPX_epoll_create 0 /* no epoll support */
#define __BPX_epoll_ctl    0 /* no epoll support */
#define __BPX_epoll_wait   0 /* no epoll support */
#define __BPX_set_tid_address 0 /* z/OS thread support is strange */
#define __BPX_fadvise64 0 /* no support for kernel hinting */
#define __BPX_timer_create     0 /* evented IO? */
#define __BPX_timer_settime    0 /* evented IO? */
#define __BPX_timer_gettime    0 /* evented IO? */
#define __BPX_timer_getoverrun 0 /* evented IO? */
#define __BPX_timer_delete     0 /* evented IO? */
#define __BPX_clock_settime    0 /* z/OS clock support? */
#define __BPX_clock_gettime    0 /* z/OS clock support? */
#define __BPX_clock_getres     0 /* z/OS clock support? */
#define __BPX_clock_nanosleep  0 /* z/OS clock support? */
#define __BPX_statfs64  0 /* implement with statvfs */
#define __BPX_fstatfs64 0 /* implement with fstatvfs */
#define __BPX_remap_file_pages 0 /* deprecated in linux */
#define __BPX_mbind         0 /* no NUMA policy support */
#define __BPX_get_mempolicy 0 /* no NUMA policy support */
#define __BPX_set_mempolicy 0 /* no NUMA policy support */
#define __BPX_mq_open         0 /* z/OS MQs don't support this interface natively */
#define __BPX_mq_unlink       0 /* z/OS MQs don't support this interface natively */
#define __BPX_mq_timedsend    0 /* z/OS MQs don't support this interface natively */
#define __BPX_mq_timedreceive 0 /* z/OS MQs don't support this interface natively */
#define __BPX_mq_notify       0 /* z/OS MQs don't support this interface natively */
#define __BPX_mq_getsetattr   0 /* z/OS MQs don't support this interface natively */
#define __BPX_kexec_load  0 /* z/OS only has the one kernel */
#define __BPX_add_key     0 /* no keyring */
#define __BPX_request_key 0 /* no keyring */
#define __BPX_keyctl      0 /* no keyring */
#define __BPX_waitid __BPX_off_waitid_wait3
#define __BPX_ioprio_set 0 /* IO scheduler interface? */
#define __BPX_ioprio_get 0 /* IO scheduler interface? */
#define __BPX_inotify_init      0 /* no inotify-style interface */
#define __BPX_inotify_add_watch 0 /* no inotify-style interface */
#define __BPX_inotify_rm_watch  0 /* no inotify-style interface */
#define __BPX_migrate_pages     0 /* no compatible interface */
#define __BPX_openat     0 /* can be implemented with open */
#define __BPX_mkdirat    0 /* can be implemented with mkdir */
#define __BPX_mknodat    0 /* can be implemented with mknod */
#define __BPX_fchownat   0 /* can be implemented with fchown */
#define __BPX_futimesat  0 /* can be implemented with futimes */
#define __BPX_newfstatat 0 /* can be implemented with newfstat */
#define __BPX_unlinkat   0 /* can be implemented with unlink */
#define __BPX_renameat   0 /* can be implemented with rename */
#define __BPX_linkat     0 /* can be implemented with link */
#define __BPX_symlinkat  0 /* can be implemented with symlink */
#define __BPX_readlinkat 0 /* can be implemented with readlink */
#define __BPX_fchmodat   0 /* can be implemented with fchmod */
#define __BPX_faccessat  0 /* can be implemented with faccess */
#define __BPX_pselect6   0 /* an equivalent interface MUST exist somewhere */
#define __BPX_ppoll      0 /* an equivalent interface MUST exist somewhere */
#define __BPX_unshare    0 /* maybe implement using shmem calls */
#define __BPX_set_robust_list 0 /* no clearly equivalent calls */
#define __BPX_get_robust_list 0 /* no clearly equivalent calls */
#define __BPX_splice     0 /* can be emulated using read+write */
#define __BPX_sync_file_range 0 /* is there an easy way to emulate */
#define __BPX_tee        0 /* can be emulated */
#define __BPX_vmsplice   0 /* difficult to emulate */
#define __BPX_move_pages 0 /* no equivalent interface exists */
#define __BPX_getcpu     0 /* no equivalent interface exists */
#define __BPX_epoll_pwait 0 /* no epoll support */
#define __BPX_utimes     0 /* maybe implementable via utime */
#define __BPX_fallocate  0 /* fallback impl for posix_fallocate */
#define __BPX_utimensat  0 /* maybe implement with fcntl */
#define __BPX_signalfd   0 /* no equivalent interface exists */
#define __BPX_timerfd    0 /* no equivalent interface exists */
#define __BPX_eventfd    0 /* no equivalent interface exists */
#define __BPX_timerfd_create  0 /* no equivalent interface exists */
#define __BPX_timerfd_settime 0 /* no equivalent interface exists */
#define __BPX_timerfd_gettime 0 /* no equivalent interface exists */
#define __BPX_signalfd4  0 /* no equivalent interface exists */
#define __BPX_eventfd2   0 /* no equivalent interface exists */
#define __BPX_inotify_init1 0 /* no inotify support */
#define __BPX_pipe2      0 /* implement with pipe+fcntl */
#define __BPX_dup3       0 /* implement with fcntl */
#define __BPX_epoll_create1 0 /* no epoll support */
#define __BPX_preadv     0 /* implement as shim over readv */
#define __BPX_pwritev    0 /* implement as shim over writev */
#define __BPX_rt_tgsigqueueinfo 0 /* no rt signal support */
#define __BPX_perf_event_open   0 /* no perf event support */
#define __BPX_fanotify_init 0 /* no fanotify support */
#define __BPX_fanotify_mark 0 /* no fanotify support */
#define __BPX_prlimit64 0 /* implement with set_thread_limits if necessary */
#define __BPX_name_to_handle_at 0 /* emulate with open() */
#define __BPX_open_by_handle_at 0 /* emulate with open() */
#define __BPX_clock_adjtime 0 /* z/OS clock support? */
#define __BPX_syncfs 0 /* z/OS mount interface? */
#define __BPX_setns  0 /* no equivalent interface */
#define __BPX_process_vm_readv   0 /* emulate with readv */
#define __BPX_process_vm_writev  0 /* emulate with writev */
#define __BPX_s390_runtime_instr 0 /* equivalent interface? */
#define __BPX_kcmp 0 /* no equivalent interface */
#define __BPX_finit_module  0 /* no equivalent interface */
#define __BPX_sched_setattr 0 /* scheduler interface? */
#define __BPX_sched_getattr 0 /* scheduler interface? */
#define __BPX_renameat2     0 /* no equivalent interface */
#define __BPX_seccomp       0 /* no equivalent interface */
#define __BPX_getrandom     0 /* z/OS RNG interface? */
#define __BPX_memfd_create  0 /* shim it if necessary */
#define __BPX_bpf 0 /* z/OS packet filtering? */
#define __BPX_s390_pci_mmio_write 0 /* z/OS mmio interface? */
#define __BPX_s390_pci_mmio_read  0 /* z/OS mmio interface? */
#define __BPX_execveat    0 /* shim it if necessary */
#define __BPX_userfaultfd 0 /* z/OS page fault handling? */
#define __BPX_membarrier  0 /* how does this work? */
#define __BPX_recvmmsg    0 /* emulate with recvmsg if necessary */
#define __BPX_sendmmsg    0 /* emulate with sendmsg if necessary */
#define __BPX_socket      0 /* emulate with other socket opts */
#define __BPX_socketpair  0 /* emulate with other socket opts */
#define __BPX_bind    __BPX_off_bind /* bind2addrsel? */
#define __BPX_connect __BPX_off_connect
#define __BPX_listen  __BPX_off_listen
#define __BPX_accept4 0 /* no equivalent interface */
#define __BPX_getsockopt __BPX_off_getsockopt /* get/setsockopt share a call */
#define __BPX_setsockopt __BPX_off_getsockopt /* get/setsockopt share a call */
#define __BPX_getsockname 0 /* z/OS socket addr */
#define __BPX_getpeername 0 /* z/OS socket addr */
#define __BPX_sendto   __BPX_off_sendto
#define __BPX_sendmsg  __BPX_off_sendmsg /* sendmsg2? */
#define __BPX_recvfrom __BPX_off_recvfrom
#define __BPX_recvmsg  __BPX_off_recvmsg /* recvmsg2? */
#define __BPX_shutdown 0 /* maybe don't implement this for now */
#define __BPX_mlock2   0 /* no equivalent memlock interface */
#define __BPX_copy_file_range 0 /* emulate with read+write */
#define __BPX_preadv2  0 /* no equivalent interface */
#define __BPX_pwritev2 0 /* no equivalent interface */
#define __BPX_s390_guarded_storage 0 /* implement from scratch */
#define __BPX_statx      0 /* partially emulate with stat */
#define __BPX_s390_sthyi 0 /* hold off on implementing for now */

#define __SYS_NR_TO_BPX_OFFSET_HELPER(nr) __SYS_NR_BPX_OFFSET_##nr
#define __SYS_NR_TO_BPX_OFFSET(nr) __SYS_NR_BPX_OFFSET_HELPER(nr)

#define __SYS_NR_BPX_OFFSET_1 __BPX_exit
#define __SYS_NR_BPX_OFFSET_2 __BPX_fork
#define __SYS_NR_BPX_OFFSET_3 __BPX_read
#define __SYS_NR_BPX_OFFSET_4 __BPX_write
#define __SYS_NR_BPX_OFFSET_5 __BPX_open
#define __SYS_NR_BPX_OFFSET_6 __BPX_close
#define __SYS_NR_BPX_OFFSET_7 __BPX_restart_syscall
#define __SYS_NR_BPX_OFFSET_8 __BPX_creat
#define __SYS_NR_BPX_OFFSET_9 __BPX_link
#define __SYS_NR_BPX_OFFSET_10 __BPX_unlink
#define __SYS_NR_BPX_OFFSET_11 __BPX_execve
#define __SYS_NR_BPX_OFFSET_12 __BPX_chdir
#define __SYS_NR_BPX_OFFSET_14 __BPX_mknod
#define __SYS_NR_BPX_OFFSET_15 __BPX_chmod
#define __SYS_NR_BPX_OFFSET_19 __BPX_lseek
#define __SYS_NR_BPX_OFFSET_20 __BPX_getpid
#define __SYS_NR_BPX_OFFSET_21 __BPX_mount
#define __SYS_NR_BPX_OFFSET_22 __BPX_umount
#define __SYS_NR_BPX_OFFSET_26 __BPX_ptrace
#define __SYS_NR_BPX_OFFSET_27 __BPX_alarm
#define __SYS_NR_BPX_OFFSET_29 __BPX_pause
#define __SYS_NR_BPX_OFFSET_30 __BPX_utime
#define __SYS_NR_BPX_OFFSET_33 __BPX_access
#define __SYS_NR_BPX_OFFSET_34 __BPX_nice
#define __SYS_NR_BPX_OFFSET_36 __BPX_sync
#define __SYS_NR_BPX_OFFSET_37 __BPX_kill
#define __SYS_NR_BPX_OFFSET_38 __BPX_rename
#define __SYS_NR_BPX_OFFSET_39 __BPX_mkdir
#define __SYS_NR_BPX_OFFSET_40 __BPX_rmdir
#define __SYS_NR_BPX_OFFSET_41 __BPX_dup
#define __SYS_NR_BPX_OFFSET_42 __BPX_pipe
#define __SYS_NR_BPX_OFFSET_43 __BPX_times
#define __SYS_NR_BPX_OFFSET_45 __BPX_brk
#define __SYS_NR_BPX_OFFSET_48 __BPX_signal
#define __SYS_NR_BPX_OFFSET_51 __BPX_acct
#define __SYS_NR_BPX_OFFSET_52 __BPX_umount2
#define __SYS_NR_BPX_OFFSET_54 __BPX_ioctl
#define __SYS_NR_BPX_OFFSET_55 __BPX_fcntl
#define __SYS_NR_BPX_OFFSET_57 __BPX_setpgid
#define __SYS_NR_BPX_OFFSET_60 __BPX_umask
#define __SYS_NR_BPX_OFFSET_61 __BPX_chroot
#define __SYS_NR_BPX_OFFSET_62 __BPX_ustat
#define __SYS_NR_BPX_OFFSET_63 __BPX_dup2
#define __SYS_NR_BPX_OFFSET_64 __BPX_getppid
#define __SYS_NR_BPX_OFFSET_65 __BPX_getpgrp
#define __SYS_NR_BPX_OFFSET_66 __BPX_setsid
#define __SYS_NR_BPX_OFFSET_67 __BPX_sigaction
#define __SYS_NR_BPX_OFFSET_72 __BPX_sigsuspend
#define __SYS_NR_BPX_OFFSET_73 __BPX_sigpending
#define __SYS_NR_BPX_OFFSET_74 __BPX_sethostname
#define __SYS_NR_BPX_OFFSET_75 __BPX_setrlimit
#define __SYS_NR_BPX_OFFSET_77 __BPX_getrusage
#define __SYS_NR_BPX_OFFSET_78 __BPX_gettimeofday
#define __SYS_NR_BPX_OFFSET_79 __BPX_settimeofday
#define __SYS_NR_BPX_OFFSET_83 __BPX_symlink
#define __SYS_NR_BPX_OFFSET_85 __BPX_readlink
#define __SYS_NR_BPX_OFFSET_86 __BPX_uselib
#define __SYS_NR_BPX_OFFSET_87 __BPX_swapon
#define __SYS_NR_BPX_OFFSET_88 __BPX_reboot
#define __SYS_NR_BPX_OFFSET_89 __BPX_readdir
#define __SYS_NR_BPX_OFFSET_90 __BPX_mmap
#define __SYS_NR_BPX_OFFSET_91 __BPX_munmap
#define __SYS_NR_BPX_OFFSET_92 __BPX_truncate
#define __SYS_NR_BPX_OFFSET_93 __BPX_ftruncate
#define __SYS_NR_BPX_OFFSET_94 __BPX_fchmod
#define __SYS_NR_BPX_OFFSET_96 __BPX_getpriority
#define __SYS_NR_BPX_OFFSET_97 __BPX_setpriority
#define __SYS_NR_BPX_OFFSET_99 __BPX_statfs
#define __SYS_NR_BPX_OFFSET_100 __BPX_fstatfs
#define __SYS_NR_BPX_OFFSET_102 __BPX_socketcall
#define __SYS_NR_BPX_OFFSET_103 __BPX_syslog
#define __SYS_NR_BPX_OFFSET_104 __BPX_setitimer
#define __SYS_NR_BPX_OFFSET_105 __BPX_getitimer
#define __SYS_NR_BPX_OFFSET_106 __BPX_stat
#define __SYS_NR_BPX_OFFSET_107 __BPX_lstat
#define __SYS_NR_BPX_OFFSET_108 __BPX_fstat
#define __SYS_NR_BPX_OFFSET_110 __BPX_lookup_dcookie
#define __SYS_NR_BPX_OFFSET_111 __BPX_vhangup
#define __SYS_NR_BPX_OFFSET_112 __BPX_idle
#define __SYS_NR_BPX_OFFSET_114 __BPX_wait4
#define __SYS_NR_BPX_OFFSET_115 __BPX_swapoff
#define __SYS_NR_BPX_OFFSET_116 __BPX_sysinfo
#define __SYS_NR_BPX_OFFSET_117 __BPX_ipc
#define __SYS_NR_BPX_OFFSET_118 __BPX_fsync
#define __SYS_NR_BPX_OFFSET_119 __BPX_sigreturn
#define __SYS_NR_BPX_OFFSET_120 __BPX_clone
#define __SYS_NR_BPX_OFFSET_121 __BPX_setdomainname
#define __SYS_NR_BPX_OFFSET_122 __BPX_uname
#define __SYS_NR_BPX_OFFSET_124 __BPX_adjtimex
#define __SYS_NR_BPX_OFFSET_125 __BPX_mprotect
#define __SYS_NR_BPX_OFFSET_126 __BPX_sigprocmask
#define __SYS_NR_BPX_OFFSET_127 __BPX_create_module
#define __SYS_NR_BPX_OFFSET_128 __BPX_init_module
#define __SYS_NR_BPX_OFFSET_129 __BPX_delete_module
#define __SYS_NR_BPX_OFFSET_130 __BPX_get_kernel_syms
#define __SYS_NR_BPX_OFFSET_131 __BPX_quotactl
#define __SYS_NR_BPX_OFFSET_132 __BPX_getpgid
#define __SYS_NR_BPX_OFFSET_133 __BPX_fchdir
#define __SYS_NR_BPX_OFFSET_134 __BPX_bdflush
#define __SYS_NR_BPX_OFFSET_135 __BPX_sysfs
#define __SYS_NR_BPX_OFFSET_136 __BPX_personality
#define __SYS_NR_BPX_OFFSET_137 __BPX_afs_syscall
#define __SYS_NR_BPX_OFFSET_141 __BPX_getdents
#define __SYS_NR_BPX_OFFSET_142 __BPX_select
#define __SYS_NR_BPX_OFFSET_143 __BPX_flock
#define __SYS_NR_BPX_OFFSET_144 __BPX_msync
#define __SYS_NR_BPX_OFFSET_145 __BPX_readv
#define __SYS_NR_BPX_OFFSET_146 __BPX_writev
#define __SYS_NR_BPX_OFFSET_147 __BPX_getsid
#define __SYS_NR_BPX_OFFSET_148 __BPX_fdatasync
#define __SYS_NR_BPX_OFFSET_149 __BPX__sysctl
#define __SYS_NR_BPX_OFFSET_150 __BPX_mlock
#define __SYS_NR_BPX_OFFSET_151 __BPX_munlock
#define __SYS_NR_BPX_OFFSET_152 __BPX_mlockall
#define __SYS_NR_BPX_OFFSET_153 __BPX_munlockall
#define __SYS_NR_BPX_OFFSET_154 __BPX_sched_setparam
#define __SYS_NR_BPX_OFFSET_155 __BPX_sched_getparam
#define __SYS_NR_BPX_OFFSET_156 __BPX_sched_setscheduler
#define __SYS_NR_BPX_OFFSET_157 __BPX_sched_getscheduler
#define __SYS_NR_BPX_OFFSET_158 __BPX_sched_yield
#define __SYS_NR_BPX_OFFSET_159 __BPX_sched_get_priority_max
#define __SYS_NR_BPX_OFFSET_160 __BPX_sched_get_priority_min
#define __SYS_NR_BPX_OFFSET_161 __BPX_sched_rr_get_interval
#define __SYS_NR_BPX_OFFSET_162 __BPX_nanosleep
#define __SYS_NR_BPX_OFFSET_163 __BPX_mremap
#define __SYS_NR_BPX_OFFSET_167 __BPX_query_module
#define __SYS_NR_BPX_OFFSET_168 __BPX_poll
#define __SYS_NR_BPX_OFFSET_169 __BPX_nfsservctl
#define __SYS_NR_BPX_OFFSET_172 __BPX_prctl
#define __SYS_NR_BPX_OFFSET_173 __BPX_rt_sigreturn
#define __SYS_NR_BPX_OFFSET_174 __BPX_rt_sigaction
#define __SYS_NR_BPX_OFFSET_175 __BPX_rt_sigprocmask
#define __SYS_NR_BPX_OFFSET_176 __BPX_rt_sigpending
#define __SYS_NR_BPX_OFFSET_177 __BPX_rt_sigtimedwait
#define __SYS_NR_BPX_OFFSET_178 __BPX_rt_sigqueueinfo
#define __SYS_NR_BPX_OFFSET_179 __BPX_rt_sigsuspend
#define __SYS_NR_BPX_OFFSET_180 __BPX_pread64
#define __SYS_NR_BPX_OFFSET_181 __BPX_pwrite64
#define __SYS_NR_BPX_OFFSET_183 __BPX_getcwd
#define __SYS_NR_BPX_OFFSET_184 __BPX_capget
#define __SYS_NR_BPX_OFFSET_185 __BPX_capset
#define __SYS_NR_BPX_OFFSET_186 __BPX_sigaltstack
#define __SYS_NR_BPX_OFFSET_187 __BPX_sendfile
#define __SYS_NR_BPX_OFFSET_188 __BPX_getpmsg
#define __SYS_NR_BPX_OFFSET_189 __BPX_putpmsg
#define __SYS_NR_BPX_OFFSET_190 __BPX_vfork
#define __SYS_NR_BPX_OFFSET_191 __BPX_getrlimit
#define __SYS_NR_BPX_OFFSET_198 __BPX_lchown
#define __SYS_NR_BPX_OFFSET_199 __BPX_getuid
#define __SYS_NR_BPX_OFFSET_200 __BPX_getgid
#define __SYS_NR_BPX_OFFSET_201 __BPX_geteuid
#define __SYS_NR_BPX_OFFSET_202 __BPX_getegid
#define __SYS_NR_BPX_OFFSET_203 __BPX_setreuid
#define __SYS_NR_BPX_OFFSET_204 __BPX_setregid
#define __SYS_NR_BPX_OFFSET_205 __BPX_getgroups
#define __SYS_NR_BPX_OFFSET_206 __BPX_setgroups
#define __SYS_NR_BPX_OFFSET_207 __BPX_fchown
#define __SYS_NR_BPX_OFFSET_208 __BPX_setresuid
#define __SYS_NR_BPX_OFFSET_209 __BPX_getresuid
#define __SYS_NR_BPX_OFFSET_210 __BPX_setresgid
#define __SYS_NR_BPX_OFFSET_211 __BPX_getresgid
#define __SYS_NR_BPX_OFFSET_212 __BPX_chown
#define __SYS_NR_BPX_OFFSET_213 __BPX_setuid
#define __SYS_NR_BPX_OFFSET_214 __BPX_setgid
#define __SYS_NR_BPX_OFFSET_215 __BPX_setfsuid
#define __SYS_NR_BPX_OFFSET_216 __BPX_setfsgid
#define __SYS_NR_BPX_OFFSET_217 __BPX_pivot_root
#define __SYS_NR_BPX_OFFSET_218 __BPX_mincore
#define __SYS_NR_BPX_OFFSET_219 __BPX_madvise
#define __SYS_NR_BPX_OFFSET_220 __BPX_getdents64
#define __SYS_NR_BPX_OFFSET_222 __BPX_readahead
#define __SYS_NR_BPX_OFFSET_224 __BPX_setxattr
#define __SYS_NR_BPX_OFFSET_225 __BPX_lsetxattr
#define __SYS_NR_BPX_OFFSET_226 __BPX_fsetxattr
#define __SYS_NR_BPX_OFFSET_227 __BPX_getxattr
#define __SYS_NR_BPX_OFFSET_228 __BPX_lgetxattr
#define __SYS_NR_BPX_OFFSET_229 __BPX_fgetxattr
#define __SYS_NR_BPX_OFFSET_230 __BPX_listxattr
#define __SYS_NR_BPX_OFFSET_231 __BPX_llistxattr
#define __SYS_NR_BPX_OFFSET_232 __BPX_flistxattr
#define __SYS_NR_BPX_OFFSET_233 __BPX_removexattr
#define __SYS_NR_BPX_OFFSET_234 __BPX_lremovexattr
#define __SYS_NR_BPX_OFFSET_235 __BPX_fremovexattr
#define __SYS_NR_BPX_OFFSET_236 __BPX_gettid
#define __SYS_NR_BPX_OFFSET_237 __BPX_tkill
#define __SYS_NR_BPX_OFFSET_238 __BPX_futex
#define __SYS_NR_BPX_OFFSET_239 __BPX_sched_setaffinity
#define __SYS_NR_BPX_OFFSET_240 __BPX_sched_getaffinity
#define __SYS_NR_BPX_OFFSET_241 __BPX_tgkill
#define __SYS_NR_BPX_OFFSET_243 __BPX_io_setup
#define __SYS_NR_BPX_OFFSET_244 __BPX_io_destroy
#define __SYS_NR_BPX_OFFSET_245 __BPX_io_getevents
#define __SYS_NR_BPX_OFFSET_246 __BPX_io_submit
#define __SYS_NR_BPX_OFFSET_247 __BPX_io_cancel
#define __SYS_NR_BPX_OFFSET_248 __BPX_exit_group
#define __SYS_NR_BPX_OFFSET_249 __BPX_epoll_create
#define __SYS_NR_BPX_OFFSET_250 __BPX_epoll_ctl
#define __SYS_NR_BPX_OFFSET_251 __BPX_epoll_wait
#define __SYS_NR_BPX_OFFSET_252 __BPX_set_tid_address
#define __SYS_NR_BPX_OFFSET_253 __BPX_fadvise64
#define __SYS_NR_BPX_OFFSET_254 __BPX_timer_create
#define __SYS_NR_BPX_OFFSET_255 __BPX_timer_settime
#define __SYS_NR_BPX_OFFSET_256 __BPX_timer_gettime
#define __SYS_NR_BPX_OFFSET_257 __BPX_timer_getoverrun
#define __SYS_NR_BPX_OFFSET_258 __BPX_timer_delete
#define __SYS_NR_BPX_OFFSET_259 __BPX_clock_settime
#define __SYS_NR_BPX_OFFSET_260 __BPX_clock_gettime
#define __SYS_NR_BPX_OFFSET_261 __BPX_clock_getres
#define __SYS_NR_BPX_OFFSET_262 __BPX_clock_nanosleep
#define __SYS_NR_BPX_OFFSET_265 __BPX_statfs64
#define __SYS_NR_BPX_OFFSET_266 __BPX_fstatfs64
#define __SYS_NR_BPX_OFFSET_267 __BPX_remap_file_pages
#define __SYS_NR_BPX_OFFSET_268 __BPX_mbind
#define __SYS_NR_BPX_OFFSET_269 __BPX_get_mempolicy
#define __SYS_NR_BPX_OFFSET_270 __BPX_set_mempolicy
#define __SYS_NR_BPX_OFFSET_271 __BPX_mq_open
#define __SYS_NR_BPX_OFFSET_272 __BPX_mq_unlink
#define __SYS_NR_BPX_OFFSET_273 __BPX_mq_timedsend
#define __SYS_NR_BPX_OFFSET_274 __BPX_mq_timedreceive
#define __SYS_NR_BPX_OFFSET_275 __BPX_mq_notify
#define __SYS_NR_BPX_OFFSET_276 __BPX_mq_getsetattr
#define __SYS_NR_BPX_OFFSET_277 __BPX_kexec_load
#define __SYS_NR_BPX_OFFSET_278 __BPX_add_key
#define __SYS_NR_BPX_OFFSET_279 __BPX_request_key
#define __SYS_NR_BPX_OFFSET_280 __BPX_keyctl
#define __SYS_NR_BPX_OFFSET_281 __BPX_waitid
#define __SYS_NR_BPX_OFFSET_282 __BPX_ioprio_set
#define __SYS_NR_BPX_OFFSET_283 __BPX_ioprio_get
#define __SYS_NR_BPX_OFFSET_284 __BPX_inotify_init
#define __SYS_NR_BPX_OFFSET_285 __BPX_inotify_add_watch
#define __SYS_NR_BPX_OFFSET_286 __BPX_inotify_rm_watch
#define __SYS_NR_BPX_OFFSET_287 __BPX_migrate_pages
#define __SYS_NR_BPX_OFFSET_288 __BPX_openat
#define __SYS_NR_BPX_OFFSET_289 __BPX_mkdirat
#define __SYS_NR_BPX_OFFSET_290 __BPX_mknodat
#define __SYS_NR_BPX_OFFSET_291 __BPX_fchownat
#define __SYS_NR_BPX_OFFSET_292 __BPX_futimesat
#define __SYS_NR_BPX_OFFSET_293 __BPX_newfstatat
#define __SYS_NR_BPX_OFFSET_294 __BPX_unlinkat
#define __SYS_NR_BPX_OFFSET_295 __BPX_renameat
#define __SYS_NR_BPX_OFFSET_296 __BPX_linkat
#define __SYS_NR_BPX_OFFSET_297 __BPX_symlinkat
#define __SYS_NR_BPX_OFFSET_298 __BPX_readlinkat
#define __SYS_NR_BPX_OFFSET_299 __BPX_fchmodat
#define __SYS_NR_BPX_OFFSET_300 __BPX_faccessat
#define __SYS_NR_BPX_OFFSET_301 __BPX_pselect6
#define __SYS_NR_BPX_OFFSET_302 __BPX_ppoll
#define __SYS_NR_BPX_OFFSET_303 __BPX_unshare
#define __SYS_NR_BPX_OFFSET_304 __BPX_set_robust_list
#define __SYS_NR_BPX_OFFSET_305 __BPX_get_robust_list
#define __SYS_NR_BPX_OFFSET_306 __BPX_splice
#define __SYS_NR_BPX_OFFSET_307 __BPX_sync_file_range
#define __SYS_NR_BPX_OFFSET_308 __BPX_tee
#define __SYS_NR_BPX_OFFSET_309 __BPX_vmsplice
#define __SYS_NR_BPX_OFFSET_310 __BPX_move_pages
#define __SYS_NR_BPX_OFFSET_311 __BPX_getcpu
#define __SYS_NR_BPX_OFFSET_312 __BPX_epoll_pwait
#define __SYS_NR_BPX_OFFSET_313 __BPX_utimes
#define __SYS_NR_BPX_OFFSET_314 __BPX_fallocate
#define __SYS_NR_BPX_OFFSET_315 __BPX_utimensat
#define __SYS_NR_BPX_OFFSET_316 __BPX_signalfd
#define __SYS_NR_BPX_OFFSET_317 __BPX_timerfd
#define __SYS_NR_BPX_OFFSET_318 __BPX_eventfd
#define __SYS_NR_BPX_OFFSET_319 __BPX_timerfd_create
#define __SYS_NR_BPX_OFFSET_320 __BPX_timerfd_settime
#define __SYS_NR_BPX_OFFSET_321 __BPX_timerfd_gettime
#define __SYS_NR_BPX_OFFSET_322 __BPX_signalfd4
#define __SYS_NR_BPX_OFFSET_323 __BPX_eventfd2
#define __SYS_NR_BPX_OFFSET_324 __BPX_inotify_init1
#define __SYS_NR_BPX_OFFSET_325 __BPX_pipe2
#define __SYS_NR_BPX_OFFSET_326 __BPX_dup3
#define __SYS_NR_BPX_OFFSET_327 __BPX_epoll_create1
#define __SYS_NR_BPX_OFFSET_328 __BPX_preadv
#define __SYS_NR_BPX_OFFSET_329 __BPX_pwritev
#define __SYS_NR_BPX_OFFSET_330 __BPX_rt_tgsigqueueinfo
#define __SYS_NR_BPX_OFFSET_331 __BPX_perf_event_open
#define __SYS_NR_BPX_OFFSET_332 __BPX_fanotify_init
#define __SYS_NR_BPX_OFFSET_333 __BPX_fanotify_mark
#define __SYS_NR_BPX_OFFSET_334 __BPX_prlimit64
#define __SYS_NR_BPX_OFFSET_335 __BPX_name_to_handle_at
#define __SYS_NR_BPX_OFFSET_336 __BPX_open_by_handle_at
#define __SYS_NR_BPX_OFFSET_337 __BPX_clock_adjtime
#define __SYS_NR_BPX_OFFSET_338 __BPX_syncfs
#define __SYS_NR_BPX_OFFSET_339 __BPX_setns
#define __SYS_NR_BPX_OFFSET_340 __BPX_process_vm_readv
#define __SYS_NR_BPX_OFFSET_341 __BPX_process_vm_writev
#define __SYS_NR_BPX_OFFSET_342 __BPX_s390_runtime_instr
#define __SYS_NR_BPX_OFFSET_343 __BPX_kcmp
#define __SYS_NR_BPX_OFFSET_344 __BPX_finit_module
#define __SYS_NR_BPX_OFFSET_345 __BPX_sched_setattr
#define __SYS_NR_BPX_OFFSET_346 __BPX_sched_getattr
#define __SYS_NR_BPX_OFFSET_347 __BPX_renameat2
#define __SYS_NR_BPX_OFFSET_348 __BPX_seccomp
#define __SYS_NR_BPX_OFFSET_349 __BPX_getrandom
#define __SYS_NR_BPX_OFFSET_350 __BPX_memfd_create
#define __SYS_NR_BPX_OFFSET_351 __BPX_bpf
#define __SYS_NR_BPX_OFFSET_352 __BPX_s390_pci_mmio_write
#define __SYS_NR_BPX_OFFSET_353 __BPX_s390_pci_mmio_read
#define __SYS_NR_BPX_OFFSET_354 __BPX_execveat
#define __SYS_NR_BPX_OFFSET_355 __BPX_userfaultfd
#define __SYS_NR_BPX_OFFSET_356 __BPX_membarrier
#define __SYS_NR_BPX_OFFSET_357 __BPX_recvmmsg
#define __SYS_NR_BPX_OFFSET_358 __BPX_sendmmsg
#define __SYS_NR_BPX_OFFSET_359 __BPX_socket
#define __SYS_NR_BPX_OFFSET_360 __BPX_socketpair
#define __SYS_NR_BPX_OFFSET_361 __BPX_bind
#define __SYS_NR_BPX_OFFSET_362 __BPX_connect
#define __SYS_NR_BPX_OFFSET_363 __BPX_listen
#define __SYS_NR_BPX_OFFSET_364 __BPX_accept4
#define __SYS_NR_BPX_OFFSET_365 __BPX_getsockopt
#define __SYS_NR_BPX_OFFSET_366 __BPX_setsockopt
#define __SYS_NR_BPX_OFFSET_367 __BPX_getsockname
#define __SYS_NR_BPX_OFFSET_368 __BPX_getpeername
#define __SYS_NR_BPX_OFFSET_369 __BPX_sendto
#define __SYS_NR_BPX_OFFSET_370 __BPX_sendmsg
#define __SYS_NR_BPX_OFFSET_371 __BPX_recvfrom
#define __SYS_NR_BPX_OFFSET_372 __BPX_recvmsg
#define __SYS_NR_BPX_OFFSET_373 __BPX_shutdown
#define __SYS_NR_BPX_OFFSET_374 __BPX_mlock2
#define __SYS_NR_BPX_OFFSET_375 __BPX_copy_file_range
#define __SYS_NR_BPX_OFFSET_376 __BPX_preadv2
#define __SYS_NR_BPX_OFFSET_377 __BPX_pwritev2
#define __SYS_NR_BPX_OFFSET_378 __BPX_s390_guarded_storage
#define __SYS_NR_BPX_OFFSET_379 __BPX_statx
#define __SYS_NR_BPX_OFFSET_380 __BPX_s390_sthyi

/* we use a signed long long return type for all */
#define __ZOS_COMPAT_CHOKE_COMPILER_UNIMPLEMENTED ({_Static_assert(0, "not yet implemented");})
#define __ZOS_COMPAT_STUB_UNIMPLEMENTED do { } while (0)
#define __ZOS_COMPAT_UNIMPLEMENTED __ZOS_COMPAT_STUB_UNIMPLEMENTED

#define __sys_proto_exit(decl_name) void decl_name (int status)
#define __sys_proto_fork(decl_name) pid_t decl_name (void)
#define __sys_proto_read(decl_name) ssize_t decl_name (int fd, void *buf, size_t count)
#define __sys_proto_write(decl_name) ssize_t decl_name (int fd, const void *buf, size_t count)
#define __sys_proto_open(decl_name) int decl_name (const char *pathname, int flags, mode_t mode)
#define __sys_proto_close(decl_name) int decl_name (int fd)
#define __sys_proto_restart_syscall(decl_name) int decl_name (void)
#define __sys_proto_creat(decl_name) int decl_name (const char *pathname, mode_t mode)
#define __sys_proto_link(decl_name) int decl_name (const char *oldpath, const char *newpath)
#define __sys_proto_unlink(decl_name) int decl_name (const char *pathname)
#define __sys_proto_execve(decl_name) int decl_name (const char *filename, char *const argv[], char *const envp[])
#define __sys_proto_chdir(decl_name) int decl_name (const char *path)
#define __sys_proto_mknod(decl_name) int decl_name (const char *pathname, mode_t mode, dev_t dev)
#define __sys_proto_chmod(decl_name) int decl_name (const char *pathname, mode_t mode)
#define __sys_proto_lseek(decl_name) off_t decl_name (int fd, off_t offset, int whence)
#define __sys_proto_getpid(decl_name) pid_t decl_name (void)
#define __sys_proto_mount(decl_name) int decl_name (const char *source, const char *target, const char *filesystemtype, unsigned long mountflags, const void *data)
#define __sys_proto_umount(decl_name) int decl_name (const char *target)
#define __sys_proto_ptrace(decl_name) long decl_name (enum __ptrace_request request, pid_t pid, void *addr, void *data)
#define __sys_proto_alarm(decl_name) unsigned int decl_name (unsigned int seconds)
#define __sys_proto_pause(decl_name) int decl_name (void)
#define __sys_proto_utime(decl_name) int decl_name (const char *filename, const struct utimbuf *times)
#define __sys_proto_access(decl_name) int decl_name (const char *pathname, int mode)
#define __sys_proto_nice(decl_name) int decl_name (int inc)
#define __sys_proto_sync(decl_name) void decl_name (void)
#define __sys_proto_kill(decl_name) int decl_name (pid_t pid, int sig)
#define __sys_proto_rename(decl_name) int decl_name (const char *oldpath, const char *newpath)
#define __sys_proto_mkdir(decl_name) int decl_name (const char *pathname, mode_t mode)
#define __sys_proto_rmdir(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_dup(decl_name) int decl_name (int oldfd)
#define __sys_proto_pipe(decl_name) int decl_name (int pipefd[2])
#define __sys_proto_times(decl_name) clock_t decl_name (struct tms *buf)
#define __sys_proto_brk(decl_name) int decl_name (void *addr)
#define __sys_proto_signal(decl_name) void (*decl_name(int, void (*)(int)))(int)
#define __sys_proto_acct(decl_name) int decl_name (const char *filename)
#define __sys_proto_umount2(decl_name) int decl_name (const char *target, int flags)
#define __sys_proto_ioctl(decl_name) int decl_name (int fd, unsigned long request, ...)
#define __sys_proto_fcntl(decl_name) int decl_name (int fd, int cmd, ... /* arg */ )
#define __sys_proto_setpgid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_umask(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_chroot(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_ustat(decl_name) int decl_name (dev_t dev, struct ustat *ubuf)
#define __sys_proto_dup2(decl_name) int decl_name (int oldfd, int newfd)
#define __sys_proto_getppid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getpgrp(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setsid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sigaction(decl_name) int decl_name (int signum, const struct sigaction *act, struct sigaction *oldact)
#define __sys_proto_sigsuspend(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sigpending(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sethostname(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setrlimit(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getrusage(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_gettimeofday(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_settimeofday(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_symlink(decl_name) int decl_name (const char *target, const char *linkpath)
#define __sys_proto_readlink(decl_name) ssize_t decl_name (const char *pathname, char *buf, size_t bufsiz)
#define __sys_proto_uselib(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_swapon(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_reboot(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_readdir(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mmap(decl_name) void *decl_name (void *addr, size_t length, int prot, int flags, int fd, off_t offset)
#define __sys_proto_munmap(decl_name) int decl_name (void *addr, size_t length)
#define __sys_proto_truncate(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_ftruncate(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fchmod(decl_name) int decl_name (int fd, mode_t mode)
#define __sys_proto_getpriority(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setpriority(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_statfs(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fstatfs(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_socketcall(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_syslog(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setitimer(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getitimer(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_stat(decl_name) int decl_name (const char *pathname, struct stat *statbuf)
#define __sys_proto_lstat(decl_name) int decl_name (const char *pathname, struct stat *statbuf)
#define __sys_proto_fstat(decl_name) int decl_name (int fd, struct stat *statbuf)
#define __sys_proto_lookup_dcookie(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_vhangup(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_idle(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_wait4(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_swapoff(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sysinfo(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_ipc(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fsync(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sigreturn(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_clone(decl_name) long decl_name (void *child_stack, unsigned long flags, int *ptid, int *ctid, unsigned long newtls)
#define __sys_proto_setdomainname(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_uname(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_adjtimex(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mprotect(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sigprocmask(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_create_module(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_init_module(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_delete_module(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_get_kernel_syms(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_quotactl(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getpgid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fchdir(decl_name) int decl_name (int fd)
#define __sys_proto_bdflush(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sysfs(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_personality(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_afs_syscall(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getdents(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_select(decl_name) int decl_name (int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout)
#define __sys_proto_flock(decl_name) int decl_name (int fd, int operation)
#define __sys_proto_msync(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_readv(decl_name) ssize_t decl_name (int fd, const struct iovec *iov, int iovcnt)
#define __sys_proto_writev(decl_name) ssize_t decl_name (int fd, const struct iovec *iov, int iovcnt)
#define __sys_proto_getsid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fdatasync(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto__sysctl(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mlock(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_munlock(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mlockall(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_munlockall(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_setparam(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_getparam(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_setscheduler(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_getscheduler(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_yield(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_get_priority_max(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_get_priority_min(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_rr_get_interval(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_nanosleep(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mremap(decl_name) void *decl_name (void *old_address, size_t old_size, size_t new_size, int flags, ... /* void *new_address */)
#define __sys_proto_query_module(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_poll(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_nfsservctl(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_prctl(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_rt_sigreturn(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_rt_sigaction(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_rt_sigprocmask(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_rt_sigpending(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_rt_sigtimedwait(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_rt_sigqueueinfo(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_rt_sigsuspend(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_pread64(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_pwrite64(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getcwd(decl_name) char *decl_name (char *buf, size_t size)
#define __sys_proto_capget(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_capset(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sigaltstack(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sendfile(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getpmsg(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_putpmsg(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_vfork(decl_name) pid_t decl_name (void)
#define __sys_proto_getrlimit(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_lchown(decl_name) int decl_name (const char *pathname, uid_t owner, gid_t group)
#define __sys_proto_getuid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getgid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_geteuid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getegid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setreuid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setregid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getgroups(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setgroups(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fchown(decl_name) int decl_name (int fd, uid_t owner, gid_t group)
#define __sys_proto_setresuid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getresuid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setresgid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getresgid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_chown(decl_name) int decl_name (const char *pathname, uid_t owner, gid_t group)
#define __sys_proto_setuid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setgid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setfsuid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setfsgid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_pivot_root(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mincore(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_madvise(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getdents64(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_readahead(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_lsetxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fsetxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_lgetxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fgetxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_listxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_llistxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_flistxattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_removexattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_lremovexattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fremovexattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_gettid(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_tkill(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_futex(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_setaffinity(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_getaffinity(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_tgkill(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_io_setup(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_io_destroy(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_io_getevents(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_io_submit(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_io_cancel(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_exit_group(decl_name) void decl_name (int status)
#define __sys_proto_epoll_create(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_epoll_ctl(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_epoll_wait(decl_name) int decl_name (int epfd, struct epoll_event *events, int maxevents, int timeout)
#define __sys_proto_set_tid_address(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fadvise64(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timer_create(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timer_settime(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timer_gettime(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timer_getoverrun(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timer_delete(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_clock_settime(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_clock_gettime(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_clock_getres(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_clock_nanosleep(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_statfs64(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fstatfs64(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_remap_file_pages(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mbind(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_get_mempolicy(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_set_mempolicy(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mq_open(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mq_unlink(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mq_timedsend(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mq_timedreceive(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mq_notify(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mq_getsetattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_kexec_load(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_add_key(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_request_key(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_keyctl(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_waitid(decl_name) int decl_name (idtype_t idtype, id_t id, siginfo_t *infop, int options, struct rusage *usageinfo)
#define __sys_proto_ioprio_set(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_ioprio_get(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_inotify_init(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_inotify_add_watch(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_inotify_rm_watch(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_migrate_pages(decl_name) long decl_name (int pid, unsigned long maxnode, const unsigned long *old_nodes, const unsigned long *new_nodes)
#define __sys_proto_openat(decl_name) int decl_name  (int dirfd, const char *pathname, int flags, mode_t mode)
#define __sys_proto_mkdirat(decl_name) int decl_name (int dirfd, const char *pathname, mode_t mode)
#define __sys_proto_mknodat(decl_name) int decl_name (int dirfd, const char *pathname, mode_t mode, dev_t dev)
#define __sys_proto_fchownat(decl_name) int decl_name (int dirfd, const char *pathname, uid_t owner, gid_t group, int flags)
#define __sys_proto_futimesat(decl_name) int decl_name (int dirfd, const char *pathname, const struct timeval times[2])
#define __sys_proto_newfstatat(decl_name) int decl_name (int dirfd, const char *pathname, struct stat *statbuf, int flags)
#define __sys_proto_unlinkat(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_renameat(decl_name) int decl_name (int olddirfd, const char *oldpath, int newdirfd, const char *newpath)
#define __sys_proto_linkat(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_symlinkat(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_readlinkat(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fchmodat(decl_name) int decl_name (int dirfd, const char *pathname, mode_t mode, int flags)
#define __sys_proto_faccessat(decl_name) int decl_name (int dirfd, const char *pathname, int mode, int flags)
#define __sys_proto_pselect6(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_ppoll(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_unshare(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_set_robust_list(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_get_robust_list(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_splice(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sync_file_range(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_tee(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_vmsplice(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_move_pages(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getcpu(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_epoll_pwait(decl_name) int decl_name (int epfd, struct epoll_event *events, int maxevents, int timeout, const sigset_t *sigmask)
#define __sys_proto_utimes(decl_name) int decl_name (const char *filename, const struct timeval times[2])
#define __sys_proto_fallocate(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_utimensat(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_signalfd(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timerfd(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_eventfd(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timerfd_create(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timerfd_settime(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_timerfd_gettime(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_signalfd4(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_eventfd2(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_inotify_init1(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_pipe2(decl_name) int decl_name (int pipefd[2], int flags)
#define __sys_proto_dup3(decl_name) int decl_name (int oldfd, int newfd, int flags)
#define __sys_proto_epoll_create1(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_preadv(decl_name) ssize_t decl_name (int fd, const struct iovec *iov, int iovcnt, off_t offset)
#define __sys_proto_pwritev(decl_name) ssize_t decl_name (int fd, const struct iovec *iov, int iovcnt, off_t offset)
#define __sys_proto_rt_tgsigqueueinfo(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_perf_event_open(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fanotify_init(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_fanotify_mark(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_prlimit64(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_name_to_handle_at(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_open_by_handle_at(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_clock_adjtime(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_syncfs(decl_name) int decl_name (int fd)
#define __sys_proto_setns(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_process_vm_readv(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_process_vm_writev(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_s390_runtime_instr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_kcmp(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_finit_module(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_setattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sched_getattr(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_renameat2(decl_name) int decl_name (int olddirfd, const char *oldpath, int newdirfd, const char *newpath, unsigned int flags)
#define __sys_proto_seccomp(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getrandom(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_memfd_create(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_bpf(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_s390_pci_mmio_write(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_s390_pci_mmio_read(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_execveat(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_userfaultfd(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_membarrier(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_recvmmsg(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sendmmsg(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_socket(decl_name) int decl_name (int domain, int type, int protocol)
#define __sys_proto_socketpair(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_bind(decl_name) int decl_name (int sockfd, const struct sockaddr *addr, socklen_t addrlen)
#define __sys_proto_connect(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_listen(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_accept4(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getsockopt(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_setsockopt(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getsockname(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_getpeername(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sendto(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_sendmsg(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_recvfrom(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_recvmsg(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_shutdown(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_mlock2(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_copy_file_range(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_preadv2(decl_name) ssize_t decl_name (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags)
#define __sys_proto_pwritev2(decl_name) ssize_t decl_name (int fd, const struct iovec *iov, int iovcnt, off_t offset, int flags)
#define __sys_proto_s390_guarded_storage(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_statx(decl_name) __GLIBC_ZOS_UNIMPLEMENTED
#define __sys_proto_s390_sthyi(decl_name) __GLIBC_ZOS_UNIMPLEMENTED

#endif /* _ASM_ZOS_BPX_OFFSETS_H */