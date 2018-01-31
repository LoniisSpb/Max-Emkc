/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgsnmphdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgsnmp.
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:58 MSK 2018
 *
 *  See Also	: maxemkccfgsnmpftov.c,
 *				  maxemkccfgsnmpinstru.c,
 *				  maxemkccfgsnmp.h,
 *				  maxemkctraps.c.
 *
 *  Docs		: Yes. 
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
#include "snmpincludes.h"
#define MAXEMKCCFGSNMP_PUBLIC
#include "maxemkccfgsnmp.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgSnmpCell1 =
	{
		"MAX-EMKC:MaxEmkcCfgSnmpGroup1",
		SNMP_VERSION_2c, gv_maxEmkcCfgSnmpGroup1Oid,
		MAXEMKCCFGSNMP_OID_LEN, NOT_TABLE,
		gv_maxEmkcCfgSnmpGroup1SubIdList,
		MAXEMKCCFGSNMP_GROUP1_SUBID_LEN,
		gv_maxEmkcCfgSnmpGroup1SubIdListAccess,
		gv_maxEmkcCfgSnmpGroup1SubIdListDataTypes,
		0,MaxEmkcCfgSnmpProcessRequests,
		MaxEmkcCfgSnmpProcessReadReq,
		MaxEmkcCfgSnmpProcessWriteReq,
		UpdateMaxEmkcCfgSnmp,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgSnmp()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgSnmp".
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgSnmp(void)
{
	CHAR ftovFlag;

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgSnmp() @@@@@\n");

	ftovFlag = FAILURE;

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgSnmpCell1) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the modulemaxEmkcCfgSnmp\n");
		return;
	}

#ifdef FILE_TO_VECTOR
	/* Read all the values of "maxEmkcCfgSnmp" from the file */
	ftovFlag = ReadFromMaxEmkcCfgSnmpFile();
#endif

	if(ftovFlag == FAILURE)
	{

		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpReadCommunity" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpReadCommunity,
				"public");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpWriteCommunity" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpWriteCommunity,
				"privat");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpContact" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpContact,
				"");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpLocation" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpLocation,
				"");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3UserName" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpV3UserName,
				"");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3UserRights" */
		gv_maxEmkcCfgSnmpV3UserRights = 1;

		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3Context" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpV3Context,
				"");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3SecurityLevel" */
		gv_maxEmkcCfgSnmpV3SecurityLevel = 2;

		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3AuthProtocol" */
		gv_maxEmkcCfgSnmpV3AuthProtocol = 1;

		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3AuthPassphrase" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpV3AuthPassphrase,
				"");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3PrivProtocol" */
		gv_maxEmkcCfgSnmpV3PrivProtocol = 1;

		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpV3PrivPassphrase" */
		AllocateAndDoStrcpy(
				(CHAR **)&gv_maxEmkcCfgSnmpV3PrivPassphrase,
				"");
		
		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpTrapRetries" */
		gv_maxEmkcCfgSnmpTrapRetries = 3;

		/* Assigning the default value for scalar object "gv_maxEmkcCfgSnmpTrapTimeout" */
		gv_maxEmkcCfgSnmpTrapTimeout = 3;

		/* Assigning the default value for scalar object "gv_maxEmkcCfgSmnpEnabledVersion" */
		gv_maxEmkcCfgSmnpEnabledVersion = 3;

#ifdef FILE_TO_VECTOR
	/* Write the values of "maxEmkcCfgSnmp" into the file */
	WriteToMaxEmkcCfgSnmpFile();
#endif
	}

}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgSnmpProcessRequests()
 *
 *	Args			: 1. PduType (GET/GET-NEXT) (IN/OUT).
 *					  2. VarBinds vector (IN/OUT).
 *					  3. Future Use.
 *					  4. Future Use.
 *
 *	Returns			: SUCCESS or FAILURE. 
 *
 *	Task			: This method will be called from the agent api for
 *					  all the requests (GET/GET-NEXT/SET) with received
 *					  pduType and  varBind vector before processing the
 *					  received varbinds. The purpose of this method call
 *					  is, the user can know the set of varBinds (OIDs')
 *					  received for a listener. Using these inputs user
 *					  may do some validation or call his application
 *					  method and update the local data structure. User
 *					  has to specify the error status and error index.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: Return value of method is not handled in AgentAPI.
 *****************************************************************************/
CHAR MaxEmkcCfgSnmpProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
{
	/*
	 * Varbinds			: Varbinds have all the received varbinds(oid and
	 *					  value)from the manager.
	 *
	 * Errstatus		: Single "Long" storage pointer variable.
	 * 					  User can update this incase of any error.
	 * 					  No nead to allocate. Memory should not be freed.
	 *
	 * ErrIndex			: Single "Long" storage pointer variable.
	 * 					  User can update this incase of any error.
	 * 					  No nead to allocate. Memory should not be freed.
	 */

	INT16	i;
	Node	*nodePtr;
	VarBind	*varBindPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgSnmpProcessRequests() @@@@@\n");

	/*
	 * The varBind vector have a set of varBinds requested
	 * for this listener. User can do the validation or extra
	 * processing over the received varBinds.
	 */


	for(i=0; i<varBinds->size; i++)
	{
		nodePtr = (Node *)ElementAt(varBinds, i);
		varBindPtr = (VarBind *)nodePtr->refPtr;

#ifdef DEBUG
		DEBUGMSG2("The varBind index is %d\n", i+1);
		DEBUGMSG1("The received oid is \n");
		PRINTOID(varBindPtr->oid, varBindPtr->oidLen);
#endif

	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgSnmpProcessReadReq()
 *
 *	Args			: 1. PduType (GET/GET-NEXT) (IN).
 *					  2. Requested Oid (IN).
 *					  3. Requested Oid Length (IN).
 *					  4. Variable value length (IN).
 *					  5. It is used to return snmp error or exception(IN/OUT).
 *
 *	Returns			: Pointer to the return variable value.
 *
 *	Task			: This method is called from agent api (pdureqhdlr.c) when a 
 *					  get/get-next request is made from the manager. This method 
 *					  will identify the exact scalar/table column for which the 
 *					  request is made and call the corresponding get method which 
 *					  is available  in the instrument file. output from this 
 *					  function will be the value of the requested variable, 
 *					  length of the variable,  the error status if any.
 *
  *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *MaxEmkcCfgSnmpProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
{

	/*
	 * reqOid			: Requested OID, User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * reqOidLen		: length of reqOid. User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * varValLen		: Updated inside the method. No nead to allocate the
	 *					  memory.
	 *
	 * Status			: Updated incase of error. No nead to allocate the
	 *					  memory.
	 */

	OID		column;
	U_CHAR	*retPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgSnmpProcessReadReq() @@@@@\n");

	retPtr = NULL;
	column = reqOid[MAXEMKCCFGSNMP_OID_LEN-1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPREADCOMMUNITY:
				retPtr = GetMaxEmkcCfgSnmpReadCommunity( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPWRITECOMMUNITY:
				retPtr = GetMaxEmkcCfgSnmpWriteCommunity( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPCONTACT:
				retPtr = GetMaxEmkcCfgSnmpContact( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPLOCATION:
				retPtr = GetMaxEmkcCfgSnmpLocation( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3USERNAME:
				retPtr = GetMaxEmkcCfgSnmpV3UserName( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3USERRIGHTS:
				retPtr = GetMaxEmkcCfgSnmpV3UserRights( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3CONTEXT:
				retPtr = GetMaxEmkcCfgSnmpV3Context( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3SECURITYLEVEL:
				retPtr = GetMaxEmkcCfgSnmpV3SecurityLevel( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3AUTHPROTOCOL:
				retPtr = GetMaxEmkcCfgSnmpV3AuthProtocol( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3AUTHPASSPHRASE:
				retPtr = GetMaxEmkcCfgSnmpV3AuthPassphrase( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3PRIVPROTOCOL:
				retPtr = GetMaxEmkcCfgSnmpV3PrivProtocol( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3PRIVPASSPHRASE:
				retPtr = GetMaxEmkcCfgSnmpV3PrivPassphrase( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPTRAPRETRIES:
				retPtr = GetMaxEmkcCfgSnmpTrapRetries( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPTRAPTIMEOUT:
				retPtr = GetMaxEmkcCfgSnmpTrapTimeout( varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSMNPENABLEDVERSION:
				retPtr = GetMaxEmkcCfgSmnpEnabledVersion( varValLen, status);
				break;

		default:
				/* Invalid column number */
				*status = SNMP_NOSUCHOBJECT;
				retPtr = NULL;
	}
	return retPtr;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgSnmpProcessWriteReq()
 *
 *	Args			: 1. Requested Oid (IN).
 *					  2. Requested Oid Length (IN).
 *					  3. Variable value (IN).
 *					  4. Variable value length (IN).
 *					  5. It is used for atomic set implementation and
 * 						 to return snmp error or exception(IN/OUT).
 *
 *	Returns			: Pointer to the return variable value.
 *
 *	Task			: This method is called from the agent api (pdureqhdlr.c) 
 *					  when a set  request is made from the manager. This method 
 *					  will identify the exact scalar/table column for which 
 *					  the request is made and call the corresponding  set method 
 *					  which is available in the instrument file.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *MaxEmkcCfgSnmpProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{

	/*
	 * reqOid			: Requested OID, User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * reqOidLen		: length of reqOid. User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * varVal			: It has the value. No nead to allocate the memory.
	 *
	 * varValLen		: It has the value and updated inside the method.
	 *					  No nead to allocate the memory.
	 *
	 * Status			: It has the value and updated incase of error.
	 *					  No nead to allocate the memory.
	 */

	OID		column;
	U_CHAR	*retPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgSnmpProcessWriteReq() @@@@@\n");

	retPtr = NULL;

	column = reqOid[MAXEMKCCFGSNMP_OID_LEN-1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPREADCOMMUNITY:
				retPtr = SetMaxEmkcCfgSnmpReadCommunity( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPWRITECOMMUNITY:
				retPtr = SetMaxEmkcCfgSnmpWriteCommunity( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPCONTACT:
				retPtr = SetMaxEmkcCfgSnmpContact( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPLOCATION:
				retPtr = SetMaxEmkcCfgSnmpLocation( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3USERNAME:
				retPtr = SetMaxEmkcCfgSnmpV3UserName( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3USERRIGHTS:
				retPtr = SetMaxEmkcCfgSnmpV3UserRights( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3CONTEXT:
				retPtr = SetMaxEmkcCfgSnmpV3Context( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3SECURITYLEVEL:
				retPtr = SetMaxEmkcCfgSnmpV3SecurityLevel( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3AUTHPROTOCOL:
				retPtr = SetMaxEmkcCfgSnmpV3AuthProtocol( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3AUTHPASSPHRASE:
				retPtr = SetMaxEmkcCfgSnmpV3AuthPassphrase( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3PRIVPROTOCOL:
				retPtr = SetMaxEmkcCfgSnmpV3PrivProtocol( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3PRIVPASSPHRASE:
				retPtr = SetMaxEmkcCfgSnmpV3PrivPassphrase( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPTRAPRETRIES:
				retPtr = SetMaxEmkcCfgSnmpTrapRetries( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPTRAPTIMEOUT:
				retPtr = SetMaxEmkcCfgSnmpTrapTimeout( varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMP_MAXEMKCCFGSMNPENABLEDVERSION:
				retPtr = SetMaxEmkcCfgSmnpEnabledVersion( varVal, varValLen, status);
				break;

		default:
				/* Invalid column number */
				*status = SNMP_NOSUCHOBJECT;
				retPtr = NULL;
	}


	return retPtr;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgSnmp()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgSnmp.
 *					  If FILE_TO_VECTOR is enabled then the corresponding
 *					  text file will be updated here. If the storagetype
 *					  is NoStorage then the user should call this method
 *					  to update the changes done by the management.The
 *					  user can also free the resources in this function
 *					  if required.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR UpdateMaxEmkcCfgSnmp(U_CHAR command)
{
	CHAR retVal;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgSnmp() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
#ifdef FILE_TO_VECTOR
		/* Write the values of "maxEmkcCfgSnmp" into the file */
		WriteToMaxEmkcCfgSnmpFile();
#endif
	}

	return retVal;
}

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsnmphdlr.c
 *****************************************************************************/
