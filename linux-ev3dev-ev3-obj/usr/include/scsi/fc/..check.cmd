cmd_usr/include/scsi/fc/.check := for f in fc_els.h fc_gs.h fc_ns.h fc_fs.h ; do echo "./usr/include/scsi/fc/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/scsi/fc/.check
