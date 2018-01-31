/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcstatus.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcstatus. 
 *
 *			  "Meinberg LANTIME SNMP Management Information Base"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:31 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCSTATUS_H__
#define  __MAXEMKCSTATUS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCSTATUS_MAXEMKCMEASURINGMODULESTATE	6
#define	MAXEMKCSTATUS_MAXEMKCCFGFIRMWAREUPDATINGSTATUS	8

#define MAXEMKCSTATUS_OID_LEN	10
#define MAXEMKCSTATUS_GROUP1_SUBID_LEN	1
#define MAXEMKCSTATUS_GROUP2_SUBID_LEN	1

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCSTATUS_FILE	"ftov/max-emkc/maxemkcstatus.txt"
#elif defined (WINDOWS)
#define MAXEMKCSTATUS_FILE	"ftov\\max-emkc\\maxemkcstatus.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCSTATUS_PUBLIC


/* The oid to register */
MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup1Oid[MAXEMKCSTATUS_OID_LEN] = {1,3,6,1,4,1,5597,1,1,6};

MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup2Oid[MAXEMKCSTATUS_OID_LEN] = {1,3,6,1,4,1,5597,1,1,8};

/* The subid list of the registerd oid */
MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup1SubIdList[MAXEMKCSTATUS_GROUP1_SUBID_LEN] = {6};

MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup2SubIdList[MAXEMKCSTATUS_GROUP2_SUBID_LEN] = {8};


/* Access type of each subid of the registered oid */
MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup1SubIdListAccess[MAXEMKCSTATUS_GROUP1_SUBID_LEN] = {RONLY};

MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup2SubIdListAccess[MAXEMKCSTATUS_GROUP2_SUBID_LEN] = {RONLY};


/* The data type of each subid of the registered oid */
MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup1SubIdListDataTypes[MAXEMKCSTATUS_GROUP1_SUBID_LEN] = {ASN_INTEGER};

MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup2SubIdListDataTypes[MAXEMKCSTATUS_GROUP2_SUBID_LEN] = {ASN_INTEGER};


#else

#define MAXEMKCSTATUS_PUBLIC extern 

/* The oid to register */
MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup1Oid[MAXEMKCSTATUS_OID_LEN];
MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup2Oid[MAXEMKCSTATUS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup1SubIdList[MAXEMKCSTATUS_GROUP1_SUBID_LEN];
MAXEMKCSTATUS_PUBLIC OID gv_maxEmkcStatusGroup2SubIdList[MAXEMKCSTATUS_GROUP2_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup1SubIdListAccess[MAXEMKCSTATUS_GROUP1_SUBID_LEN];
MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup2SubIdListAccess[MAXEMKCSTATUS_GROUP2_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup1SubIdListDataTypes[MAXEMKCSTATUS_GROUP1_SUBID_LEN];
MAXEMKCSTATUS_PUBLIC U_CHAR gv_maxEmkcStatusGroup2SubIdListDataTypes[MAXEMKCSTATUS_GROUP2_SUBID_LEN];

#endif /* #ifdef MAXEMKCSTATUS_PUBLIC */

MAXEMKCSTATUS_PUBLIC INT32 gv_maxEmkcMeasuringModuleState;
MAXEMKCSTATUS_PUBLIC INT32 gv_maxEmkcCfgFirmwareUpdatingStatus;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcstatushdlr.c */
MAXEMKCSTATUS_PUBLIC void InitMaxEmkcStatus(void);

MAXEMKCSTATUS_PUBLIC CHAR MaxEmkcStatusProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCSTATUS_PUBLIC U_CHAR *MaxEmkcStatusProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUS_PUBLIC U_CHAR *MaxEmkcStatusProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUS_PUBLIC CHAR UpdateMaxEmkcStatus(U_CHAR command);

/* Functions defined in maxemkcstatusinstru.c */
MAXEMKCSTATUS_PUBLIC U_CHAR *GetMaxEmkcMeasuringModuleState(INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUS_PUBLIC U_CHAR *SetMaxEmkcMeasuringModuleState(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUS_PUBLIC U_CHAR *GetMaxEmkcCfgFirmwareUpdatingStatus(INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUS_PUBLIC U_CHAR *SetMaxEmkcCfgFirmwareUpdatingStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcstatusftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCSTATUS_PUBLIC CHAR ReadFromMaxEmkcStatusFile();
MAXEMKCSTATUS_PUBLIC CHAR WriteToMaxEmkcStatusFile();
#endif

#endif  /* __MAXEMKCSTATUS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcstatus.h
 *****************************************************************************/
