/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeasuringethportstate.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcmeasuringethportstate.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:26 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCMEASURINGETHPORTSTATE_H__
#define  __MAXEMKCMEASURINGETHPORTSTATE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCMEASURINGETHPORTSTATE_MAXEMKCMEASETHPORTLINKSTATUS	1

#define MAXEMKCMEASURINGETHPORTSTATE_OID_LEN	11
#define MAXEMKCMEASURINGETHPORTSTATE_GROUP1_SUBID_LEN	1

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCMEASURINGETHPORTSTATE_FILE	"ftov/max-emkc/maxemkcmeasuringethportstate.txt"
#elif defined (WINDOWS)
#define MAXEMKCMEASURINGETHPORTSTATE_FILE	"ftov\\max-emkc\\maxemkcmeasuringethportstate.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCMEASURINGETHPORTSTATE_PUBLIC


/* The oid to register */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC OID gv_maxEmkcMeasuringEthPortStateGroup1Oid[MAXEMKCMEASURINGETHPORTSTATE_OID_LEN] = {1,3,6,1,4,1,5597,1,1,3,1};

/* The subid list of the registerd oid */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC OID gv_maxEmkcMeasuringEthPortStateGroup1SubIdList[MAXEMKCMEASURINGETHPORTSTATE_GROUP1_SUBID_LEN] = {1};


/* Access type of each subid of the registered oid */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR gv_maxEmkcMeasuringEthPortStateGroup1SubIdListAccess[MAXEMKCMEASURINGETHPORTSTATE_GROUP1_SUBID_LEN] = {RONLY};


/* The data type of each subid of the registered oid */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR gv_maxEmkcMeasuringEthPortStateGroup1SubIdListDataTypes[MAXEMKCMEASURINGETHPORTSTATE_GROUP1_SUBID_LEN] = {ASN_INTEGER};


#else

#define MAXEMKCMEASURINGETHPORTSTATE_PUBLIC extern 

/* The oid to register */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC OID gv_maxEmkcMeasuringEthPortStateGroup1Oid[MAXEMKCMEASURINGETHPORTSTATE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC OID gv_maxEmkcMeasuringEthPortStateGroup1SubIdList[MAXEMKCMEASURINGETHPORTSTATE_GROUP1_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR gv_maxEmkcMeasuringEthPortStateGroup1SubIdListAccess[MAXEMKCMEASURINGETHPORTSTATE_GROUP1_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR gv_maxEmkcMeasuringEthPortStateGroup1SubIdListDataTypes[MAXEMKCMEASURINGETHPORTSTATE_GROUP1_SUBID_LEN];

#endif /* #ifdef MAXEMKCMEASURINGETHPORTSTATE_PUBLIC */

MAXEMKCMEASURINGETHPORTSTATE_PUBLIC INT32 gv_maxEmkcMeasEthPortLinkStatus;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcmeasuringethportstatehdlr.c */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC void InitMaxEmkcMeasuringEthPortState(void);

MAXEMKCMEASURINGETHPORTSTATE_PUBLIC CHAR MaxEmkcMeasuringEthPortStateProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR *MaxEmkcMeasuringEthPortStateProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR *MaxEmkcMeasuringEthPortStateProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASURINGETHPORTSTATE_PUBLIC CHAR UpdateMaxEmkcMeasuringEthPortState(U_CHAR command);

/* Functions defined in maxemkcmeasuringethportstateinstru.c */
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR *GetMaxEmkcMeasEthPortLinkStatus(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASURINGETHPORTSTATE_PUBLIC U_CHAR *SetMaxEmkcMeasEthPortLinkStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcmeasuringethportstateftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC CHAR ReadFromMaxEmkcMeasuringEthPortStateFile();
MAXEMKCMEASURINGETHPORTSTATE_PUBLIC CHAR WriteToMaxEmkcMeasuringEthPortStateFile();
#endif

#endif  /* __MAXEMKCMEASURINGETHPORTSTATE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeasuringethportstate.h
 *****************************************************************************/
