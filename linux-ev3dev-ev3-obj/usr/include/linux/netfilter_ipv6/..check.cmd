cmd_usr/include/linux/netfilter_ipv6/.check := for f in ip6t_NPT.h ip6t_HL.h ip6t_ah.h ip6t_frag.h ip6t_mh.h ip6_tables.h ip6t_rt.h ip6t_LOG.h ip6t_hl.h ip6t_opts.h ip6t_ipv6header.h ip6t_REJECT.h ; do echo "./usr/include/linux/netfilter_ipv6/$${f}"; done | xargs perl /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/headers_check.pl ./usr/include arm; touch usr/include/linux/netfilter_ipv6/.check