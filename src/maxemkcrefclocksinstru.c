/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcrefclocksinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcRefclocks.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:23 MSK 2018
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
#include "maxemkcrefclocks.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkc1PpsRefclockStatus()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkc1PpsRefclockStatus".
 *
 *	Task			: Get method for scalar variable maxEmkc1PpsRefclockStatus.
 *
 *					  "Status of 1PPS refclock"
 *
 *	See Also		: SetMaxEmkc1PpsRefclockStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkc1PpsRefclockStatus(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkc1PpsRefclockStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkc1PpsRefclockStatus" here */

	*varValLen = sizeof(gv_maxEmkc1PpsRefclockStatus);
	return (U_CHAR *)&gv_maxEmkc1PpsRefclockStatus;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcNtpRefclockStatus()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcNtpRefclockStatus".
 *
 *	Task			: Get method for scalar variable maxEmkcNtpRefclockStatus.
 *
 *					  "Status of NTP refclock"
 *
 *	See Also		: SetMaxEmkcNtpRefclockStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcNtpRefclockStatus(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcNtpRefclockStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcNtpRefclockStatus" here */

	*varValLen = sizeof(gv_maxEmkcNtpRefclockStatus);
	return (U_CHAR *)&gv_maxEmkcNtpRefclockStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkc1PpsRefclockStatus()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkc1PpsRefclockStatus".
 *
 *	Task			: Set method for scalar variable maxEmkc1PpsRefclockStatus.
 *
 *					  "Status of 1PPS refclock"
 *
 *	See Also		: GetMaxEmkc1PpsRefclockStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkc1PpsRefclockStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkc1PpsRefclockStatus() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 0) || (value == 1)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkc1PpsRefclockStatus = value;
		/* Please provide your code to instrument "maxEmkc1PpsRefclockStatus" here */
	}

	*varValLen = sizeof(gv_maxEmkc1PpsRefclockStatus);
	return (U_CHAR *)&gv_maxEmkc1PpsRefclockStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcNtpRefclockStatus()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcNtpRefclockStatus".
 *
 *	Task			: Set method for scalar variable maxEmkcNtpRefclockStatus.
 *
 *					  "Status of NTP refclock"
 *
 *	See Also		: GetMaxEmkcNtpRefclockStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcNtpRefclockStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcNtpRefclockStatus() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 0) || (value == 1)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcNtpRefclockStatus = value;
		/* Please provide your code to instrument "maxEmkcNtpRefclockStatus" here */
	}

	*varValLen = sizeof(gv_maxEmkcNtpRefclockStatus);
	return (U_CHAR *)&gv_maxEmkcNtpRefclockStatus;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcrefclocksinstru.c
 *****************************************************************************/
