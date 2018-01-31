/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcsnmpethportsettingsinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcSnmpEthPortSettings.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:27 MSK 2018
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
#include "maxemkcsnmpethportsettings.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortMacAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpEthPortMacAddress.
 *
 *					  "SNMP Ethernet port MAC Address"
 *
 *	See Also		: SetMaxEmkcSnmpEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpEthPortMacAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpEthPortMacAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSnmpEthPortMacAddress);

	/* Please provide your code to instrument "maxEmkcSnmpEthPortMacAddress" here */

	*varValLen = gv_maxEmkcSnmpEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcSnmpEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortIpAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpEthPortIpAddress.
 *
 *					  "SNMP Ethernet port IP Address"
 *
 *	See Also		: SetMaxEmkcSnmpEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpEthPortIpAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpEthPortIpAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSnmpEthPortIpAddress);

	/* Please provide your code to instrument "maxEmkcSnmpEthPortIpAddress" here */

	*varValLen = gv_maxEmkcSnmpEthPortIpAddressLen;
	return (U_CHAR *)gv_maxEmkcSnmpEthPortIpAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpEthPortMask()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortMask".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpEthPortMask.
 *
 *					  "IP address mask in Linux style"
 *
 *	See Also		: SetMaxEmkcSnmpEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpEthPortMask(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpEthPortMask() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcSnmpEthPortMask" here */

	*varValLen = sizeof(gv_maxEmkcSnmpEthPortMask);
	return (U_CHAR *)&gv_maxEmkcSnmpEthPortMask;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpEthPortGw()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortGw".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpEthPortGw.
 *
 *					  "devices' hostname"
 *
 *	See Also		: SetMaxEmkcSnmpEthPortGw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpEthPortGw(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpEthPortGw() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSnmpEthPortGw);

	/* Please provide your code to instrument "maxEmkcSnmpEthPortGw" here */

	*varValLen = gv_maxEmkcSnmpEthPortGwLen;
	return (U_CHAR *)gv_maxEmkcSnmpEthPortGw;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortMacAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpEthPortMacAddress.
 *
 *					  "SNMP Ethernet port MAC Address"
 *
 *	See Also		: GetMaxEmkcSnmpEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSnmpEthPortMacAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpEthPortMacAddress() @@@@@\n");

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		/* Set the maxEmkcSnmpEthPortMacAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSnmpEthPortMacAddress,
					varVal, *varValLen);
		gv_maxEmkcSnmpEthPortMacAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcSnmpEthPortMacAddress" here */
	}
	*varValLen = gv_maxEmkcSnmpEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcSnmpEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortIpAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpEthPortIpAddress.
 *
 *					  "SNMP Ethernet port IP Address"
 *
 *	See Also		: GetMaxEmkcSnmpEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSnmpEthPortIpAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpEthPortIpAddress() @@@@@\n");

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
		/* Set the maxEmkcSnmpEthPortIpAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSnmpEthPortIpAddress,
					varVal, *varValLen);
		gv_maxEmkcSnmpEthPortIpAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcSnmpEthPortIpAddress" here */
	}
	*varValLen = gv_maxEmkcSnmpEthPortIpAddressLen;

	return gv_maxEmkcSnmpEthPortIpAddress;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpEthPortMask()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortMask".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpEthPortMask.
 *
 *					  "IP address mask in Linux style"
 *
 *	See Also		: GetMaxEmkcSnmpEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpEthPortMask() @@@@@\n");

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
		gv_maxEmkcSnmpEthPortMask = value;
		/* Please provide your code to instrument "maxEmkcSnmpEthPortMask" here */
	}

	*varValLen = sizeof(gv_maxEmkcSnmpEthPortMask);
	return (U_CHAR *)&gv_maxEmkcSnmpEthPortMask;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpEthPortGw()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpEthPortGw".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpEthPortGw.
 *
 *					  "devices' hostname"
 *
 *	See Also		: GetMaxEmkcSnmpEthPortGw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpEthPortGw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSnmpEthPortGw" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpEthPortGw() @@@@@\n");

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
		/* Set the maxEmkcSnmpEthPortGw scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSnmpEthPortGw,
					varVal, *varValLen);
		gv_maxEmkcSnmpEthPortGwLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcSnmpEthPortGw" here */
	}
	*varValLen = gv_maxEmkcSnmpEthPortGwLen;

	return gv_maxEmkcSnmpEthPortGw;
}

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcsnmpethportsettingsinstru.c
 *****************************************************************************/
