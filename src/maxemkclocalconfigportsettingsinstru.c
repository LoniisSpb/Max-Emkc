/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkclocalconfigportsettingsinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcLocalConfigPortSettings.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:28 MSK 2018
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
#include "maxemkclocalconfigportsettings.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcLocalConfigEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLocalConfigEthPortMacAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcLocalConfigEthPortMacAddress.
 *
 *					  "MAC address of local configuration port"
 *
 *	See Also		: SetMaxEmkcLocalConfigEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcLocalConfigEthPortMacAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcLocalConfigEthPortMacAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcLocalConfigEthPortMacAddress);

	/* Please provide your code to instrument "maxEmkcLocalConfigEthPortMacAddress" here */

	*varValLen = gv_maxEmkcLocalConfigEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcLocalConfigEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcLocalConfigEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLocalConfigEthPortIpAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcLocalConfigEthPortIpAddress.
 *
 *					  "IP address of local configuration Ethernet Port"
 *
 *	See Also		: SetMaxEmkcLocalConfigEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcLocalConfigEthPortIpAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcLocalConfigEthPortIpAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcLocalConfigEthPortIpAddress);

	/* Please provide your code to instrument "maxEmkcLocalConfigEthPortIpAddress" here */

	*varValLen = gv_maxEmkcLocalConfigEthPortIpAddressLen;
	return (U_CHAR *)gv_maxEmkcLocalConfigEthPortIpAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcLocalConfigEthPortMask()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLocalConfigEthPortMask".
 *
 *	Task			: Get method for scalar variable maxEmkcLocalConfigEthPortMask.
 *
 *					  "IP mask of local config Ethernet port"
 *
 *	See Also		: SetMaxEmkcLocalConfigEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcLocalConfigEthPortMask(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcLocalConfigEthPortMask() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcLocalConfigEthPortMask" here */

	*varValLen = sizeof(gv_maxEmkcLocalConfigEthPortMask);
	return (U_CHAR *)&gv_maxEmkcLocalConfigEthPortMask;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcLocalConfigEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLocalConfigEthPortMacAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcLocalConfigEthPortMacAddress.
 *
 *					  "MAC address of local configuration port"
 *
 *	See Also		: GetMaxEmkcLocalConfigEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcLocalConfigEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcLocalConfigEthPortMacAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcLocalConfigEthPortMacAddress() @@@@@\n");

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		/* Set the maxEmkcLocalConfigEthPortMacAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcLocalConfigEthPortMacAddress,
					varVal, *varValLen);
		gv_maxEmkcLocalConfigEthPortMacAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcLocalConfigEthPortMacAddress" here */
	}
	*varValLen = gv_maxEmkcLocalConfigEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcLocalConfigEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcLocalConfigEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLocalConfigEthPortIpAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcLocalConfigEthPortIpAddress.
 *
 *					  "IP address of local configuration Ethernet Port"
 *
 *	See Also		: GetMaxEmkcLocalConfigEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcLocalConfigEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcLocalConfigEthPortIpAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcLocalConfigEthPortIpAddress() @@@@@\n");

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
		/* Set the maxEmkcLocalConfigEthPortIpAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcLocalConfigEthPortIpAddress,
					varVal, *varValLen);
		gv_maxEmkcLocalConfigEthPortIpAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcLocalConfigEthPortIpAddress" here */
	}
	*varValLen = gv_maxEmkcLocalConfigEthPortIpAddressLen;

	return gv_maxEmkcLocalConfigEthPortIpAddress;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcLocalConfigEthPortMask()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcLocalConfigEthPortMask".
 *
 *	Task			: Set method for scalar variable maxEmkcLocalConfigEthPortMask.
 *
 *					  "IP mask of local config Ethernet port"
 *
 *	See Also		: GetMaxEmkcLocalConfigEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcLocalConfigEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcLocalConfigEthPortMask() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 32))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcLocalConfigEthPortMask = value;
		/* Please provide your code to instrument "maxEmkcLocalConfigEthPortMask" here */
	}

	*varValLen = sizeof(gv_maxEmkcLocalConfigEthPortMask);
	return (U_CHAR *)&gv_maxEmkcLocalConfigEthPortMask;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkclocalconfigportsettingsinstru.c
 *****************************************************************************/
