/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkctraps.c.
 *
 *  Purpose	: This file contains all trap functions defined for the mib
 *			  Max-Emkc
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


#include "config.h"
#define MAXEMKC_PUBLIC
#include "snmpincludes.h"
#include "maxemkctraps.h"
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapLeapSecondAnnounced()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapLeapSecondAnnounced to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapLeapSecondAnnounced(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 16 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapLeapSecondAnnounced() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapEmkcNotResponding()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapEmkcNotResponding to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapEmkcNotResponding(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 3 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapEmkcNotResponding() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapTemperatureOk()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapTemperatureOk to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapTemperatureOk(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 10 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapTemperatureOk() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrap1PpsRefDisconnect()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrap1PpsRefDisconnect to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrap1PpsRefDisconnect(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 7 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrap1PpsRefDisconnect() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapFirmwareUpdatingFinished()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapFirmwareUpdatingFinished to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapFirmwareUpdatingFinished(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 17 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapFirmwareUpdatingFinished() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapTemperatureExceeded()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapTemperatureExceeded to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapTemperatureExceeded(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 9 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapTemperatureExceeded() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapNTPClientAlarm()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapNTPClientAlarm to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapNTPClientAlarm(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 14 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapNTPClientAlarm() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapNTPSync()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapNTPSync to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapNTPSync(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 13 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapNTPSync() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapTestConfigError()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapTestConfigError to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapTestConfigError(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 18 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapTestConfigError() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapMeasuringPortUp()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapMeasuringPortUp to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapMeasuringPortUp(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 6 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapMeasuringPortUp() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapTestStart()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapTestStart to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapTestStart(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 19 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapTestStart() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapTestResultsReady()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapTestResultsReady to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapTestResultsReady(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 21 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapTestResultsReady() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapTestError()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapTestError to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapTestError(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 20 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapTestError() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapNTPNotSync()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapNTPNotSync to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapNTPNotSync(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 12 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapNTPNotSync() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapNTPStopped()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapNTPStopped to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapNTPStopped(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 15 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapNTPStopped() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapEmkcResponding()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapEmkcResponding to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapEmkcResponding(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 4 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapEmkcResponding() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapSnmpAgentBooted()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapSnmpAgentBooted to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapSnmpAgentBooted(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 11 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapSnmpAgentBooted() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrapMeasuringPortDown()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrapMeasuringPortDown to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrapMeasuringPortDown(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 5 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrapMeasuringPortDown() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}
/*****************************************************************************
 *	Function Name	: SendV2TrapOfmaxEmkcTrap1PpsRefReconnect()
 *
 *	Args			: 1. Referrence of the varBind vector.
 *					  2. Flag to say about TRAP2 or INFORM PDU (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This function will create and send a trap 
 *					  message of name maxEmkcTrap1PpsRefReconnect to all 
 *					  registered managers.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
void SendV2TrapOfmaxEmkcTrap1PpsRefReconnect(Vector *extraVarBinds, U_CHAR informFlag)
{
	INT32	 i;
	Node	 *nodePtr;
	Node	 *nextNode;
	Vector	 *trapVect;
	SnmpPdu  *trapPdu;
	OID 	*sysUpTimeOid;
	OID 	*snmpTrapOid;
	OID 	*tempSnmpTrapVarVal;

	OID  snmpTrapVarVal[] = { 1, 3, 6, 1, 4, 1, 5597, 1, 4, 8 };
	INT32 snmpTrapVarValLen = sizeof(OID) * 10;

	DEBUGMSG1("\n\t@@@@@ Inside SendV2TrapOfmaxEmkcTrap1PpsRefReconnect() @@@@@\n");

	sysUpTimeOid = (OID *)__Calloc(sizeof(OID), gv_agentUpTimeOidLen);
	CHECK_NULL_RETURN_VOID(sysUpTimeOid);
	CopyOid(sysUpTimeOid, gv_agentUpTimeOid, gv_agentUpTimeOidLen);

	snmpTrapOid = (OID *)__Calloc(sizeof(OID), gv_snmpV2TrapOidLen);

	tempSnmpTrapVarVal = (OID *)__Calloc(1, snmpTrapVarValLen);

	if(snmpTrapOid == NULL || tempSnmpTrapVarVal == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		if(sysUpTimeOid != NULL) 
			__Free(sysUpTimeOid);

		if(tempSnmpTrapVarVal != NULL) 
			__Free(tempSnmpTrapVarVal);

		return;
	}

	CopyOid(snmpTrapOid, gv_snmpV2TrapOid, gv_snmpV2TrapOidLen);

	trapVect = (Vector *)__Calloc(1,sizeof(Vector));	CHECK_NULL_RETURN_VOID(trapVect);

	InitVector(trapVect, NULL);

	trapPdu = (SnmpPdu *)__Calloc(1,sizeof(SnmpPdu));
	if(trapPdu == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(trapVect);
		return;
	}
	trapPdu->time = GetAgentTime(TRUE);

	/* Add the sysUpTime to the trapVector */
	AddVarBind(trapVect,
				sysUpTimeOid,
				gv_agentUpTimeOidLen,
				(U_CHAR)(ASN_TIMETICKS | ASN_PRIMITIVE),
				(U_CHAR *)&trapPdu->time,
				sizeof(trapPdu->time),
				FALSE);

	/* Add the snmpTrapOid to the trapVector */
	CopyOid(tempSnmpTrapVarVal, snmpTrapVarVal, snmpTrapVarValLen/sizeof(OID));

	AddVarBind(trapVect,
				snmpTrapOid,
				gv_snmpV2TrapOidLen,
				ASN_OBJECT_ID,
				(U_CHAR *)tempSnmpTrapVarVal,
				snmpTrapVarValLen,
				TRUE);

	if (extraVarBinds != NULL)
	{	
		nodePtr = (Node *)ElementAt(extraVarBinds,0);
		for (i =0; i<extraVarBinds->size; i++)
		{
			nextNode = nodePtr->nextPtr;

			AddElement(trapVect, nodePtr);

			nodePtr = nodePtr->nextPtr;

			nodePtr = nextNode;

		}
	}

	if (informFlag == TRUE)
		trapPdu->command = SNMP_MSG_INFORM;
	else
		trapPdu->command =SNMP_MSG_TRAP2;

	/* Set trapPdu->version = SNMP_VERSION_3 for V3 traps */
	trapPdu->version = SNMP_VERSION_2c;
	trapPdu->community = NULL;
	trapPdu->errStatus = 0;
	trapPdu->errIndex = 0;
	trapPdu->varBindVector = trapVect;

	AddMasterAgentsTrapPduToQueue(trapPdu);
	if (extraVarBinds != NULL)
	{	
		__Free(extraVarBinds);
	}
}

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkctraps.c
 *****************************************************************************/
