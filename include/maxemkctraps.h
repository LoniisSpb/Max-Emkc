/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkctraps.h.
 *
 *  Purpose	: File contains data structures and function prototypes for
 *			   the module Max-Emkc
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:41:02 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/


#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


#ifndef  MAXEMKCTRAPS_PUBLIC 
#define  MAXEMKCTRAPS_PUBLIC extern
#endif  


/* --------------------------- Variable Declarations ------------------------*/


/* --------------------------- Function Prototypes ------------------------*/

MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapLeapSecondAnnounced(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapEmkcNotResponding(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapTemperatureOk(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrap1PpsRefDisconnect(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapFirmwareUpdatingFinished(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapTemperatureExceeded(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapNTPClientAlarm(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapNTPSync(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapTestConfigError(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapMeasuringPortUp(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapTestStart(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapTestResultsReady(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapTestError(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapNTPNotSync(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapNTPStopped(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapEmkcResponding(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapSnmpAgentBooted(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrapMeasuringPortDown(Vector *extraVarBinds, U_CHAR informFlag);
MAXEMKCTRAPS_PUBLIC void SendV2TrapOfmaxEmkcTrap1PpsRefReconnect(Vector *extraVarBinds, U_CHAR informFlag);

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkctraps.h
 *****************************************************************************/
