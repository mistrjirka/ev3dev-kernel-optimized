cmd_usr/include/mtd/.check := for f in ubi-user.h nftl-user.h mtd-abi.h mtd-user.h inftl-user.h ; do echo "./usr/include/mtd/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/mtd/.check
