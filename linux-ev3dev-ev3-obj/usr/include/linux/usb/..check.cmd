cmd_usr/include/linux/usb/.check := for f in g_printer.h functionfs.h ch9.h audio.h tmc.h video.h cdc.h charger.h cdc-wdm.h gadgetfs.h ch11.h midi.h ; do echo "./usr/include/linux/usb/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/linux/usb/.check
