/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtraffictest.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgtraffictest.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:42 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGTRAFFICTEST_H__
#define  __MAXEMKCCFGTRAFFICTEST_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGTRAFFICTEST_MAXEMKCCFGTRAFFICTESTENTRYROWCHOICE	1

#define MAXEMKCCFGTRAFFICTEST_OID_LEN	12
#define MAXEMKCCFGTRAFFICTEST_GROUP1_SUBID_LEN	1

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGTRAFFICTEST_FILE	"ftov/max-emkc/maxemkccfgtraffictest.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGTRAFFICTEST_FILE	"ftov\\max-emkc\\maxemkccfgtraffictest.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGTRAFFICTEST_PUBLIC


/* The oid to register */
MAXEMKCCFGTRAFFICTEST_PUBLIC OID gv_maxEmkcCfgTrafficTestGroup1Oid[MAXEMKCCFGTRAFFICTEST_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,8,1};

/* The subid list of the registerd oid */
MAXEMKCCFGTRAFFICTEST_PUBLIC OID gv_maxEmkcCfgTrafficTestGroup1SubIdList[MAXEMKCCFGTRAFFICTEST_GROUP1_SUBID_LEN] = {1};


/* Access type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTestGroup1SubIdListAccess[MAXEMKCCFGTRAFFICTEST_GROUP1_SUBID_LEN] = {RWRITE};


/* The data type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTestGroup1SubIdListDataTypes[MAXEMKCCFGTRAFFICTEST_GROUP1_SUBID_LEN] = {ASN_GAUGE};


#else

#define MAXEMKCCFGTRAFFICTEST_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGTRAFFICTEST_PUBLIC OID gv_maxEmkcCfgTrafficTestGroup1Oid[MAXEMKCCFGTRAFFICTEST_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGTRAFFICTEST_PUBLIC OID gv_maxEmkcCfgTrafficTestGroup1SubIdList[MAXEMKCCFGTRAFFICTEST_GROUP1_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTestGroup1SubIdListAccess[MAXEMKCCFGTRAFFICTEST_GROUP1_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTestGroup1SubIdListDataTypes[MAXEMKCCFGTRAFFICTEST_GROUP1_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGTRAFFICTEST_PUBLIC */

MAXEMKCCFGTRAFFICTEST_PUBLIC U_INT32 gv_maxEmkcCfgTrafficTestEntryRowChoice;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgtraffictesthdlr.c */
MAXEMKCCFGTRAFFICTEST_PUBLIC void InitMaxEmkcCfgTrafficTest(void);

MAXEMKCCFGTRAFFICTEST_PUBLIC CHAR MaxEmkcCfgTrafficTestProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR *MaxEmkcCfgTrafficTestProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR *MaxEmkcCfgTrafficTestProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTEST_PUBLIC CHAR UpdateMaxEmkcCfgTrafficTest(U_CHAR command);

/* Functions defined in maxemkccfgtraffictestinstru.c */
MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR *GetMaxEmkcCfgTrafficTestEntryRowChoice(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTEST_PUBLIC U_CHAR *SetMaxEmkcCfgTrafficTestEntryRowChoice(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgtraffictestftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGTRAFFICTEST_PUBLIC CHAR ReadFromMaxEmkcCfgTrafficTestFile();
MAXEMKCCFGTRAFFICTEST_PUBLIC CHAR WriteToMaxEmkcCfgTrafficTestFile();
#endif

#endif  /* __MAXEMKCCFGTRAFFICTEST_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtraffictest.h
 *****************************************************************************/
