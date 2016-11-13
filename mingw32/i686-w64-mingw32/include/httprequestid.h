/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef __HTTPREQUESTID_H__
#define __HTTPREQUESTID_H__

#define DISPID_HTTPREQUEST_BASE 0x00000001

#define DISPID_HTTPREQUEST_OPEN (DISPID_HTTPREQUEST_BASE)
#define DISPID_HTTPREQUEST_SETREQUESTHEADER (DISPID_HTTPREQUEST_BASE + 1)
#define DISPID_HTTPREQUEST_GETRESPONSEHEADER (DISPID_HTTPREQUEST_BASE + 2)
#define DISPID_HTTPREQUEST_GETALLRESPONSEHEADERS (DISPID_HTTPREQUEST_BASE + 3)
#define DISPID_HTTPREQUEST_SEND (DISPID_HTTPREQUEST_BASE + 4)
#define DISPID_HTTPREQUEST_OPTION (DISPID_HTTPREQUEST_BASE + 5)
#define DISPID_HTTPREQUEST_STATUS (DISPID_HTTPREQUEST_BASE + 6)
#define DISPID_HTTPREQUEST_STATUSTEXT (DISPID_HTTPREQUEST_BASE + 7)
#define DISPID_HTTPREQUEST_RESPONSETEXT (DISPID_HTTPREQUEST_BASE + 8)
#define DISPID_HTTPREQUEST_RESPONSEBODY (DISPID_HTTPREQUEST_BASE + 9)
#define DISPID_HTTPREQUEST_RESPONSESTREAM (DISPID_HTTPREQUEST_BASE + 10)
#define DISPID_HTTPREQUEST_ABORT (DISPID_HTTPREQUEST_BASE + 11)
#define DISPID_HTTPREQUEST_SETPROXY (DISPID_HTTPREQUEST_BASE + 12)
#define DISPID_HTTPREQUEST_SETCREDENTIALS (DISPID_HTTPREQUEST_BASE + 13)
#define DISPID_HTTPREQUEST_WAITFORRESPONSE (DISPID_HTTPREQUEST_BASE + 14)
#define DISPID_HTTPREQUEST_SETTIMEOUTS (DISPID_HTTPREQUEST_BASE + 15)
#define DISPID_HTTPREQUEST_SETCLIENTCERTIFICATE (DISPID_HTTPREQUEST_BASE + 16)
#define DISPID_HTTPREQUEST_SETAUTOLOGONPOLICY (DISPID_HTTPREQUEST_BASE + 17)

#endif
