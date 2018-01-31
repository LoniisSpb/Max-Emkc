/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgloopertableinstru.c.
 *
 *  Purpose	: File contains get and set methods for each table column 
 * 			  of the module maxEmkcCfgLooperTable. 
 *
 *			  "Row Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:43 MSK 2018
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
#include "maxemkccfgloopertable.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcLooperRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcLooperRowStatus".
 *
 *	Task			: Get method for (table) column maxEmkcLooperRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: SetMaxEmkcLooperRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcLooperRowStatus(MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcLooperRowStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcLooperRowStatus" here */

	*varValLen = sizeof(maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus);
	return (U_CHAR *)&maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcLooperTableIndex()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLooperTableIndex".
 *
 *	Task			: Set method for (table) column maxEmkcLooperTableIndex.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcLooperTableIndex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcLooperTableIndex(MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcLooperTableIndex() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperTableIndex = value;
		/* Please provide your code to instrument "maxEmkcLooperTableIndex" here */
	}


	if (maxEmkcCfgLooperTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperTableIndex);
	return (U_CHAR *)&maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperTableIndex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcLooperRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLooperRowStatus".
 *
 *	Task			: Set method for (table) column maxEmkcLooperRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcLooperRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcLooperRowStatus(MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;
	CHAR	retVal;
	U_CHAR	presentState;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcLooperRowStatus() @@@@@\n");

	if(maxEmkcCfgLooperTableEntryPtr == NULL)
	{
		presentState = SNMP_ROW_NONEXISTENT;
	}
	else
	{
		presentState = maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus;
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
		maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus = retVal;
		/* Please provide your code to instrument "maxEmkcLooperRowStatus" here */
	}


	if (maxEmkcCfgLooperTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus);
	return (U_CHAR *)&maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgloopertableinstru.c
 *****************************************************************************/
