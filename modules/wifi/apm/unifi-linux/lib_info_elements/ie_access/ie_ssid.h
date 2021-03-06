/* This is an autogenerated file */
/* Tag: noCheckHeader */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2009. All rights reserved. */
/* */
/*   Refer to LICENSE.txt included with this source for details on the */
/*   license terms. */

#ifndef IE_SSID_H
#define IE_SSID_H

#ifdef __cplusplus
extern "C" {
#endif

/* STANDARD INCLUDES *********************************************************/
#include "ie_utils/ie_utils.h"

/* COMPLEX TYPES DEFINITIONS *************************************************/
typedef struct ie_ssid
{
    CsrUint8  id;
    CsrUint8  length;
    CsrUint8  *ssid;
}ie_ssid;


/* PUBLIC FUNCTION PROTOTYPES ************************************************/
#define ie_get_ssid(elements,length, ssid) ie_find(IE_ID_SSID, elements, length, (CsrUint8**)&ssid);


/* SUBSIDARY ACCESSORS *******************************************************/
#define IE_SSID__ID_SIZE                                     1
#define IE_SSID__LENGTH_SIZE                                 1
#define IE_SSID__TOTAL_SIZE                                  2




#ifdef __cplusplus
}
#endif

#endif /* IE_SSID_H */
