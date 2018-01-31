/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgy1564tablehdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgy1564table. 
 *
 *				  "Description" 
 *
 *				  "Row Description"
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:36 MSK 2018
 *
 *  See Also	: maxemkccfgy1564tableftov.c,
 *				  maxemkccfgy1564tableinstru.c,
 *				  maxemkccfgy1564table.h,
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
#define MAXEMKCCFGY1564TABLE_PUBLIC
#include "maxemkccfgy1564table.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgY1564TableCell=
	{
		"MAX-EMKC:MaxEmkcCfgY1564Table",
		SNMP_VERSION_2c, gv_maxEmkcCfgY1564TableOid,
		MAXEMKCCFGY1564TABLE_OID_LEN, TABLE,
		gv_maxEmkcCfgY1564TableSubIdList,
		MAXEMKCCFGY1564TABLE_SUBID_LEN,
		gv_maxEmkcCfgY1564TableSubIdListAccess,
		gv_maxEmkcCfgY1564TableSubIdListDataTypes,
		MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TABLEROWSTATUS,
		MaxEmkcCfgY1564TableProcessRequests,
		MaxEmkcCfgY1564TableProcessReadReq,
		MaxEmkcCfgY1564TableProcessWriteReq,
		UpdateMaxEmkcCfgY1564Table,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgY1564Table()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgY1564Table".
 *
 *	See Also		: CreateAndAddNewMaxEmkcCfgY1564TableEntry().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgY1564Table(void)
{

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgY1564Table() @@@@@\n");

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgY1564TableCell) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the module maxEmkcCfgY1564Table\n");
		return;
	}

	/* Initialize the vector */
	InitVector(&gv_maxEmkcCfgY1564TableVector, &gfptr_sortFuncPtr);

#ifdef FILE_TO_VECTOR
	/* Read  all the entries of "maxEmkcCfgY1564Table" from the file */
	ReadFromMaxEmkcCfgY1564TableFile();
#endif

	if (gv_maxEmkcCfgY1564TableVector.size == 0)
	{
		/* Add the created instance to the vector gv_maxEmkcCfgY1564TableVector. */
		CreateAndAddNewMaxEmkcCfgY1564TableEntry(1, 1, 
						(U_CHAR *)"",0, 10, 10, 10, 1, 1, 1, 1);

#ifdef FILE_TO_VECTOR
	/* Write all the entries of "maxEmkcCfgY1564Table" into the file */
	WriteToMaxEmkcCfgY1564TableFile();
#endif
	}
}

/*****************************************************************************
 *	Function Name	: CreateAndAddNewMaxEmkcCfgY1564TableEntry()
 *
 *	Args			: 1. Table column maxEmkcCfgY1564TableIndex (IN).
 *					  2. Table column maxEmkcCfgY1564TableRowStatus (IN).
 *					  3. Table column maxEmkcCfgY1564Options (IN).
 *					  4. Table column maxEmkcCfgY1564ThroughputTestDuration (IN).
 *					  5. Table column maxEmkcCfgY1564TestConfigStepDuration (IN).
 *					  6. Table column maxEmkcCfgY1564LearningTime (IN).
 *					  7. Table column maxEmkcCfgY1564Stream1TableRow (IN).
 *					  8. Table column maxEmkcCfgY1564Stream2TableRow (IN).
 *					  9. Table column maxEmkcCfgY1564Stream3TableRow (IN).
 *					  10. Table column maxEmkcCfgY1564Stream4TableRow (IN).
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
CHAR CreateAndAddNewMaxEmkcCfgY1564TableEntry(U_INT32 maxEmkcCfgY1564TableIndex, INT32 maxEmkcCfgY1564TableRowStatus, U_CHAR *maxEmkcCfgY1564Options, INT32 maxEmkcCfgY1564OptionsLen , U_INT32 maxEmkcCfgY1564ThroughputTestDuration, U_INT32 maxEmkcCfgY1564TestConfigStepDuration, U_INT32 maxEmkcCfgY1564LearningTime, U_INT32 maxEmkcCfgY1564Stream1TableRow, U_INT32 maxEmkcCfgY1564Stream2TableRow, U_INT32 maxEmkcCfgY1564Stream3TableRow, U_INT32 maxEmkcCfgY1564Stream4TableRow)
{
	OID		*inst;
	INT32	instLen;
	CHAR	retVal;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddNewMaxEmkcCfgY1564TableEntry() @@@@@\n");

	inst = CreateMaxEmkcCfgY1564TableInstance(
									&instLen, maxEmkcCfgY1564TableIndex);

	CHECK_NULL_RETURN_ERROR(inst);

	/* Add the created instance to the vector gv_maxEmkcCfgY1564TableVector. */
	retVal = CreateAndAddMaxEmkcCfgY1564TableEntry(
				inst, instLen, maxEmkcCfgY1564TableIndex,
				maxEmkcCfgY1564TableRowStatus, maxEmkcCfgY1564Options,
				maxEmkcCfgY1564OptionsLen,
				maxEmkcCfgY1564ThroughputTestDuration,
				maxEmkcCfgY1564TestConfigStepDuration,
				maxEmkcCfgY1564LearningTime, maxEmkcCfgY1564Stream1TableRow,
				maxEmkcCfgY1564Stream2TableRow,
				maxEmkcCfgY1564Stream3TableRow,
				maxEmkcCfgY1564Stream4TableRow);

	/* Free the reserved memory */
	__Free(inst);
	return retVal;
}

/*****************************************************************************
 *	Function Name	: CreateAndAddMaxEmkcCfgY1564TableEntry()
 *
 *	Args			: 1. Instance Oid (IN).
 *					  2. Instance Oid Length (IN).
 *					  3. Table column maxEmkcCfgY1564TableIndex (IN).
 *					  4. Table column maxEmkcCfgY1564TableRowStatus (IN).
 *					  5. Table column maxEmkcCfgY1564Options (IN).
 *					  6. Table column maxEmkcCfgY1564ThroughputTestDuration (IN).
 *					  7. Table column maxEmkcCfgY1564TestConfigStepDuration (IN).
 *					  8. Table column maxEmkcCfgY1564LearningTime (IN).
 *					  9. Table column maxEmkcCfgY1564Stream1TableRow (IN).
 *					  10. Table column maxEmkcCfgY1564Stream2TableRow (IN).
 *					  11. Table column maxEmkcCfgY1564Stream3TableRow (IN).
 *					  12. Table column maxEmkcCfgY1564Stream4TableRow (IN).
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
CHAR CreateAndAddMaxEmkcCfgY1564TableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgY1564TableIndex, INT32 maxEmkcCfgY1564TableRowStatus, U_CHAR *maxEmkcCfgY1564Options, INT32 maxEmkcCfgY1564OptionsLen , U_INT32 maxEmkcCfgY1564ThroughputTestDuration, U_INT32 maxEmkcCfgY1564TestConfigStepDuration, U_INT32 maxEmkcCfgY1564LearningTime, U_INT32 maxEmkcCfgY1564Stream1TableRow, U_INT32 maxEmkcCfgY1564Stream2TableRow, U_INT32 maxEmkcCfgY1564Stream3TableRow, U_INT32 maxEmkcCfgY1564Stream4TableRow)
{

	/*
	 * Instance			: It has the value. No Need to allocate memory.
	 */

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddMaxEmkcCfgY1564TableEntry() @@@@@\n");

	/*
	 * Memory for "maxEmkcCfgY1564Options" in the parameter list for 
	 * a new row will be allocated and the value will be copied. It will not 
	 * be freed here. If the user invokes this function, then the memory
	 * allocated for the above variables should be freed where it is invoked 
	 * explicitly.
	 */

	if (!( (maxEmkcCfgY1564TableRowStatus == SNMP_ROW_ACTIVE) || 
		(maxEmkcCfgY1564TableRowStatus == SNMP_ROW_NOTINSERVICE) || 
		(maxEmkcCfgY1564TableRowStatus == SNMP_ROW_NOTREADY) || 
		(maxEmkcCfgY1564TableRowStatus == SNMP_ROW_CREATEANDWAIT) ))
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

	maxEmkcCfgY1564TableEntryPtr = (MaxEmkcCfgY1564TableEntry *)(__Calloc(1,
											sizeof(MaxEmkcCfgY1564TableEntry)));

	if(maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	/* Assigning the index column 1  "maxEmkcCfgY1564TableIndex"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableIndex = maxEmkcCfgY1564TableIndex;

	/* Assigning the column 2  "maxEmkcCfgY1564TableRowStatus"  of type  " INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus = maxEmkcCfgY1564TableRowStatus;

	/* Assigning the column 3  "maxEmkcCfgY1564Options"  of type  " U_CHAR * " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen = maxEmkcCfgY1564OptionsLen;
	AllocateAndDoMemcpy(
				&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options,
				(U_CHAR *)maxEmkcCfgY1564Options,
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen);

	/* Assigning the column 4  "maxEmkcCfgY1564ThroughputTestDuration"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration = maxEmkcCfgY1564ThroughputTestDuration;

	/* Assigning the column 5  "maxEmkcCfgY1564TestConfigStepDuration"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration = maxEmkcCfgY1564TestConfigStepDuration;

	/* Assigning the column 6  "maxEmkcCfgY1564LearningTime"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime = maxEmkcCfgY1564LearningTime;

	/* Assigning the column 7  "maxEmkcCfgY1564Stream1TableRow"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow = maxEmkcCfgY1564Stream1TableRow;

	/* Assigning the column 8  "maxEmkcCfgY1564Stream2TableRow"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow = maxEmkcCfgY1564Stream2TableRow;

	/* Assigning the column 9  "maxEmkcCfgY1564Stream3TableRow"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow = maxEmkcCfgY1564Stream3TableRow;

	/* Assigning the column 10  "maxEmkcCfgY1564Stream4TableRow"  of type  " U_INT32  " */
	maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow = maxEmkcCfgY1564Stream4TableRow;


	entryPtr->ptr = maxEmkcCfgY1564TableEntryPtr;
	nodePtr = (Node *)(__Calloc(1,sizeof(Node)));

	if(nodePtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgY1564TableEntryMemory(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	nodePtr->refPtr = entryPtr;

	if (AddElement(&gv_maxEmkcCfgY1564TableVector, nodePtr) == FAILURE)
	{
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgY1564TableEntryMemory(entryPtr);
		__Free(nodePtr);
	}

	return SUCCESS;

}
/*****************************************************************************
 *	Function Name	: CreateMaxEmkcCfgY1564TableInstance()
 *
 *	Args			: 1. Instance Oid Length(IN/OUT).
 *					  2. Table column maxEmkcCfgY1564TableIndex (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from the method
 *					  CreateAndAddNewMaxEmkcCfgY1564TableTableEntry().
 *					  It is used to create a oid representation of the instance
 *					  value by taking table index columns value as input.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
OID *CreateMaxEmkcCfgY1564TableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgY1564TableIndex)
{
	OID		*inst;
	INT32	instLen;

	DEBUGMSG1("\n\t@@@@@ Inside CreateMaxEmkcCfgY1564TableInstance() @@@@@\n");

	/* The index is an integer */
	instLen = 1;
	inst = (OID *)__Calloc(sizeof(OID), instLen);
	CHECK_NULL_RETURN_NULL(inst);
	inst[0] = maxEmkcCfgY1564TableIndex;

	*instanceLen = instLen;
	return inst;
}
/*****************************************************************************
 *	Function Name	: MaxEmkcCfgY1564TableProcessRequests()
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
CHAR MaxEmkcCfgY1564TableProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
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

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgY1564TableProcessRequests() @@@@@\n");

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
								MAXEMKCCFGY1564TABLE_OID_LEN+2, inst);

#ifdef DEBUG
		DEBUGMSG1("The received instance is \n");
		PRINTOID(inst,instLen);
#endif

		nodePtr = nodePtr->nextPtr;
	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgY1564TableProcessReadReq()
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
U_CHAR *MaxEmkcCfgY1564TableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
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
	MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr;


	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgY1564TableProcessReadReq() @@@@@\n");

	retPtr = NULL;
	maxEmkcCfgY1564TableEntryPtr = NULL;

	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgY1564TableVector
	 */

	entryPtr = GetEntry(pduType, reqOid, reqOidLen, gv_maxEmkcCfgY1564TableOid,
							MAXEMKCCFGY1564TABLE_OID_LEN,
							&gv_maxEmkcCfgY1564TableVector,
							gv_maxEmkcCfgY1564TableSubIdList,
							MAXEMKCCFGY1564TABLE_SUBID_LEN);

	if (entryPtr == NULL)
	{
		/* end of table or group is reached */
		DEBUGMSG1("The given instance is not available in the table\n");
		*status = SNMP_NOSUCHINSTANCE;
		return NULL;
	}

	maxEmkcCfgY1564TableEntryPtr = (MaxEmkcCfgY1564TableEntry *)(entryPtr->ptr);

	column = reqOid[MAXEMKCCFGY1564TABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TABLEROWSTATUS:
				retPtr = GetMaxEmkcCfgY1564TableRowStatus(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564OPTIONS:
				retPtr = GetMaxEmkcCfgY1564Options(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564THROUGHPUTTESTDURATION:
				retPtr = GetMaxEmkcCfgY1564ThroughputTestDuration(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TESTCONFIGSTEPDURATION:
				retPtr = GetMaxEmkcCfgY1564TestConfigStepDuration(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564LEARNINGTIME:
				retPtr = GetMaxEmkcCfgY1564LearningTime(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM1TABLEROW:
				retPtr = GetMaxEmkcCfgY1564Stream1TableRow(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM2TABLEROW:
				retPtr = GetMaxEmkcCfgY1564Stream2TableRow(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM3TABLEROW:
				retPtr = GetMaxEmkcCfgY1564Stream3TableRow(maxEmkcCfgY1564TableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM4TABLEROW:
				retPtr = GetMaxEmkcCfgY1564Stream4TableRow(maxEmkcCfgY1564TableEntryPtr,
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
 *	Function Name	: MaxEmkcCfgY1564TableProcessWriteReq()
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
U_CHAR *MaxEmkcCfgY1564TableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
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
	U_INT32	maxEmkcCfgY1564TableIndex_IndVal;
	INT32	maxEmkcCfgY1564TableIndex_IndValLen;
	OID	*delInst;
	INT32	delInstLen;
	INT16	instLen;
	U_CHAR	newRowEntryFlag;
	U_CHAR	newRowFlag;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	Entry	*delEntryPtr;

	MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgY1564TableProcessWriteReq() @@@@@\n");

	retPtr = NULL;
	newRowEntryFlag = UNSET;
	newRowFlag = FALSE;
	maxEmkcCfgY1564TableEntryPtr = NULL;

	/* Delete the given instance from the vector */
	if (*status == DELETE_ENTRY)
	{
		instLen = GetInstance(reqOid, reqOidLen,MAXEMKCCFGY1564TABLE_OID_LEN+2, inst);
		DEBUGMSG1("Deleting the instance.....   ");
		PRINTOID(inst,instLen);
		entryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgY1564TableVector, inst,
				instLen);
		/* Deleting an instance from the table */
		if (entryPtr != NULL)
		{
			FreeMaxEmkcCfgY1564TableEntryMemory(entryPtr);
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
	 * from the vector :- gv_maxEmkcCfgY1564TableVector
	 */

	entryPtr = GetEntry(SNMP_MSG_SET, reqOid, &reqOidLen,
				gv_maxEmkcCfgY1564TableOid, MAXEMKCCFGY1564TABLE_OID_LEN,
				&gv_maxEmkcCfgY1564TableVector, gv_maxEmkcCfgY1564TableSubIdList,
				MAXEMKCCFGY1564TABLE_SUBID_LEN);

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
		instLen = GetInstance(reqOid, reqOidLen, MAXEMKCCFGY1564TABLE_OID_LEN + 2, inst);

		/* Checking the validity of the given instance */
		if(CheckInstances(gv_maxEmkcCfgY1564TableIndexDataTypes, NO,
					MAXEMKCCFGY1564TABLE_INDEX_LEN, inst, instLen) == FALSE)
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
							&gv_maxEmkcCfgY1564TableVector, inst, instLen);

			CHECK_NULL_SET_STATUS(entryPtr);

			entryPtr->ptr = (MaxEmkcCfgY1564TableEntry *)__Calloc(1,
								sizeof(MaxEmkcCfgY1564TableEntry));

			CHECK_NULL_SET_STATUS_AND_FREE(entryPtr->ptr);

			maxEmkcCfgY1564TableEntryPtr = (MaxEmkcCfgY1564TableEntry *)(entryPtr->ptr);

			/* This part will assign value for the index columns */ 
			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableIndex = inst[0];

			/*This part will add default values for the remaining columns */
			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus = 
											SNMP_ROW_NONEXISTENT;

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen = 0;
			AllocateAndDoMemcpy(
				&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options,
				(U_CHAR *)"",
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen);

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration = 10;

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration = 10;

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime = 10;

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow = 1;

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow = 1;

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow = 1;

			maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow = 1;

		}
		else
		{
			maxEmkcCfgY1564TableIndex_IndVal = inst[0];
			retPtr = (U_CHAR *)ConvertToStringFromUnsignedInteger((U_INT32 *)&maxEmkcCfgY1564TableIndex_IndVal,&maxEmkcCfgY1564TableIndex_IndValLen);
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
		maxEmkcCfgY1564TableEntryPtr = (MaxEmkcCfgY1564TableEntry *)(entryPtr->ptr);
	}


	column = reqOid[MAXEMKCCFGY1564TABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TABLEROWSTATUS:
				retPtr = SetMaxEmkcCfgY1564TableRowStatus(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564OPTIONS:
				retPtr = SetMaxEmkcCfgY1564Options(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564THROUGHPUTTESTDURATION:
				retPtr = SetMaxEmkcCfgY1564ThroughputTestDuration(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TESTCONFIGSTEPDURATION:
				retPtr = SetMaxEmkcCfgY1564TestConfigStepDuration(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564LEARNINGTIME:
				retPtr = SetMaxEmkcCfgY1564LearningTime(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM1TABLEROW:
				retPtr = SetMaxEmkcCfgY1564Stream1TableRow(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM2TABLEROW:
				retPtr = SetMaxEmkcCfgY1564Stream2TableRow(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM3TABLEROW:
				retPtr = SetMaxEmkcCfgY1564Stream3TableRow(maxEmkcCfgY1564TableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM4TABLEROW:
				retPtr = SetMaxEmkcCfgY1564Stream4TableRow(maxEmkcCfgY1564TableEntryPtr,
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

		delInst = CreateMaxEmkcCfgY1564TableInstance(
					&delInstLen, maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableIndex);
		delEntryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgY1564TableVector, delInst, delInstLen);
		/* Deleting an instance from the table */
		if (delEntryPtr != NULL)
		{
			FreeMaxEmkcCfgY1564TableEntryMemory(delEntryPtr);
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
 *	Function Name	: GetMaxEmkcCfgY1564TableInfo()
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
Vector *GetMaxEmkcCfgY1564TableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag)
{
	INT32 remRows;

	DEBUGMSG1("\n\t@@@@@ Inside *GetMaxEmkcCfgY1564TableInfo() @@@@@\n");

	remRows = gv_maxEmkcCfgY1564TableVector.size - startIdx - numOfRows;

	/*
	 * This will check for the presence of remaining rows and will set
	 * the flag variable if present.
	 */

	if (remRows > 0)
	{
		TRACEMSG2("The number of rows remaining is %d \n", remRows);
		*flag = TRUE;
	}

	return &gv_maxEmkcCfgY1564TableVector;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgY1564Table()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgY1564Table.
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
CHAR UpdateMaxEmkcCfgY1564Table(U_CHAR command)
{
	CHAR retVal;

	Node	*nodePtr;
	Entry	*entryPtr;
	Node	*tempNodePtr;
	MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgY1564Table() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
		if(gv_maxEmkcCfgY1564TableVector.size > 0 )
		{
			nodePtr = ElementAt(&gv_maxEmkcCfgY1564TableVector, 0);

			while(nodePtr)
			{
				entryPtr = (Entry *)nodePtr->refPtr;

				maxEmkcCfgY1564TableEntryPtr =
						(MaxEmkcCfgY1564TableEntry *)(entryPtr->ptr);

				/*
				 * If the maxEmkcCfgY1564TableRowStatus value is ROW_NONEXISTENT then
				 * delete the row from the vector &gv_maxEmkcCfgY1564TableVector.
				 */

				if (maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus
											== SNMP_ROW_NONEXISTENT)
				{
					__Free(entryPtr->instance);

					FreeMaxEmkcCfgY1564TableEntryMemory(entryPtr);

					tempNodePtr = nodePtr->nextPtr;

					DeleteElement(&gv_maxEmkcCfgY1564TableVector, nodePtr);

					nodePtr = tempNodePtr;

					continue;
				}
				nodePtr = nodePtr->nextPtr;
			}
		}

#ifdef FILE_TO_VECTOR
		/* Write all the entries of "maxEmkcCfgY1564Table" into the file */
		WriteToMaxEmkcCfgY1564TableFile();
#endif
	}

	return retVal;
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgY1564TableEntryMemory()
 *
 *	Args			: 1. Reference of the table entry (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from
 *					  FreeMaxEmkcCfgY1564TableVector(). This method is used
 *					  to free the reserved memory for an entry while deleting
 *					  an entry from the vector. The user can also call this
 *					  method to free a particular entry in the table vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgY1564TableEntryMemory(Entry *entryPtr)
{
	/*
	 * The entry memory will be freed here including all the allocated columns.
	 */

	MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgY1564TableEntryMemory() @@@@@\n");

	maxEmkcCfgY1564TableEntryPtr = (MaxEmkcCfgY1564TableEntry *)entryPtr->ptr;

	/* Free the reserved memory */
	if (maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options != NULL)
		__Free(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options);
	
	__Free(maxEmkcCfgY1564TableEntryPtr);
	__Free(entryPtr);
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgY1564TableVector()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: Free the gv_maxEmkcCfgY1564TableVector.
 *
 *	See Also		: FreeMaxEmkcCfgY1564TableEntryMemory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgY1564TableVector()
{
	Node	*nodePtr;
	entry	*entryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgY1564TableVector() @@@@@\n");

	/*
	 * Each element will be taken from the vector
	 * "gv_maxEmkcCfgY1564TableVector" and their instance and column
	 * values will be freed here.
	 */

	if(gv_maxEmkcCfgY1564TableVector.size == 0)
	{
		return;
	}

	nodePtr = (Node *)ElementAt(&gv_maxEmkcCfgY1564TableVector, 0);

	while (nodePtr)
	{
		entryPtr = (Entry *)nodePtr->refPtr;

		__Free(entryPtr->instance);
		FreeMaxEmkcCfgY1564TableEntryMemory(entryPtr);

		nodePtr = nodePtr->nextPtr;

		DeleteElementAt(&gv_maxEmkcCfgY1564TableVector, 0);
	}
}




#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgy1564tablehdlr.c
 *****************************************************************************/
