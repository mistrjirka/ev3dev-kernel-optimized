cmd_usr/include/asm-generic/.check := for f in sembuf.h fcntl.h termios.h posix_types.h auxvec.h signal.h msgbuf.h siginfo.h socket.h termbits.h ipcbuf.h swab.h sockios.h resource.h int-ll64.h ioctls.h kvm_para.h errno.h mman.h statfs.h ucontext.h param.h poll.h mman-common.h int-l64.h errno-base.h unistd.h bitsperlong.h shmparam.h shmbuf.h stat.h ioctl.h setup.h types.h hugetlb_encode.h signal-defs.h ; do echo "./usr/include/asm-generic/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/asm-generic/.check
