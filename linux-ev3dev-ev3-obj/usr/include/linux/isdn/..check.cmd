cmd_usr/include/linux/isdn/.check := for f in capicmd.h ; do echo "./usr/include/linux/isdn/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/linux/isdn/.check