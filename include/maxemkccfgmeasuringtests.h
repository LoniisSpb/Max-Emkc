/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasuringtests.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgmeasuringtests.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:52 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGMEASURINGTESTS_H__
#define  __MAXEMKCCFGMEASURINGTESTS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGMEASURINGTESTS_MAXEMKCCFGTESTTIMEMODE	1
#define	MAXEMKCCFGMEASURINGTESTS_MAXEMKCCFGTESTNTPTIMEOFSTART	2
#define	MAXEMKCCFGMEASURINGTESTS_MAXEMKCCFGTESTLOOPTYPE	3
#define	MAXEMKCCFGMEASURINGTESTS_MAXEMKCCFGTESTTYPE	5

#define MAXEMKCCFGMEASURINGTESTS_OID_LEN	11
#define MAXEMKCCFGMEASURINGTESTS_GROUP1_SUBID_LEN	4

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGMEASURINGTESTS_FILE	"ftov/max-emkc/maxemkccfgmeasuringtests.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGMEASURINGTESTS_FILE	"ftov\\max-emkc\\maxemkccfgmeasuringtests.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGMEASURINGTESTS_PUBLIC


/* The oid to register */
MAXEMKCCFGMEASURINGTESTS_PUBLIC OID gv_maxEmkcCfgMeasuringTestsGroup1Oid[MAXEMKCCFGMEASURINGTESTS_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,5};

/* The subid list of the registerd oid */
MAXEMKCCFGMEASURINGTESTS_PUBLIC OID gv_maxEmkcCfgMeasuringTestsGroup1SubIdList[MAXEMKCCFGMEASURINGTESTS_GROUP1_SUBID_LEN] = {1,2,3,5};


/* Access type of each subid of the registered oid */
MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringTestsGroup1SubIdListAccess[MAXEMKCCFGMEASURINGTESTS_GROUP1_SUBID_LEN] = {RWRITE, RWRITE, RWRITE, RWRITE};


/* The data type of each subid of the registered oid */
MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringTestsGroup1SubIdListDataTypes[MAXEMKCCFGMEASURINGTESTS_GROUP1_SUBID_LEN] = {ASN_INTEGER, ASN_OCTET_STR, ASN_INTEGER, ASN_INTEGER};


#else

#define MAXEMKCCFGMEASURINGTESTS_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGMEASURINGTESTS_PUBLIC OID gv_maxEmkcCfgMeasuringTestsGroup1Oid[MAXEMKCCFGMEASURINGTESTS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGMEASURINGTESTS_PUBLIC OID gv_maxEmkcCfgMeasuringTestsGroup1SubIdList[MAXEMKCCFGMEASURINGTESTS_GROUP1_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringTestsGroup1SubIdListAccess[MAXEMKCCFGMEASURINGTESTS_GROUP1_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR gv_maxEmkcCfgMeasuringTestsGroup1SubIdListDataTypes[MAXEMKCCFGMEASURINGTESTS_GROUP1_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGMEASURINGTESTS_PUBLIC */

MAXEMKCCFGMEASURINGTESTS_PUBLIC INT32 gv_maxEmkcCfgTestTimeMode;
MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *gv_maxEmkcCfgTestNtpTimeOfStart;
MAXEMKCCFGMEASURINGTESTS_PUBLIC INT32 gv_maxEmkcCfgTestNtpTimeOfStartLen;
MAXEMKCCFGMEASURINGTESTS_PUBLIC INT32 gv_maxEmkcCfgTestLoopType;
MAXEMKCCFGMEASURINGTESTS_PUBLIC INT32 gv_maxEmkcCfgTestType;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgmeasuringtestshdlr.c */
MAXEMKCCFGMEASURINGTESTS_PUBLIC void InitMaxEmkcCfgMeasuringTests(void);

MAXEMKCCFGMEASURINGTESTS_PUBLIC CHAR MaxEmkcCfgMeasuringTestsProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *MaxEmkcCfgMeasuringTestsProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *MaxEmkcCfgMeasuringTestsProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC CHAR UpdateMaxEmkcCfgMeasuringTests(U_CHAR command);

/* Functions defined in maxemkccfgmeasuringtestsinstru.c */
MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *GetMaxEmkcCfgTestTimeMode(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *SetMaxEmkcCfgTestTimeMode(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *GetMaxEmkcCfgTestNtpTimeOfStart(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *SetMaxEmkcCfgTestNtpTimeOfStart(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *GetMaxEmkcCfgTestLoopType(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *SetMaxEmkcCfgTestLoopType(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *GetMaxEmkcCfgTestType(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASURINGTESTS_PUBLIC U_CHAR *SetMaxEmkcCfgTestType(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgmeasuringtestsftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGMEASURINGTESTS_PUBLIC CHAR ReadFromMaxEmkcCfgMeasuringTestsFile();
MAXEMKCCFGMEASURINGTESTS_PUBLIC CHAR WriteToMaxEmkcCfgMeasuringTestsFile();
#endif

#endif  /* __MAXEMKCCFGMEASURINGTESTS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasuringtests.h
 *****************************************************************************/
