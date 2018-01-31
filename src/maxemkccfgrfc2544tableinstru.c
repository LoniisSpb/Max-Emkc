/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgrfc2544tableinstru.c.
 *
 *  Purpose	: File contains get and set methods for each table column 
 * 			  of the module maxEmkcCfgRfc2544Table. 
 *
 *			  "Row Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:35 MSK 2018
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
#include "maxemkccfgrfc2544table.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgRfc2544TableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgRfc2544TableRowStatus".
 *
 *	Task			: Get method for (table) column maxEmkcCfgRfc2544TableRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: SetMaxEmkcCfgRfc2544TableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgRfc2544TableRowStatus(MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgRfc2544TableRowStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgRfc2544TableRowStatus" here */

	*varValLen = sizeof(maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus);
	return (U_CHAR *)&maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgRfc2544TableIndex()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgRfc2544TableIndex".
 *
 *	Task			: Set method for (table) column maxEmkcCfgRfc2544TableIndex.
 *
 *					  "Column 0 is not saved to agent flash.
 *					  Columns >0 is saved to agent flash."
 *
 *	See Also		: GetMaxEmkcCfgRfc2544TableIndex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgRfc2544TableIndex(MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgRfc2544TableIndex() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableIndex = value;
		/* Please provide your code to instrument "maxEmkcCfgRfc2544TableIndex" here */
	}


	if (maxEmkcCfgRfc2544TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableIndex);
	return (U_CHAR *)&maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableIndex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgRfc2544TableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgRfc2544TableRowStatus".
 *
 *	Task			: Set method for (table) column maxEmkcCfgRfc2544TableRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgRfc2544TableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgRfc2544TableRowStatus(MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;
	CHAR	retVal;
	U_CHAR	presentState;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgRfc2544TableRowStatus() @@@@@\n");

	if(maxEmkcCfgRfc2544TableEntryPtr == NULL)
	{
		presentState = SNMP_ROW_NONEXISTENT;
	}
	else
	{
		presentState = maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus;
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
		maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus = retVal;
		/* Please provide your code to instrument "maxEmkcCfgRfc2544TableRowStatus" here */
	}


	if (maxEmkcCfgRfc2544TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus);
	return (U_CHAR *)&maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgrfc2544tableinstru.c
 *****************************************************************************/
