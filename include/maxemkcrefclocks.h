/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcrefclocks.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcrefclocks.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:23 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCREFCLOCKS_H__
#define  __MAXEMKCREFCLOCKS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCREFCLOCKS_MAXEMKC1PPSREFCLOCKSTATUS	1
#define	MAXEMKCREFCLOCKS_MAXEMKCNTPREFCLOCKSTATUS	2

#define MAXEMKCREFCLOCKS_OID_LEN	11
#define MAXEMKCREFCLOCKS_SUBID_LEN	2

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCREFCLOCKS_FILE	"ftov/max-emkc/maxemkcrefclocks.txt"
#elif defined (WINDOWS)
#define MAXEMKCREFCLOCKS_FILE	"ftov\\max-emkc\\maxemkcrefclocks.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCREFCLOCKS_PUBLIC


/* The oid to register */
MAXEMKCREFCLOCKS_PUBLIC OID gv_maxEmkcRefclocksOid[MAXEMKCREFCLOCKS_OID_LEN] = {1,3,6,1,4,1,5597,1,1,2,2};

/* The subid list of the registerd oid */
MAXEMKCREFCLOCKS_PUBLIC OID gv_maxEmkcRefclocksSubIdList[MAXEMKCREFCLOCKS_SUBID_LEN] = {1,2};

/* Access type of each subid of the registered oid */
MAXEMKCREFCLOCKS_PUBLIC U_CHAR gv_maxEmkcRefclocksSubIdListAccess[MAXEMKCREFCLOCKS_SUBID_LEN] = {RONLY, RONLY};

/* The data type of each subid of the registered oid */
MAXEMKCREFCLOCKS_PUBLIC U_CHAR gv_maxEmkcRefclocksSubIdListDataTypes[MAXEMKCREFCLOCKS_SUBID_LEN] = {ASN_INTEGER, ASN_INTEGER};

#else

#define MAXEMKCREFCLOCKS_PUBLIC extern 

/* The oid to register */
MAXEMKCREFCLOCKS_PUBLIC OID gv_maxEmkcRefclocksOid[MAXEMKCREFCLOCKS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCREFCLOCKS_PUBLIC OID gv_maxEmkcRefclocksSubIdList[MAXEMKCREFCLOCKS_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCREFCLOCKS_PUBLIC U_CHAR gv_maxEmkcRefclocksSubIdListAccess[MAXEMKCREFCLOCKS_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCREFCLOCKS_PUBLIC U_CHAR gv_maxEmkcRefclocksSubIdListDataTypes[MAXEMKCREFCLOCKS_SUBID_LEN];

#endif /* #ifdef MAXEMKCREFCLOCKS_PUBLIC */

MAXEMKCREFCLOCKS_PUBLIC INT32 gv_maxEmkc1PpsRefclockStatus;
MAXEMKCREFCLOCKS_PUBLIC INT32 gv_maxEmkcNtpRefclockStatus;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcrefclockshdlr.c */
MAXEMKCREFCLOCKS_PUBLIC void InitMaxEmkcRefclocks(void);

MAXEMKCREFCLOCKS_PUBLIC CHAR MaxEmkcRefclocksProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCREFCLOCKS_PUBLIC U_CHAR *MaxEmkcRefclocksProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCREFCLOCKS_PUBLIC U_CHAR *MaxEmkcRefclocksProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCREFCLOCKS_PUBLIC CHAR UpdateMaxEmkcRefclocks(U_CHAR command);

/* Functions defined in maxemkcrefclocksinstru.c */
MAXEMKCREFCLOCKS_PUBLIC U_CHAR *GetMaxEmkc1PpsRefclockStatus(INT32 *varValLen, U_CHAR *status);

MAXEMKCREFCLOCKS_PUBLIC U_CHAR *SetMaxEmkc1PpsRefclockStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCREFCLOCKS_PUBLIC U_CHAR *GetMaxEmkcNtpRefclockStatus(INT32 *varValLen, U_CHAR *status);

MAXEMKCREFCLOCKS_PUBLIC U_CHAR *SetMaxEmkcNtpRefclockStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcrefclocksftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCREFCLOCKS_PUBLIC CHAR ReadFromMaxEmkcRefclocksFile();
MAXEMKCREFCLOCKS_PUBLIC CHAR WriteToMaxEmkcRefclocksFile();
#endif

#endif  /* __MAXEMKCREFCLOCKS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcrefclocks.h
 *****************************************************************************/
