cmd_usr/include/linux/netfilter_ipv4/.check := for f in ipt_CLUSTERIP.h ipt_ttl.h ipt_ECN.h ip_tables.h ipt_LOG.h ipt_REJECT.h ipt_ecn.h ipt_ah.h ipt_TTL.h ; do echo "./usr/include/linux/netfilter_ipv4/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/linux/netfilter_ipv4/.check
