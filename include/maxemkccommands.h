/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccommands.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccommands. 
 *
 *			  "Meinberg LANTIME SNMP Management Information Base"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:41:01 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCOMMANDS_H__
#define  __MAXEMKCCOMMANDS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCOMMANDS_MAXEMKCCMDMEASURINGTESTSTART	1
#define	MAXEMKCCOMMANDS_MAXEMKCCMDEXECUTE	2
#define	MAXEMKCCOMMANDS_MAXEMKCCMDSETTIME	3

#define MAXEMKCCOMMANDS_OID_LEN	10
#define MAXEMKCCOMMANDS_SUBID_LEN	3

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCOMMANDS_FILE	"ftov/max-emkc/maxemkccommands.txt"
#elif defined (WINDOWS)
#define MAXEMKCCOMMANDS_FILE	"ftov\\max-emkc\\maxemkccommands.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCOMMANDS_PUBLIC


/* The oid to register */
MAXEMKCCOMMANDS_PUBLIC OID gv_maxEmkcCommandsOid[MAXEMKCCOMMANDS_OID_LEN] = {1,3,6,1,4,1,5597,1,3,3};

/* The subid list of the registerd oid */
MAXEMKCCOMMANDS_PUBLIC OID gv_maxEmkcCommandsSubIdList[MAXEMKCCOMMANDS_SUBID_LEN] = {1,2,3};

/* Access type of each subid of the registered oid */
MAXEMKCCOMMANDS_PUBLIC U_CHAR gv_maxEmkcCommandsSubIdListAccess[MAXEMKCCOMMANDS_SUBID_LEN] = {RWRITE, RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCOMMANDS_PUBLIC U_CHAR gv_maxEmkcCommandsSubIdListDataTypes[MAXEMKCCOMMANDS_SUBID_LEN] = {ASN_INTEGER, ASN_INTEGER, ASN_OCTET_STR};

#else

#define MAXEMKCCOMMANDS_PUBLIC extern 

/* The oid to register */
MAXEMKCCOMMANDS_PUBLIC OID gv_maxEmkcCommandsOid[MAXEMKCCOMMANDS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCOMMANDS_PUBLIC OID gv_maxEmkcCommandsSubIdList[MAXEMKCCOMMANDS_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCOMMANDS_PUBLIC U_CHAR gv_maxEmkcCommandsSubIdListAccess[MAXEMKCCOMMANDS_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCOMMANDS_PUBLIC U_CHAR gv_maxEmkcCommandsSubIdListDataTypes[MAXEMKCCOMMANDS_SUBID_LEN];

#endif /* #ifdef MAXEMKCCOMMANDS_PUBLIC */

MAXEMKCCOMMANDS_PUBLIC INT32 gv_maxEmkcCmdMeasuringTestStart;
MAXEMKCCOMMANDS_PUBLIC INT32 gv_maxEmkcCmdExecute;
MAXEMKCCOMMANDS_PUBLIC U_CHAR *gv_maxEmkcCmdSetTime;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccommandshdlr.c */
MAXEMKCCOMMANDS_PUBLIC void InitMaxEmkcCommands(void);

MAXEMKCCOMMANDS_PUBLIC CHAR MaxEmkcCommandsProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCOMMANDS_PUBLIC U_CHAR *MaxEmkcCommandsProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCOMMANDS_PUBLIC U_CHAR *MaxEmkcCommandsProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCOMMANDS_PUBLIC CHAR UpdateMaxEmkcCommands(U_CHAR command);

/* Functions defined in maxemkccommandsinstru.c */
MAXEMKCCOMMANDS_PUBLIC U_CHAR *GetMaxEmkcCmdMeasuringTestStart(INT32 *varValLen, U_CHAR *status);

MAXEMKCCOMMANDS_PUBLIC U_CHAR *SetMaxEmkcCmdMeasuringTestStart(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCOMMANDS_PUBLIC U_CHAR *GetMaxEmkcCmdExecute(INT32 *varValLen, U_CHAR *status);

MAXEMKCCOMMANDS_PUBLIC U_CHAR *SetMaxEmkcCmdExecute(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCOMMANDS_PUBLIC U_CHAR *GetMaxEmkcCmdSetTime(INT32 *varValLen, U_CHAR *status);

MAXEMKCCOMMANDS_PUBLIC U_CHAR *SetMaxEmkcCmdSetTime(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccommandsftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCOMMANDS_PUBLIC CHAR ReadFromMaxEmkcCommandsFile();
MAXEMKCCOMMANDS_PUBLIC CHAR WriteToMaxEmkcCommandsFile();
#endif

#endif  /* __MAXEMKCCOMMANDS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccommands.h
 *****************************************************************************/
