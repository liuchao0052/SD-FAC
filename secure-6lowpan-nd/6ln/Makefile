CONTIKI_PROJECT = ln2
APPS+=powertrace
all: $(CONTIKI_PROJECT)

CONTIKI = 6lowpan-nd-contiki

CFLAGS += -DPROJECT_CONF_H=\"project-conf.h\"

#LC add
CONTIKI_WITH_IPV6 = 1
CONTIKI_WITH_RPL = 0

#UIP_ND6_SEND_NA = 1
#UIP_ND6_SEND_NS = 1
#UIP_ND6_SEND_RA = 1
#LC add end

include $(CONTIKI)/Makefile.include
