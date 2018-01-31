/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkctimeinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcTime.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:29 MSK 2018
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
#include "maxemkctime.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSubagentTimeticks()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSubagentTimeticks".
 *
 *	Task			: Get method for scalar variable maxEmkcSubagentTimeticks.
 *
 *					  "Subdaemons' time alive in seconds"
 *
 *	See Also		: SetMaxEmkcSubagentTimeticks().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSubagentTimeticks(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSubagentTimeticks() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcSubagentTimeticks" here */

	*varValLen = sizeof(gv_maxEmkcSubagentTimeticks);
	return (U_CHAR *)&gv_maxEmkcSubagentTimeticks;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSystemClockTime()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSystemClockTime".
 *
 *	Task			: Get method for scalar variable maxEmkcSystemClockTime.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcSystemClockTime().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSystemClockTime(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSystemClockTime() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSystemClockTime);

	/* Please provide your code to instrument "maxEmkcSystemClockTime" here */

	*varValLen = gv_maxEmkcSystemClockTimeLen;
	return (U_CHAR *)gv_maxEmkcSystemClockTime;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSubagentTimeticks()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSubagentTimeticks".
 *
 *	Task			: Set method for scalar variable maxEmkcSubagentTimeticks.
 *
 *					  "Subdaemons' time alive in seconds"
 *
 *	See Also		: GetMaxEmkcSubagentTimeticks().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSubagentTimeticks(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	counter64	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSubagentTimeticks() @@@@@\n");

	value = (* ((counter64*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		gv_maxEmkcSubagentTimeticks.high = value.high;
		gv_maxEmkcSubagentTimeticks.low = value.low;

		/* Please provide your code to instrument "maxEmkcSubagentTimeticks" here */
	}

	*varValLen = sizeof(gv_maxEmkcSubagentTimeticks);
	return (U_CHAR *)&gv_maxEmkcSubagentTimeticks;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSystemClockTime()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSystemClockTime".
 *
 *	Task			: Set method for scalar variable maxEmkcSystemClockTime.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcSystemClockTime().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSystemClockTime(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSystemClockTime" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSystemClockTime() @@@@@\n");

	if (*status == VALIDATE)
	{
		if(! IsValidDateAndTime(varVal, varValLen))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcSystemClockTime scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSystemClockTime,
					varVal, *varValLen);
		gv_maxEmkcSystemClockTimeLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcSystemClockTime" here */
	}
	*varValLen = gv_maxEmkcSystemClockTimeLen;
	return (U_CHAR *)gv_maxEmkcSystemClockTime;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkctimeinstru.c
 *****************************************************************************/
