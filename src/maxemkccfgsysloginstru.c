/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsysloginstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgSyslog.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:55 MSK 2018
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
#include "maxemkccfgsyslog.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSyslogServerAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSyslogServerAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSyslogServerAddress.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgSyslogServerAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSyslogServerAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSyslogServerAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSyslogServerAddress);

	/* Please provide your code to instrument "maxEmkcCfgSyslogServerAddress" here */

	*varValLen = gv_maxEmkcCfgSyslogServerAddressLen;
	return (U_CHAR *)gv_maxEmkcCfgSyslogServerAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSyslogLogLevel()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSyslogLogLevel".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSyslogLogLevel.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgSyslogLogLevel().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSyslogLogLevel(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSyslogLogLevel() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSyslogLogLevel" here */

	*varValLen = sizeof(gv_maxEmkcCfgSyslogLogLevel);
	return (U_CHAR *)&gv_maxEmkcCfgSyslogLogLevel;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSyslogServerAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSyslogServerAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSyslogServerAddress.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgSyslogServerAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSyslogServerAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSyslogServerAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSyslogServerAddress() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen <= 0 || *varValLen > 15 )
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
		if(IsValidIPAddress(varVal, *varValLen) != TRUE )
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgSyslogServerAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSyslogServerAddress,
					varVal, *varValLen);
		gv_maxEmkcCfgSyslogServerAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgSyslogServerAddress" here */
	}
	*varValLen = gv_maxEmkcCfgSyslogServerAddressLen;

	return gv_maxEmkcCfgSyslogServerAddress;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSyslogLogLevel()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSyslogLogLevel".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSyslogLogLevel.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgSyslogLogLevel().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSyslogLogLevel(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSyslogLogLevel() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 0) || (value == 1) || (value == 2) || (value == 3) || (value == 4) || (value == 5) || (value == 6)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcCfgSyslogLogLevel = value;
		/* Please provide your code to instrument "maxEmkcCfgSyslogLogLevel" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSyslogLogLevel);
	return (U_CHAR *)&gv_maxEmkcCfgSyslogLogLevel;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsysloginstru.c
 *****************************************************************************/
