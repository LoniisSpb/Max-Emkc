/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcsnmpagentinfo.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcsnmpagentinfo.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:22 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCSNMPAGENTINFO_H__
#define  __MAXEMKCSNMPAGENTINFO_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCSNMPAGENTINFO_MAXEMKCSNMPAGENTOSVERSION	1
#define	MAXEMKCSNMPAGENTINFO_MAXEMKCSNMPAGENTSOFTWAREVERSION	2
#define	MAXEMKCSNMPAGENTINFO_MAXEMKCSNMPAGENTHARDWAREVERSION	3
#define	MAXEMKCSNMPAGENTINFO_MAXEMKCSNMPAGENTSERIALNUMBER	4

#define MAXEMKCSNMPAGENTINFO_OID_LEN	12
#define MAXEMKCSNMPAGENTINFO_SUBID_LEN	4

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCSNMPAGENTINFO_FILE	"ftov/max-emkc/maxemkcsnmpagentinfo.txt"
#elif defined (WINDOWS)
#define MAXEMKCSNMPAGENTINFO_FILE	"ftov\\max-emkc\\maxemkcsnmpagentinfo.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCSNMPAGENTINFO_PUBLIC


/* The oid to register */
MAXEMKCSNMPAGENTINFO_PUBLIC OID gv_maxEmkcSnmpAgentInfoOid[MAXEMKCSNMPAGENTINFO_OID_LEN] = {1,3,6,1,4,1,5597,1,1,1,2,4};

/* The subid list of the registerd oid */
MAXEMKCSNMPAGENTINFO_PUBLIC OID gv_maxEmkcSnmpAgentInfoSubIdList[MAXEMKCSNMPAGENTINFO_SUBID_LEN] = {1,2,3,4};

/* Access type of each subid of the registered oid */
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR gv_maxEmkcSnmpAgentInfoSubIdListAccess[MAXEMKCSNMPAGENTINFO_SUBID_LEN] = {RONLY, RONLY, RONLY, RONLY};

/* The data type of each subid of the registered oid */
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR gv_maxEmkcSnmpAgentInfoSubIdListDataTypes[MAXEMKCSNMPAGENTINFO_SUBID_LEN] = {ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR};

#else

#define MAXEMKCSNMPAGENTINFO_PUBLIC extern 

/* The oid to register */
MAXEMKCSNMPAGENTINFO_PUBLIC OID gv_maxEmkcSnmpAgentInfoOid[MAXEMKCSNMPAGENTINFO_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCSNMPAGENTINFO_PUBLIC OID gv_maxEmkcSnmpAgentInfoSubIdList[MAXEMKCSNMPAGENTINFO_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR gv_maxEmkcSnmpAgentInfoSubIdListAccess[MAXEMKCSNMPAGENTINFO_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR gv_maxEmkcSnmpAgentInfoSubIdListDataTypes[MAXEMKCSNMPAGENTINFO_SUBID_LEN];

#endif /* #ifdef MAXEMKCSNMPAGENTINFO_PUBLIC */

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *gv_maxEmkcSnmpAgentOsVersion;
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *gv_maxEmkcSnmpAgentSoftwareVersion;
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *gv_maxEmkcSnmpAgentHardwareVersion;
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *gv_maxEmkcSnmpAgentSerialNumber;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcsnmpagentinfohdlr.c */
MAXEMKCSNMPAGENTINFO_PUBLIC void InitMaxEmkcSnmpAgentInfo(void);

MAXEMKCSNMPAGENTINFO_PUBLIC CHAR MaxEmkcSnmpAgentInfoProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *MaxEmkcSnmpAgentInfoProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *MaxEmkcSnmpAgentInfoProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC CHAR UpdateMaxEmkcSnmpAgentInfo(U_CHAR command);

/* Functions defined in maxemkcsnmpagentinfoinstru.c */
MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *GetMaxEmkcSnmpAgentOsVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *SetMaxEmkcSnmpAgentOsVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *GetMaxEmkcSnmpAgentSoftwareVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *SetMaxEmkcSnmpAgentSoftwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *GetMaxEmkcSnmpAgentHardwareVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *SetMaxEmkcSnmpAgentHardwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *GetMaxEmkcSnmpAgentSerialNumber(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPAGENTINFO_PUBLIC U_CHAR *SetMaxEmkcSnmpAgentSerialNumber(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcsnmpagentinfoftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCSNMPAGENTINFO_PUBLIC CHAR ReadFromMaxEmkcSnmpAgentInfoFile();
MAXEMKCSNMPAGENTINFO_PUBLIC CHAR WriteToMaxEmkcSnmpAgentInfoFile();
#endif

#endif  /* __MAXEMKCSNMPAGENTINFO_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcsnmpagentinfo.h
 *****************************************************************************/
