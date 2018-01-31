/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtestrfc2544.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgtestrfc2544.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:36 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGTESTRFC2544_H__
#define  __MAXEMKCCFGTESTRFC2544_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGTESTRFC2544_MAXEMKCCFGRFC2544ENTRYROWCHOICE	1

#define MAXEMKCCFGTESTRFC2544_OID_LEN	12
#define MAXEMKCCFGTESTRFC2544_GROUP1_SUBID_LEN	1

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGTESTRFC2544_FILE	"ftov/max-emkc/maxemkccfgtestrfc2544.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGTESTRFC2544_FILE	"ftov\\max-emkc\\maxemkccfgtestrfc2544.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGTESTRFC2544_PUBLIC


/* The oid to register */
MAXEMKCCFGTESTRFC2544_PUBLIC OID gv_maxEmkcCfgTestRfc2544Group1Oid[MAXEMKCCFGTESTRFC2544_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,6,1};

/* The subid list of the registerd oid */
MAXEMKCCFGTESTRFC2544_PUBLIC OID gv_maxEmkcCfgTestRfc2544Group1SubIdList[MAXEMKCCFGTESTRFC2544_GROUP1_SUBID_LEN] = {1};


/* Access type of each subid of the registered oid */
MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR gv_maxEmkcCfgTestRfc2544Group1SubIdListAccess[MAXEMKCCFGTESTRFC2544_GROUP1_SUBID_LEN] = {RWRITE};


/* The data type of each subid of the registered oid */
MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR gv_maxEmkcCfgTestRfc2544Group1SubIdListDataTypes[MAXEMKCCFGTESTRFC2544_GROUP1_SUBID_LEN] = {ASN_GAUGE};


#else

#define MAXEMKCCFGTESTRFC2544_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGTESTRFC2544_PUBLIC OID gv_maxEmkcCfgTestRfc2544Group1Oid[MAXEMKCCFGTESTRFC2544_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGTESTRFC2544_PUBLIC OID gv_maxEmkcCfgTestRfc2544Group1SubIdList[MAXEMKCCFGTESTRFC2544_GROUP1_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR gv_maxEmkcCfgTestRfc2544Group1SubIdListAccess[MAXEMKCCFGTESTRFC2544_GROUP1_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR gv_maxEmkcCfgTestRfc2544Group1SubIdListDataTypes[MAXEMKCCFGTESTRFC2544_GROUP1_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGTESTRFC2544_PUBLIC */

MAXEMKCCFGTESTRFC2544_PUBLIC U_INT32 gv_maxEmkcCfgRfc2544EntryRowChoice;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgtestrfc2544hdlr.c */
MAXEMKCCFGTESTRFC2544_PUBLIC void InitMaxEmkcCfgTestRfc2544(void);

MAXEMKCCFGTESTRFC2544_PUBLIC CHAR MaxEmkcCfgTestRfc2544ProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR *MaxEmkcCfgTestRfc2544ProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR *MaxEmkcCfgTestRfc2544ProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTESTRFC2544_PUBLIC CHAR UpdateMaxEmkcCfgTestRfc2544(U_CHAR command);

/* Functions defined in maxemkccfgtestrfc2544instru.c */
MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR *GetMaxEmkcCfgRfc2544EntryRowChoice(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTESTRFC2544_PUBLIC U_CHAR *SetMaxEmkcCfgRfc2544EntryRowChoice(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgtestrfc2544ftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGTESTRFC2544_PUBLIC CHAR ReadFromMaxEmkcCfgTestRfc2544File();
MAXEMKCCFGTESTRFC2544_PUBLIC CHAR WriteToMaxEmkcCfgTestRfc2544File();
#endif

#endif  /* __MAXEMKCCFGTESTRFC2544_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtestrfc2544.h
 *****************************************************************************/
