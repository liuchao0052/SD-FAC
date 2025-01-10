/*
 * Copyright (c) 2015, Swedish Institute of Computer Science.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_

#ifndef NETSTACK_CONF_WITH_IPV6
#define NETSTACK_CONF_WITH_IPV6  	1
#endif

#define UIP_ND6_BORDER_ROUTER    	1
#define UIP_CONF_ROUTER         	1
#define UIP_CONF_MCH	         	1
#define UIP_CONF_ND6_SEND_RA		1
#define UIP_CONF_ND6_SEND_NS		0

/*configure enable 6LoWPAN-ND*/
//#define UIP_CONF_IPv6_LOWPAN_ND  		1
#define UIP_CONF_ND6_RA_6CO				1
#define UIP_CONF_ND6_RA_ABRO			1

#define UIP_CONF_ND6_NS_NONCE			1
#define UIP_CONF_ND6_NS_AUTH		1

//#define IEEE_802154_MAC_ADDRESS {9, 9, 9, 9, 9, 9, 9, 9}
//#define IEEE_802154_MAC_ADDRESS {8, 8, 8, 8, 8, 8, 8, 8}


#define AUTH_NODE_NUM 		7

#define AUTH_MAC_LIST { {0x00,0x12,0x74,0x02,0x00,0x02,0x02,0x02}, \
				        {0x00,0x12,0x74,0x03,0x00,0x03,0x03,0x03}, \
						{0x00,0x12,0x74,0x04,0x00,0x04,0x04,0x04}, \
						{0x00,0x12,0x74,0x05,0x00,0x05,0x05,0x05}, \
						{0x00,0x12,0x74,0x06,0x00,0x06,0x06,0x06}, \
						{0x00,0x12,0x74,0x07,0x00,0x07,0x07,0x07}, \
						{0x00,0x12,0x74,0x08,0x00,0x08,0x08,0x08}}

#define AUTH_KEY_LIST { {0x01,0x11,0xAE,0xCC,0xD1,0xB2,0x02,0x02,0x00,0xA2,0xBB,0x87,0x9D,0xE2,0x02,0x02}, \
				        {0x02,0x22,0xDF,0x02,0x00,0xC3,0x19,0x2A,0x12,0xB3,0xCC,0x42,0xAE,0xFE,0xF2,0x03}, \
						{0x03,0x33,0xDF,0x02,0x00,0xC3,0x19,0x2A,0x12,0xB3,0xCC,0x42,0xAE,0xFE,0xF2,0x03}, \
						{0x04,0x44,0xDF,0x02,0x00,0xC3,0x19,0x2A,0x12,0xB3,0xCC,0x42,0xAE,0xFE,0xF2,0x03}, \
						{0x05,0x55,0xDF,0x02,0x00,0xC3,0x19,0x2A,0x12,0xB3,0xCC,0x42,0xAE,0xFE,0xF2,0x03}, \
						{0x06,0x66,0xDF,0x02,0x00,0xC3,0x19,0x2A,0x12,0xB3,0xCC,0x42,0xAE,0xFE,0xF2,0x03}, \
						{0x07,0x77,0xDF,0x02,0x00,0xC3,0x19,0x2A,0x12,0xB3,0xCC,0x42,0xAE,0xFE,0xF2,0x03}}


//#ifndef UIP_CONF_IPv6_LOWPAN_ND
//#define UIP_CONF_IPv6_LOWPAN_ND  1
//#endif

//
//#ifndef WITH_NON_STORING
//#define WITH_NON_STORING 0 /* Set this to run with non-storing mode */
//#endif /* WITH_NON_STORING */
//
//#undef NBR_TABLE_CONF_MAX_NEIGHBORS
//#undef UIP_CONF_MAX_ROUTES
//
//#ifdef TEST_MORE_ROUTES
///* configure number of neighbors and routes */
//#define NBR_TABLE_CONF_MAX_NEIGHBORS     10
//#define UIP_CONF_MAX_ROUTES   30
//#else
///* configure number of neighbors and routes */
//#define NBR_TABLE_CONF_MAX_NEIGHBORS     10
//#define UIP_CONF_MAX_ROUTES   10
//#endif /* TEST_MORE_ROUTES */
//
//#undef NETSTACK_CONF_RDC
//#define NETSTACK_CONF_RDC     nullrdc_driver
//#undef NULLRDC_CONF_802154_AUTOACK
//#define NULLRDC_CONF_802154_AUTOACK       1
//
///* Define as minutes */
//#define RPL_CONF_DEFAULT_LIFETIME_UNIT   60
//
///* 10 minutes lifetime of routes */
//#define RPL_CONF_DEFAULT_LIFETIME        10
//
//#define RPL_CONF_DEFAULT_ROUTE_INFINITE_LIFETIME 1
//
//#if WITH_NON_STORING
//#undef RPL_NS_CONF_LINK_NUM
//#define RPL_NS_CONF_LINK_NUM 40 /* Number of links maintained at the root. Can be set to 0 at non-root nodes. */
//#undef UIP_CONF_MAX_ROUTES
//#define UIP_CONF_MAX_ROUTES 0 /* No need for routes */
//#undef RPL_CONF_MOP
//#define RPL_CONF_MOP RPL_MOP_NON_STORING /* Mode of operation*/
//#endif /* WITH_NON_STORING */
//
#endif