/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgsnmptraprectablehdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgsnmptraprectable. 
 *
 *				  "Description" 
 *
 *				  "Row Description"
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:56 MSK 2018
 *
 *  See Also	: maxemkccfgsnmptraprectableftov.c,
 *				  maxemkccfgsnmptraprectableinstru.c,
 *				  maxemkccfgsnmptraprectable.h,
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
#define MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC
#include "maxemkccfgsnmptraprectable.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgSnmpTrapRecTableCell=
	{
		"MAX-EMKC:MaxEmkcCfgSnmpTrapRecTable",
		SNMP_VERSION_2c, gv_maxEmkcCfgSnmpTrapRecTableOid,
		MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN, TABLE,
		gv_maxEmkcCfgSnmpTrapRecTableSubIdList,
		MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN,
		gv_maxEmkcCfgSnmpTrapRecTableSubIdListAccess,
		gv_maxEmkcCfgSnmpTrapRecTableSubIdListDataTypes,
		MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECROWSTATUS,
		MaxEmkcCfgSnmpTrapRecTableProcessRequests,
		MaxEmkcCfgSnmpTrapRecTableProcessReadReq,
		MaxEmkcCfgSnmpTrapRecTableProcessWriteReq,
		UpdateMaxEmkcCfgSnmpTrapRecTable,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgSnmpTrapRecTable()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgSnmpTrapRecTable".
 *
 *	See Also		: CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableEntry().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgSnmpTrapRecTable(void)
{

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgSnmpTrapRecTable() @@@@@\n");

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgSnmpTrapRecTableCell) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the module maxEmkcCfgSnmpTrapRecTable\n");
		return;
	}

	/* Initialize the vector */
	InitVector(&gv_maxEmkcCfgSnmpTrapRecTableVector, &gfptr_sortFuncPtr);

#ifdef FILE_TO_VECTOR
	/* Read  all the entries of "maxEmkcCfgSnmpTrapRecTable" from the file */
	ReadFromMaxEmkcCfgSnmpTrapRecTableFile();
#endif

	if (gv_maxEmkcCfgSnmpTrapRecTableVector.size == 0)
	{
		/* Add the created instance to the vector gv_maxEmkcCfgSnmpTrapRecTableVector. */
		CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableEntry(1, 1, 
						(U_CHAR *)"255.255.255.0",13, 
						(U_CHAR *)"",2);

#ifdef FILE_TO_VECTOR
	/* Write all the entries of "maxEmkcCfgSnmpTrapRecTable" into the file */
	WriteToMaxEmkcCfgSnmpTrapRecTableFile();
#endif
	}
}

/*****************************************************************************
 *	Function Name	: CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableEntry()
 *
 *	Args			: 1. Table column maxEmkcSnmpTrapRecIndex (IN).
 *					  2. Table column maxEmkcCfgSnmpTrapRecRowStatus (IN).
 *					  3. Table column maxEmkcCfgSnmpTrapRecAddress (IN).
 *					  4. Table column maxEmkcCfgSnmpRecCommunity (IN).
 *					  5. Table column maxEmkcCfgSnmpTrapRecVersion (IN).
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will take all columns value as input and create an
 *					  instance then add it to the vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableEntry(U_INT32 maxEmkcSnmpTrapRecIndex, INT32 maxEmkcCfgSnmpTrapRecRowStatus, U_CHAR *maxEmkcCfgSnmpTrapRecAddress, INT32 maxEmkcCfgSnmpTrapRecAddressLen , U_CHAR *maxEmkcCfgSnmpRecCommunity, INT32 maxEmkcCfgSnmpTrapRecVersion)
{
	OID		*inst;
	INT32	instLen;
	CHAR	retVal;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableEntry() @@@@@\n");

	inst = CreateMaxEmkcCfgSnmpTrapRecTableInstance(
									&instLen, maxEmkcSnmpTrapRecIndex);

	CHECK_NULL_RETURN_ERROR(inst);

	/* Add the created instance to the vector gv_maxEmkcCfgSnmpTrapRecTableVector. */
	retVal = CreateAndAddMaxEmkcCfgSnmpTrapRecTableEntry(
				inst, instLen, maxEmkcSnmpTrapRecIndex,
				maxEmkcCfgSnmpTrapRecRowStatus,
				maxEmkcCfgSnmpTrapRecAddress,
				maxEmkcCfgSnmpTrapRecAddressLen, maxEmkcCfgSnmpRecCommunity,
				maxEmkcCfgSnmpTrapRecVersion);

	/* Free the reserved memory */
	__Free(inst);
	return retVal;
}

/*****************************************************************************
 *	Function Name	: CreateAndAddMaxEmkcCfgSnmpTrapRecTableEntry()
 *
 *	Args			: 1. Instance Oid (IN).
 *					  2. Instance Oid Length (IN).
 *					  3. Table column maxEmkcSnmpTrapRecIndex (IN).
 *					  4. Table column maxEmkcCfgSnmpTrapRecRowStatus (IN).
 *					  5. Table column maxEmkcCfgSnmpTrapRecAddress (IN).
 *					  6. Table column maxEmkcCfgSnmpRecCommunity (IN).
 *					  7. Table column maxEmkcCfgSnmpTrapRecVersion (IN).
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will take all columns value and its instance value
 *					  as input and add create an entry then add it to the
 *					  vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR CreateAndAddMaxEmkcCfgSnmpTrapRecTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcSnmpTrapRecIndex, INT32 maxEmkcCfgSnmpTrapRecRowStatus, U_CHAR *maxEmkcCfgSnmpTrapRecAddress, INT32 maxEmkcCfgSnmpTrapRecAddressLen , U_CHAR *maxEmkcCfgSnmpRecCommunity, INT32 maxEmkcCfgSnmpTrapRecVersion)
{

	/*
	 * Instance			: It has the value. No Need to allocate memory.
	 */

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddMaxEmkcCfgSnmpTrapRecTableEntry() @@@@@\n");

	/*
	 * Memory for "maxEmkcCfgSnmpTrapRecAddress",
	 * "maxEmkcCfgSnmpRecCommunity" in the parameter list for a new row will 
	 * be allocated and the value will be copied. It will not be freed here. 
	 * If the user invokes this function, then the memory allocated for the
	 * above variables should be freed where it is invoked explicitly.
	 */

	if (!( (maxEmkcCfgSnmpTrapRecRowStatus == SNMP_ROW_ACTIVE) || 
		(maxEmkcCfgSnmpTrapRecRowStatus == SNMP_ROW_NOTINSERVICE) || 
		(maxEmkcCfgSnmpTrapRecRowStatus == SNMP_ROW_NOTREADY) || 
		(maxEmkcCfgSnmpTrapRecRowStatus == SNMP_ROW_CREATEANDWAIT) ))
	{
		DEBUGMSG1("Wrong Value for RowStatus Column!!!\n");
		return FAILURE;
	}

	entryPtr = (Entry *)(__Calloc(1, sizeof(Entry)));

	CHECK_NULL_RETURN_ERROR(entryPtr);

	entryPtr->instance = (OID *)(__Calloc(instanceLen, sizeof(OID)));

	if(entryPtr->instance == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}
	CopyOid(entryPtr->instance, instance, instanceLen);
	entryPtr->instanceLen = instanceLen;

	maxEmkcCfgSnmpTrapRecTableEntryPtr = (MaxEmkcCfgSnmpTrapRecTableEntry *)(__Calloc(1,
											sizeof(MaxEmkcCfgSnmpTrapRecTableEntry)));

	if(maxEmkcCfgSnmpTrapRecTableEntryPtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	/* Assigning the index column 1  "maxEmkcSnmpTrapRecIndex"  of type  " U_INT32  " */
	maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcSnmpTrapRecIndex = maxEmkcSnmpTrapRecIndex;

	/* Assigning the column 2  "maxEmkcCfgSnmpTrapRecRowStatus"  of type  " INT32  " */
	maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus = maxEmkcCfgSnmpTrapRecRowStatus;

	/* Assigning the column 3  "maxEmkcCfgSnmpTrapRecAddress"  of type  " U_CHAR * " */
	maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddressLen = maxEmkcCfgSnmpTrapRecAddressLen;
	AllocateAndDoMemcpy(
				&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress,
				maxEmkcCfgSnmpTrapRecAddress, maxEmkcCfgSnmpTrapRecAddressLen);

	/* Assigning the column 4  "maxEmkcCfgSnmpRecCommunity"  of type  " U_CHAR * " */
	AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity,
				(CHAR *)maxEmkcCfgSnmpRecCommunity);

	/* Assigning the column 5  "maxEmkcCfgSnmpTrapRecVersion"  of type  " INT32  " */
	maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion = maxEmkcCfgSnmpTrapRecVersion;


	entryPtr->ptr = maxEmkcCfgSnmpTrapRecTableEntryPtr;
	nodePtr = (Node *)(__Calloc(1,sizeof(Node)));

	if(nodePtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	nodePtr->refPtr = entryPtr;

	if (AddElement(&gv_maxEmkcCfgSnmpTrapRecTableVector, nodePtr) == FAILURE)
	{
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(entryPtr);
		__Free(nodePtr);
	}

	return SUCCESS;

}
/*****************************************************************************
 *	Function Name	: CreateMaxEmkcCfgSnmpTrapRecTableInstance()
 *
 *	Args			: 1. Instance Oid Length(IN/OUT).
 *					  2. Table column maxEmkcSnmpTrapRecIndex (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from the method
 *					  CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableTableEntry().
 *					  It is used to create a oid representation of the instance
 *					  value by taking table index columns value as input.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
OID *CreateMaxEmkcCfgSnmpTrapRecTableInstance(INT32 *instanceLen, U_INT32 maxEmkcSnmpTrapRecIndex)
{
	OID		*inst;
	INT32	instLen;

	DEBUGMSG1("\n\t@@@@@ Inside CreateMaxEmkcCfgSnmpTrapRecTableInstance() @@@@@\n");

	/* The index is an integer */
	instLen = 1;
	inst = (OID *)__Calloc(sizeof(OID), instLen);
	CHECK_NULL_RETURN_NULL(inst);
	inst[0] = maxEmkcSnmpTrapRecIndex;

	*instanceLen = instLen;
	return inst;
}
/*****************************************************************************
 *	Function Name	: MaxEmkcCfgSnmpTrapRecTableProcessRequests()
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
CHAR MaxEmkcCfgSnmpTrapRecTableProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
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
	INT16	instLen;
	OID		inst[MAX_INST_LEN];

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgSnmpTrapRecTableProcessRequests() @@@@@\n");

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

		instLen = GetInstance(varBindPtr->oid, varBindPtr->oidLen,
								MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN+2, inst);

#ifdef DEBUG
		DEBUGMSG1("The received instance is \n");
		PRINTOID(inst,instLen);
#endif

		nodePtr = nodePtr->nextPtr;
	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgSnmpTrapRecTableProcessReadReq()
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
U_CHAR *MaxEmkcCfgSnmpTrapRecTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
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
	Entry	*entryPtr;
	MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr;


	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgSnmpTrapRecTableProcessReadReq() @@@@@\n");

	retPtr = NULL;
	maxEmkcCfgSnmpTrapRecTableEntryPtr = NULL;

	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgSnmpTrapRecTableVector
	 */

	entryPtr = GetEntry(pduType, reqOid, reqOidLen, gv_maxEmkcCfgSnmpTrapRecTableOid,
							MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN,
							&gv_maxEmkcCfgSnmpTrapRecTableVector,
							gv_maxEmkcCfgSnmpTrapRecTableSubIdList,
							MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN);

	if (entryPtr == NULL)
	{
		/* end of table or group is reached */
		DEBUGMSG1("The given instance is not available in the table\n");
		*status = SNMP_NOSUCHINSTANCE;
		return NULL;
	}

	maxEmkcCfgSnmpTrapRecTableEntryPtr = (MaxEmkcCfgSnmpTrapRecTableEntry *)(entryPtr->ptr);

	column = reqOid[MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCSNMPTRAPRECINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECROWSTATUS:
				retPtr = GetMaxEmkcCfgSnmpTrapRecRowStatus(maxEmkcCfgSnmpTrapRecTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECADDRESS:
				retPtr = GetMaxEmkcCfgSnmpTrapRecAddress(maxEmkcCfgSnmpTrapRecTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPRECCOMMUNITY:
				retPtr = GetMaxEmkcCfgSnmpRecCommunity(maxEmkcCfgSnmpTrapRecTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECVERSION:
				retPtr = GetMaxEmkcCfgSnmpTrapRecVersion(maxEmkcCfgSnmpTrapRecTableEntryPtr,
													 varValLen, status);
				break;

		default:
				/* Invalid column number */
				*status = SNMP_NOSUCHOBJECT;
				retPtr = NULL;
	}
	return retPtr;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgSnmpTrapRecTableProcessWriteReq()
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
U_CHAR *MaxEmkcCfgSnmpTrapRecTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
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
	OID		inst[MAX_INST_LEN];
	U_INT32	maxEmkcSnmpTrapRecIndex_IndVal;
	INT32	maxEmkcSnmpTrapRecIndex_IndValLen;
	OID	*delInst;
	INT32	delInstLen;
	INT16	instLen;
	U_CHAR	newRowEntryFlag;
	U_CHAR	newRowFlag;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	Entry	*delEntryPtr;

	MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgSnmpTrapRecTableProcessWriteReq() @@@@@\n");

	retPtr = NULL;
	newRowEntryFlag = UNSET;
	newRowFlag = FALSE;
	maxEmkcCfgSnmpTrapRecTableEntryPtr = NULL;

	/* Delete the given instance from the vector */
	if (*status == DELETE_ENTRY)
	{
		instLen = GetInstance(reqOid, reqOidLen,MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN+2, inst);
		DEBUGMSG1("Deleting the instance.....   ");
		PRINTOID(inst,instLen);
		entryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgSnmpTrapRecTableVector, inst,
				instLen);
		/* Deleting an instance from the table */
		if (entryPtr != NULL)
		{
			FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(entryPtr);
		}
		else
		{
			/* It should not be invoked at any cost */
			*status = SNMP_ERR_UNDOFAILED;
		}
		return NULL;
	}
	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgSnmpTrapRecTableVector
	 */

	entryPtr = GetEntry(SNMP_MSG_SET, reqOid, &reqOidLen,
				gv_maxEmkcCfgSnmpTrapRecTableOid, MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN,
				&gv_maxEmkcCfgSnmpTrapRecTableVector, gv_maxEmkcCfgSnmpTrapRecTableSubIdList,
				MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN);

	/* 
	 * Given instance is not available in the table, 
	 * create a new instance.
	 */

	if (entryPtr == NULL)
	{
		if (*status == MODIFY_ENTRY)
		{
			/* It should not be invoked at any cost */
			*status = SNMP_ERR_UNDOFAILED;
			return NULL;
		}

		/* Get the instance from the received oid */
		instLen = GetInstance(reqOid, reqOidLen, MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN + 2, inst);

		/* Checking the validity of the given instance */
		if(CheckInstances(gv_maxEmkcCfgSnmpTrapRecTableIndexDataTypes, NO,
					MAXEMKCCFGSNMPTRAPRECTABLE_INDEX_LEN, inst, instLen) == FALSE)
		{
			DEBUGMSG1("1.Instance is not proper\n");
					if(pduVersion == 0)
		{
			*status = SNMP_ERR_NOSUCHNAME;
					}
			else		{
			*status = SNMP_NOSUCHOBJECT;
					}
			return NULL;
		}


		if(*status != VALIDATE)
		{
			newRowFlag = TRUE;

			/* Create a new entry add it to the vector */
			entryPtr = CreateEntryAndSetInstance(
							&gv_maxEmkcCfgSnmpTrapRecTableVector, inst, instLen);

			CHECK_NULL_SET_STATUS(entryPtr);

			entryPtr->ptr = (MaxEmkcCfgSnmpTrapRecTableEntry *)__Calloc(1,
								sizeof(MaxEmkcCfgSnmpTrapRecTableEntry));

			CHECK_NULL_SET_STATUS_AND_FREE(entryPtr->ptr);

			maxEmkcCfgSnmpTrapRecTableEntryPtr = (MaxEmkcCfgSnmpTrapRecTableEntry *)(entryPtr->ptr);

			/* This part will assign value for the index columns */ 
			maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcSnmpTrapRecIndex = inst[0];

			/*This part will add default values for the remaining columns */
			maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus = 
											SNMP_ROW_NONEXISTENT;

			maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddressLen = 13;
			AllocateAndDoMemcpy(
				&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress,(U_CHAR *)
				"255.255.255.0", 13);

			AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity,
				"");

			maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion = 2;

		}
		else
		{
			maxEmkcSnmpTrapRecIndex_IndVal = inst[0];
			retPtr = (U_CHAR *)ConvertToStringFromUnsignedInteger((U_INT32 *)&maxEmkcSnmpTrapRecIndex_IndVal,&maxEmkcSnmpTrapRecIndex_IndValLen);
			if(retPtr != NULL)
			{
				__Free(retPtr);
				retPtr = NULL;
			}
			newRowEntryFlag = SET;
		}
	}
	else
	{
		maxEmkcCfgSnmpTrapRecTableEntryPtr = (MaxEmkcCfgSnmpTrapRecTableEntry *)(entryPtr->ptr);
	}


	column = reqOid[MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCSNMPTRAPRECINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECROWSTATUS:
				retPtr = SetMaxEmkcCfgSnmpTrapRecRowStatus(maxEmkcCfgSnmpTrapRecTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECADDRESS:
				retPtr = SetMaxEmkcCfgSnmpTrapRecAddress(maxEmkcCfgSnmpTrapRecTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPRECCOMMUNITY:
				retPtr = SetMaxEmkcCfgSnmpRecCommunity(maxEmkcCfgSnmpTrapRecTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECVERSION:
				retPtr = SetMaxEmkcCfgSnmpTrapRecVersion(maxEmkcCfgSnmpTrapRecTableEntryPtr,
										 varVal, varValLen, status);
				break;

		default:
				/* Invalid column number */
				*status = SNMP_NOSUCHOBJECT;
				retPtr = NULL;
	}

	/* Deleting the given instance from the vector, if the new row fails to add */
	if (*status != VALIDATE && retPtr == NULL && newRowFlag)
	{

		delInst = CreateMaxEmkcCfgSnmpTrapRecTableInstance(
					&delInstLen, maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcSnmpTrapRecIndex);
		delEntryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgSnmpTrapRecTableVector, delInst, delInstLen);
		/* Deleting an instance from the table */
		if (delEntryPtr != NULL)
		{
			FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(delEntryPtr);
		}
		__Free(delInst);
		*status = SNMP_ERR_INCONSISTENTVALUE;
	}

	if(newRowEntryFlag == SET)
	{
		return NULL;
	}

	return retPtr;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpTrapRecTableInfo()
 *
 *	Args			: 1. Starting Row index (IN).
 *					  2. Number of rows (IN).
 *					  3. Flag about remaining number of rows (OUT).
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will return the table vector reference,
 *					  before that it will verify the total size of
 *					  the table and set flag value.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
Vector *GetMaxEmkcCfgSnmpTrapRecTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag)
{
	INT32 remRows;

	DEBUGMSG1("\n\t@@@@@ Inside *GetMaxEmkcCfgSnmpTrapRecTableInfo() @@@@@\n");

	remRows = gv_maxEmkcCfgSnmpTrapRecTableVector.size - startIdx - numOfRows;

	/*
	 * This will check for the presence of remaining rows and will set
	 * the flag variable if present.
	 */

	if (remRows > 0)
	{
		TRACEMSG2("The number of rows remaining is %d \n", remRows);
		*flag = TRUE;
	}

	return &gv_maxEmkcCfgSnmpTrapRecTableVector;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgSnmpTrapRecTable()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgSnmpTrapRecTable.
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
CHAR UpdateMaxEmkcCfgSnmpTrapRecTable(U_CHAR command)
{
	CHAR retVal;

	Node	*nodePtr;
	Entry	*entryPtr;
	Node	*tempNodePtr;
	MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgSnmpTrapRecTable() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
		if(gv_maxEmkcCfgSnmpTrapRecTableVector.size > 0 )
		{
			nodePtr = ElementAt(&gv_maxEmkcCfgSnmpTrapRecTableVector, 0);

			while(nodePtr)
			{
				entryPtr = (Entry *)nodePtr->refPtr;

				maxEmkcCfgSnmpTrapRecTableEntryPtr =
						(MaxEmkcCfgSnmpTrapRecTableEntry *)(entryPtr->ptr);

				/*
				 * If the maxEmkcCfgSnmpTrapRecRowStatus value is ROW_NONEXISTENT then
				 * delete the row from the vector &gv_maxEmkcCfgSnmpTrapRecTableVector.
				 */

				if (maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus
											== SNMP_ROW_NONEXISTENT)
				{
					__Free(entryPtr->instance);

					FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(entryPtr);

					tempNodePtr = nodePtr->nextPtr;

					DeleteElement(&gv_maxEmkcCfgSnmpTrapRecTableVector, nodePtr);

					nodePtr = tempNodePtr;

					continue;
				}
				nodePtr = nodePtr->nextPtr;
			}
		}

#ifdef FILE_TO_VECTOR
		/* Write all the entries of "maxEmkcCfgSnmpTrapRecTable" into the file */
		WriteToMaxEmkcCfgSnmpTrapRecTableFile();
#endif
	}

	return retVal;
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory()
 *
 *	Args			: 1. Reference of the table entry (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from
 *					  FreeMaxEmkcCfgSnmpTrapRecTableVector(). This method is 
 *					  used to free the reserved memory for an entry while
 *					  deleting an entry from the vector. The user can also
 *					  call this method to free a particular entry in the
 *					  table vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(Entry *entryPtr)
{
	/*
	 * The entry memory will be freed here including all the allocated columns.
	 */

	MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory() @@@@@\n");

	maxEmkcCfgSnmpTrapRecTableEntryPtr = (MaxEmkcCfgSnmpTrapRecTableEntry *)entryPtr->ptr;

	/* Free the reserved memory */
	if (maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress != NULL)
		__Free(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress);
	if (maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity != NULL)
		__Free(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity);
	
	__Free(maxEmkcCfgSnmpTrapRecTableEntryPtr);
	__Free(entryPtr);
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgSnmpTrapRecTableVector()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: Free the gv_maxEmkcCfgSnmpTrapRecTableVector.
 *
 *	See Also		: FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgSnmpTrapRecTableVector()
{
	Node	*nodePtr;
	entry	*entryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgSnmpTrapRecTableVector() @@@@@\n");

	/*
	 * Each element will be taken from the vector
	 * "gv_maxEmkcCfgSnmpTrapRecTableVector" and their instance and
	 * column values will be freed here.
	 */

	if(gv_maxEmkcCfgSnmpTrapRecTableVector.size == 0)
	{
		return;
	}

	nodePtr = (Node *)ElementAt(&gv_maxEmkcCfgSnmpTrapRecTableVector, 0);

	while (nodePtr)
	{
		entryPtr = (Entry *)nodePtr->refPtr;

		__Free(entryPtr->instance);
		FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(entryPtr);

		nodePtr = nodePtr->nextPtr;

		DeleteElementAt(&gv_maxEmkcCfgSnmpTrapRecTableVector, 0);
	}
}




#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsnmptraprectablehdlr.c
 *****************************************************************************/
