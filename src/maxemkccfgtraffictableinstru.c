/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtraffictableinstru.c.
 *
 *  Purpose	: File contains get and set methods for each table column 
 * 			  of the module maxEmkcCfgTrafficTable. 
 *
 *			  "Row Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:41 MSK 2018
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
#include "genincludes.h"
#include "maxemkccfgtraffictable.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgTrafficTableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTrafficTableRowStatus".
 *
 *	Task			: Get method for (table) column maxEmkcCfgTrafficTableRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: SetMaxEmkcCfgTrafficTableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgTrafficTableRowStatus(MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgTrafficTableRowStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgTrafficTableRowStatus" here */

	*varValLen = sizeof(maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus);
	return (U_CHAR *)&maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgTrafficIndex()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTrafficIndex".
 *
 *	Task			: Set method for (table) column maxEmkcCfgTrafficIndex.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgTrafficIndex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgTrafficIndex(MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgTrafficIndex() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficIndex = value;
		/* Please provide your code to instrument "maxEmkcCfgTrafficIndex" here */
	}


	if (maxEmkcCfgTrafficTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficIndex);
	return (U_CHAR *)&maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficIndex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgTrafficTableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTrafficTableRowStatus".
 *
 *	Task			: Set method for (table) column maxEmkcCfgTrafficTableRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgTrafficTableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgTrafficTableRowStatus(MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;
	CHAR	retVal;
	U_CHAR	presentState;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgTrafficTableRowStatus() @@@@@\n");

	if(maxEmkcCfgTrafficTableEntryPtr == NULL)
	{
		presentState = SNMP_ROW_NONEXISTENT;
	}
	else
	{
		presentState = maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus;
	}

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	
	retVal = SUCCESS;

	if(*status == VALIDATE)
	{
		retVal = IsValidRowStatus(presentState, (U_CHAR)value, status);
		if(retVal == FAILURE)
		{
			DEBUGMSG1("Wrong value for RowStatus Column !!!\n");
			return NULL;
		}
	}
	else
	{
		retVal = UpdateRowStatus(presentState, (U_CHAR)value, status);
		maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus = retVal;
		/* Please provide your code to instrument "maxEmkcCfgTrafficTableRowStatus" here */
	}


	if (maxEmkcCfgTrafficTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus);
	return (U_CHAR *)&maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtraffictableinstru.c
 *****************************************************************************/
