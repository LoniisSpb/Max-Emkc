/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsyslog.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgsyslog.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:55 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGSYSLOG_H__
#define  __MAXEMKCCFGSYSLOG_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGSYSLOG_MAXEMKCCFGSYSLOGSERVERADDRESS	1
#define	MAXEMKCCFGSYSLOG_MAXEMKCCFGSYSLOGLOGLEVEL	2

#define MAXEMKCCFGSYSLOG_OID_LEN	11
#define MAXEMKCCFGSYSLOG_SUBID_LEN	2

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGSYSLOG_FILE	"ftov/max-emkc/maxemkccfgsyslog.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGSYSLOG_FILE	"ftov\\max-emkc\\maxemkccfgsyslog.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGSYSLOG_PUBLIC


/* The oid to register */
MAXEMKCCFGSYSLOG_PUBLIC OID gv_maxEmkcCfgSyslogOid[MAXEMKCCFGSYSLOG_OID_LEN] = {1,3,6,1,4,1,5597,1,2,8,2};

/* The subid list of the registerd oid */
MAXEMKCCFGSYSLOG_PUBLIC OID gv_maxEmkcCfgSyslogSubIdList[MAXEMKCCFGSYSLOG_SUBID_LEN] = {1,2};

/* Access type of each subid of the registered oid */
MAXEMKCCFGSYSLOG_PUBLIC U_CHAR gv_maxEmkcCfgSyslogSubIdListAccess[MAXEMKCCFGSYSLOG_SUBID_LEN] = {RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGSYSLOG_PUBLIC U_CHAR gv_maxEmkcCfgSyslogSubIdListDataTypes[MAXEMKCCFGSYSLOG_SUBID_LEN] = {ASN_IPADDRESS, ASN_INTEGER};

#else

#define MAXEMKCCFGSYSLOG_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGSYSLOG_PUBLIC OID gv_maxEmkcCfgSyslogOid[MAXEMKCCFGSYSLOG_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGSYSLOG_PUBLIC OID gv_maxEmkcCfgSyslogSubIdList[MAXEMKCCFGSYSLOG_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGSYSLOG_PUBLIC U_CHAR gv_maxEmkcCfgSyslogSubIdListAccess[MAXEMKCCFGSYSLOG_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGSYSLOG_PUBLIC U_CHAR gv_maxEmkcCfgSyslogSubIdListDataTypes[MAXEMKCCFGSYSLOG_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGSYSLOG_PUBLIC */

MAXEMKCCFGSYSLOG_PUBLIC U_CHAR *gv_maxEmkcCfgSyslogServerAddress;
MAXEMKCCFGSYSLOG_PUBLIC INT32 gv_maxEmkcCfgSyslogServerAddressLen;
MAXEMKCCFGSYSLOG_PUBLIC INT32 gv_maxEmkcCfgSyslogLogLevel;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgsysloghdlr.c */
MAXEMKCCFGSYSLOG_PUBLIC void InitMaxEmkcCfgSyslog(void);

MAXEMKCCFGSYSLOG_PUBLIC CHAR MaxEmkcCfgSyslogProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGSYSLOG_PUBLIC U_CHAR *MaxEmkcCfgSyslogProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSYSLOG_PUBLIC U_CHAR *MaxEmkcCfgSyslogProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSYSLOG_PUBLIC CHAR UpdateMaxEmkcCfgSyslog(U_CHAR command);

/* Functions defined in maxemkccfgsysloginstru.c */
MAXEMKCCFGSYSLOG_PUBLIC U_CHAR *GetMaxEmkcCfgSyslogServerAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSYSLOG_PUBLIC U_CHAR *SetMaxEmkcCfgSyslogServerAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSYSLOG_PUBLIC U_CHAR *GetMaxEmkcCfgSyslogLogLevel(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSYSLOG_PUBLIC U_CHAR *SetMaxEmkcCfgSyslogLogLevel(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgsyslogftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGSYSLOG_PUBLIC CHAR ReadFromMaxEmkcCfgSyslogFile();
MAXEMKCCFGSYSLOG_PUBLIC CHAR WriteToMaxEmkcCfgSyslogFile();
#endif

#endif  /* __MAXEMKCCFGSYSLOG_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsyslog.h
 *****************************************************************************/
