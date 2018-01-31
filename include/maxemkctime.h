/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkctime.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkctime.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:29 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCTIME_H__
#define  __MAXEMKCTIME_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCTIME_MAXEMKCSUBAGENTTIMETICKS	1
#define	MAXEMKCTIME_MAXEMKCSYSTEMCLOCKTIME	2

#define MAXEMKCTIME_OID_LEN	11
#define MAXEMKCTIME_SUBID_LEN	2

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCTIME_FILE	"ftov/max-emkc/maxemkctime.txt"
#elif defined (WINDOWS)
#define MAXEMKCTIME_FILE	"ftov\\max-emkc\\maxemkctime.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCTIME_PUBLIC


/* The oid to register */
MAXEMKCTIME_PUBLIC OID gv_maxEmkcTimeOid[MAXEMKCTIME_OID_LEN] = {1,3,6,1,4,1,5597,1,1,7,2};

/* The subid list of the registerd oid */
MAXEMKCTIME_PUBLIC OID gv_maxEmkcTimeSubIdList[MAXEMKCTIME_SUBID_LEN] = {1,2};

/* Access type of each subid of the registered oid */
MAXEMKCTIME_PUBLIC U_CHAR gv_maxEmkcTimeSubIdListAccess[MAXEMKCTIME_SUBID_LEN] = {RONLY, RONLY};

/* The data type of each subid of the registered oid */
MAXEMKCTIME_PUBLIC U_CHAR gv_maxEmkcTimeSubIdListDataTypes[MAXEMKCTIME_SUBID_LEN] = {ASN_COUNTER64, ASN_OCTET_STR};

#else

#define MAXEMKCTIME_PUBLIC extern 

/* The oid to register */
MAXEMKCTIME_PUBLIC OID gv_maxEmkcTimeOid[MAXEMKCTIME_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCTIME_PUBLIC OID gv_maxEmkcTimeSubIdList[MAXEMKCTIME_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCTIME_PUBLIC U_CHAR gv_maxEmkcTimeSubIdListAccess[MAXEMKCTIME_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCTIME_PUBLIC U_CHAR gv_maxEmkcTimeSubIdListDataTypes[MAXEMKCTIME_SUBID_LEN];

#endif /* #ifdef MAXEMKCTIME_PUBLIC */

MAXEMKCTIME_PUBLIC counter64 gv_maxEmkcSubagentTimeticks;
MAXEMKCTIME_PUBLIC U_CHAR *gv_maxEmkcSystemClockTime;
MAXEMKCTIME_PUBLIC INT32 gv_maxEmkcSystemClockTimeLen;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkctimehdlr.c */
MAXEMKCTIME_PUBLIC void InitMaxEmkcTime(void);

MAXEMKCTIME_PUBLIC CHAR MaxEmkcTimeProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCTIME_PUBLIC U_CHAR *MaxEmkcTimeProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCTIME_PUBLIC U_CHAR *MaxEmkcTimeProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCTIME_PUBLIC CHAR UpdateMaxEmkcTime(U_CHAR command);

/* Functions defined in maxemkctimeinstru.c */
MAXEMKCTIME_PUBLIC U_CHAR *GetMaxEmkcSubagentTimeticks(INT32 *varValLen, U_CHAR *status);

MAXEMKCTIME_PUBLIC U_CHAR *SetMaxEmkcSubagentTimeticks(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCTIME_PUBLIC U_CHAR *GetMaxEmkcSystemClockTime(INT32 *varValLen, U_CHAR *status);

MAXEMKCTIME_PUBLIC U_CHAR *SetMaxEmkcSystemClockTime(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkctimeftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCTIME_PUBLIC CHAR ReadFromMaxEmkcTimeFile();
MAXEMKCTIME_PUBLIC CHAR WriteToMaxEmkcTimeFile();
#endif

#endif  /* __MAXEMKCTIME_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkctime.h
 *****************************************************************************/
