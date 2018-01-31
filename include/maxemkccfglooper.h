/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfglooper.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfglooper.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:44 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGLOOPER_H__
#define  __MAXEMKCCFGLOOPER_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGLOOPER_MAXEMKCCFGLOOPERENTRYROWCHOICE	1

#define MAXEMKCCFGLOOPER_OID_LEN	12
#define MAXEMKCCFGLOOPER_GROUP1_SUBID_LEN	1

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGLOOPER_FILE	"ftov/max-emkc/maxemkccfglooper.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGLOOPER_FILE	"ftov\\max-emkc\\maxemkccfglooper.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGLOOPER_PUBLIC


/* The oid to register */
MAXEMKCCFGLOOPER_PUBLIC OID gv_maxEmkcCfgLooperGroup1Oid[MAXEMKCCFGLOOPER_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,800,1};

/* The subid list of the registerd oid */
MAXEMKCCFGLOOPER_PUBLIC OID gv_maxEmkcCfgLooperGroup1SubIdList[MAXEMKCCFGLOOPER_GROUP1_SUBID_LEN] = {1};


/* Access type of each subid of the registered oid */
MAXEMKCCFGLOOPER_PUBLIC U_CHAR gv_maxEmkcCfgLooperGroup1SubIdListAccess[MAXEMKCCFGLOOPER_GROUP1_SUBID_LEN] = {RWRITE};


/* The data type of each subid of the registered oid */
MAXEMKCCFGLOOPER_PUBLIC U_CHAR gv_maxEmkcCfgLooperGroup1SubIdListDataTypes[MAXEMKCCFGLOOPER_GROUP1_SUBID_LEN] = {ASN_GAUGE};


#else

#define MAXEMKCCFGLOOPER_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGLOOPER_PUBLIC OID gv_maxEmkcCfgLooperGroup1Oid[MAXEMKCCFGLOOPER_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGLOOPER_PUBLIC OID gv_maxEmkcCfgLooperGroup1SubIdList[MAXEMKCCFGLOOPER_GROUP1_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGLOOPER_PUBLIC U_CHAR gv_maxEmkcCfgLooperGroup1SubIdListAccess[MAXEMKCCFGLOOPER_GROUP1_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGLOOPER_PUBLIC U_CHAR gv_maxEmkcCfgLooperGroup1SubIdListDataTypes[MAXEMKCCFGLOOPER_GROUP1_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGLOOPER_PUBLIC */

MAXEMKCCFGLOOPER_PUBLIC U_INT32 gv_maxEmkcCfgLooperEntryRowChoice;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfglooperhdlr.c */
MAXEMKCCFGLOOPER_PUBLIC void InitMaxEmkcCfgLooper(void);

MAXEMKCCFGLOOPER_PUBLIC CHAR MaxEmkcCfgLooperProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGLOOPER_PUBLIC U_CHAR *MaxEmkcCfgLooperProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPER_PUBLIC U_CHAR *MaxEmkcCfgLooperProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPER_PUBLIC CHAR UpdateMaxEmkcCfgLooper(U_CHAR command);

/* Functions defined in maxemkccfglooperinstru.c */
MAXEMKCCFGLOOPER_PUBLIC U_CHAR *GetMaxEmkcCfgLooperEntryRowChoice(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPER_PUBLIC U_CHAR *SetMaxEmkcCfgLooperEntryRowChoice(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfglooperftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGLOOPER_PUBLIC CHAR ReadFromMaxEmkcCfgLooperFile();
MAXEMKCCFGLOOPER_PUBLIC CHAR WriteToMaxEmkcCfgLooperFile();
#endif

#endif  /* __MAXEMKCCFGLOOPER_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfglooper.h
 *****************************************************************************/
