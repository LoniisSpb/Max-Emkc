/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasuringethport.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgmeasuringethport.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:33 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGMEASURINGETHPORT_H__
#define  __MAXEMKCCFGMEASURINGETHPORT_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGMEASURINGETHPORT_MAXEMKCCFGMEASETHPORTMACADDRESS	1
#define	MAXEMKCCFGMEASURINGETHPORT_MAXEMKCCFGMEASETHPORTIPADDRESS	2
#define	MAXEMKCCFGMEASURINGETHPORT_MAXEMKCCFGMEASETHPORTMASK	3
#define	MAXEMKCCFGMEASURINGETHPORT_MAXEMKCCFGMEASETHPORTGW	4
#define	MAXEMKCCFGMEASURINGETHPORT_MAXEMKCCFGMEASETHPORTDHCP	5
#define	MAXEMKCCFGMEASURINGETHPORT_MAXEMKCCFGMEASETHPORTRATE	6
#define	MAXEMKCCFGMEASURINGETHPORT_MAXEMKCCFGMEASETHPORTDUPLEX	7

#define MAXEMKCCFGMEASURINGETHPORT_OID_LEN	11
#define MAXEMKCCFGMEASURINGETHPORT_SUBID_LEN	7

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGMEASURINGETHPORT_FILE	"ftov/max-emkc/maxemkccfgmeasuringethport.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGMEASURINGETHPORT_FILE	"ftov\\max-emkc\\maxemkccfgmeasuringethport.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGMEASURINGETHPORT_PUBLIC


/* The oid to register */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC OID gv_maxEmkcCfgMeasuringEthPortOid[MAXEMKCCFGMEASURINGETHPORT_OID_LEN] = {1,3,6,1,4,1,5597,1,2,1,7};

/* The subid list of the registerd oid */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC OID gv_maxEmkcCfgMeasuringEthPortSubIdList[MAXEMKCCFGMEASURINGETHPORT_SUBID_LEN] = {1,2,3,4,5,6,7};

/* Access type of each subid of the registered oid */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringEthPortSubIdListAccess[MAXEMKCCFGMEASURINGETHPORT_SUBID_LEN] = {RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringEthPortSubIdListDataTypes[MAXEMKCCFGMEASURINGETHPORT_SUBID_LEN] = {ASN_OCTET_STR, ASN_IPADDRESS, ASN_GAUGE, ASN_IPADDRESS, ASN_INTEGER, ASN_OCTET_STR, ASN_OCTET_STR};

#else

#define MAXEMKCCFGMEASURINGETHPORT_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC OID gv_maxEmkcCfgMeasuringEthPortOid[MAXEMKCCFGMEASURINGETHPORT_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC OID gv_maxEmkcCfgMeasuringEthPortSubIdList[MAXEMKCCFGMEASURINGETHPORT_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringEthPortSubIdListAccess[MAXEMKCCFGMEASURINGETHPORT_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringEthPortSubIdListDataTypes[MAXEMKCCFGMEASURINGETHPORT_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGMEASURINGETHPORT_PUBLIC */

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *gv_maxEmkcCfgMeasEthPortMacAddress;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC INT32 gv_maxEmkcCfgMeasEthPortMacAddressLen;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *gv_maxEmkcCfgMeasEthPortIpAddress;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC INT32 gv_maxEmkcCfgMeasEthPortIpAddressLen;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_INT32 gv_maxEmkcCfgMeasEthPortMask;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *gv_maxEmkcCfgMeasEthPortGw;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC INT32 gv_maxEmkcCfgMeasEthPortGwLen;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC INT32 gv_maxEmkcCfgMeasEthPortDhcp;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *gv_maxEmkcCfgMeasEthPortRate;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC INT32 gv_maxEmkcCfgMeasEthPortRateLen;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *gv_maxEmkcCfgMeasEthPortDuplex;
MAXEMKCCFGMEASURINGETHPORT_PUBLIC INT32 gv_maxEmkcCfgMeasEthPortDuplexLen;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgmeasuringethporthdlr.c */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC void InitMaxEmkcCfgMeasuringEthPort(void);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC CHAR MaxEmkcCfgMeasuringEthPortProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *MaxEmkcCfgMeasuringEthPortProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *MaxEmkcCfgMeasuringEthPortProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC CHAR UpdateMaxEmkcCfgMeasuringEthPort(U_CHAR command);

/* Functions defined in maxemkccfgmeasuringethportinstru.c */
MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *GetMaxEmkcCfgMeasEthPortMacAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *SetMaxEmkcCfgMeasEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *GetMaxEmkcCfgMeasEthPortIpAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *SetMaxEmkcCfgMeasEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *GetMaxEmkcCfgMeasEthPortMask(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *SetMaxEmkcCfgMeasEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *GetMaxEmkcCfgMeasEthPortGw(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *SetMaxEmkcCfgMeasEthPortGw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *GetMaxEmkcCfgMeasEthPortDhcp(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *SetMaxEmkcCfgMeasEthPortDhcp(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *GetMaxEmkcCfgMeasEthPortRate(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *SetMaxEmkcCfgMeasEthPortRate(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *GetMaxEmkcCfgMeasEthPortDuplex(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGETHPORT_PUBLIC U_CHAR *SetMaxEmkcCfgMeasEthPortDuplex(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgmeasuringethportftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGMEASURINGETHPORT_PUBLIC CHAR ReadFromMaxEmkcCfgMeasuringEthPortFile();
MAXEMKCCFGMEASURINGETHPORT_PUBLIC CHAR WriteToMaxEmkcCfgMeasuringEthPortFile();
#endif

#endif  /* __MAXEMKCCFGMEASURINGETHPORT_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasuringethport.h
 *****************************************************************************/
