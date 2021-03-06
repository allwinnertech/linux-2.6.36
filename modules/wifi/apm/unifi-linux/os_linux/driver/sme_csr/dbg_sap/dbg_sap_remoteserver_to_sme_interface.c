/* This is an autogenerated file */
/* Tag: noCheckHeader */

/*    CONFIDENTIAL */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2008. All rights reserved. */

#include "event_pack_unpack/event_pack_unpack.h"
#include "sme_top_level_fsm/sme.h"
#include "smeio/smeio_fsm_events.h"



typedef void (*event_to_fn)(FsmContext* context, CsrUint8* inputbuffer, CsrUint16 size);

static const event_to_fn fnlookup1[1] = {
        NULL,

};


CsrBool remote_dbg_signal_receive(FsmContext* context, CsrUint8* buffer, CsrUint16 size)
{
    CsrUint8* tempbuffer = buffer;
    CsrUint16 id = event_unpack_CsrUint16(&tempbuffer);

    if (id >= 0x1901 &&
        id <= 0x1901)
    {
        if (fnlookup1[id - 0x1901])
        {
            (*fnlookup1[id - 0x1901])(context, buffer, size);
            return TRUE;
        }
    }

    return FALSE;
}
