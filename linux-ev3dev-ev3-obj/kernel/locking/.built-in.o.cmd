cmd_kernel/locking/built-in.o :=  rm -f kernel/locking/built-in.o; /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-ar rcSTPD kernel/locking/built-in.o kernel/locking/mutex.o kernel/locking/semaphore.o kernel/locking/rwsem.o kernel/locking/percpu-rwsem.o kernel/locking/rtmutex.o kernel/locking/rwsem-xadd.o 
