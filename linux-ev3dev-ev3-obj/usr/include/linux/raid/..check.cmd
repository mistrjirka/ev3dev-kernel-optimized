cmd_usr/include/linux/raid/.check := for f in md_u.h md_p.h ; do echo "./usr/include/linux/raid/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/linux/raid/.check