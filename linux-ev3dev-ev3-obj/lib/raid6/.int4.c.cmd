cmd_lib/raid6/int4.c := awk -f/home/jirka/programming/python/kernel4python3/ev3-kernel/lib/raid6/unroll.awk -vN=4 < /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/raid6/int.uc > lib/raid6/int4.c || ( rm -f lib/raid6/int4.c && exit 1 )