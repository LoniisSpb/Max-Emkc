/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeasethportsettingsinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcMeasEthPortSettings.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:24 MSK 2018
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
#include "maxemkcmeasethportsettings.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortMacAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasEthPortMacAddress.
 *
 *					  "Configuration of measuring Ethernet port MAC address"
 *
 *	See Also		: SetMaxEmkcMeasEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasEthPortMacAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasEthPortMacAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcMeasEthPortMacAddress);

	/* Please provide your code to instrument "maxEmkcMeasEthPortMacAddress" here */

	*varValLen = gv_maxEmkcMeasEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcMeasEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortIpAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasEthPortIpAddress.
 *
 *					  "Configuration of measuring Ethernet port IP address"
 *
 *	See Also		: SetMaxEmkcMeasEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasEthPortIpAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasEthPortIpAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcMeasEthPortIpAddress);

	/* Please provide your code to instrument "maxEmkcMeasEthPortIpAddress" here */

	*varValLen = gv_maxEmkcMeasEthPortIpAddressLen;
	return (U_CHAR *)gv_maxEmkcMeasEthPortIpAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasEthPortMask()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortMask".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasEthPortMask.
 *
 *					  "Configuration of measuring Ethernet port mask in Linux style"
 *
 *	See Also		: SetMaxEmkcMeasEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasEthPortMask(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasEthPortMask() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcMeasEthPortMask" here */

	*varValLen = sizeof(gv_maxEmkcMeasEthPortMask);
	return (U_CHAR *)&gv_maxEmkcMeasEthPortMask;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasEthPortGw()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortGw".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasEthPortGw.
 *
 *					  "Configuration of measuring Ethernet port default gateway"
 *
 *	See Also		: SetMaxEmkcMeasEthPortGw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasEthPortGw(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasEthPortGw() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcMeasEthPortGw);

	/* Please provide your code to instrument "maxEmkcMeasEthPortGw" here */

	*varValLen = gv_maxEmkcMeasEthPortGwLen;
	return (U_CHAR *)gv_maxEmkcMeasEthPortGw;
}

/*****************************************************************************
 *	Function Name	: GetCmaxEmkcMeasuringEthPortDhcp()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "cmaxEmkcMeasuringEthPortDhcp".
 *
 *	Task			: Get method for scalar variable cmaxEmkcMeasuringEthPortDhcp.
 *
 *					  "DHCP client"
 *
 *	See Also		: SetCmaxEmkcMeasuringEthPortDhcp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetCmaxEmkcMeasuringEthPortDhcp(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetCmaxEmkcMeasuringEthPortDhcp() @@@@@\n");

	/* Please provide your code to instrument "cmaxEmkcMeasuringEthPortDhcp" here */

	*varValLen = sizeof(gv_cmaxEmkcMeasuringEthPortDhcp);
	return (U_CHAR *)&gv_cmaxEmkcMeasuringEthPortDhcp;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasuringEthPortRate()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasuringEthPortRate".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasuringEthPortRate.
 *
 *
 *	See Also		: SetMaxEmkcMeasuringEthPortRate().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasuringEthPortRate(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasuringEthPortRate() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcMeasuringEthPortRate" here */

	*varValLen = sizeof(gv_maxEmkcMeasuringEthPortRate);
	return (U_CHAR *)&gv_maxEmkcMeasuringEthPortRate;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasuringEthPortDuplex()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasuringEthPortDuplex".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasuringEthPortDuplex.
 *
 *
 *	See Also		: SetMaxEmkcMeasuringEthPortDuplex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasuringEthPortDuplex(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasuringEthPortDuplex() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcMeasuringEthPortDuplex" here */

	*varValLen = sizeof(gv_maxEmkcMeasuringEthPortDuplex);
	return (U_CHAR *)&gv_maxEmkcMeasuringEthPortDuplex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortMacAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasEthPortMacAddress.
 *
 *					  "Configuration of measuring Ethernet port MAC address"
 *
 *	See Also		: GetMaxEmkcMeasEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeasEthPortMacAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasEthPortMacAddress() @@@@@\n");

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		/* Set the maxEmkcMeasEthPortMacAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeasEthPortMacAddress,
					varVal, *varValLen);
		gv_maxEmkcMeasEthPortMacAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcMeasEthPortMacAddress" here */
	}
	*varValLen = gv_maxEmkcMeasEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcMeasEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortIpAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasEthPortIpAddress.
 *
 *					  "Configuration of measuring Ethernet port IP address"
 *
 *	See Also		: GetMaxEmkcMeasEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeasEthPortIpAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasEthPortIpAddress() @@@@@\n");

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
		/* Set the maxEmkcMeasEthPortIpAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeasEthPortIpAddress,
					varVal, *varValLen);
		gv_maxEmkcMeasEthPortIpAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcMeasEthPortIpAddress" here */
	}
	*varValLen = gv_maxEmkcMeasEthPortIpAddressLen;

	return gv_maxEmkcMeasEthPortIpAddress;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasEthPortMask()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortMask".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasEthPortMask.
 *
 *					  "Configuration of measuring Ethernet port mask in Linux style"
 *
 *	See Also		: GetMaxEmkcMeasEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasEthPortMask() @@@@@\n");

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
		gv_maxEmkcMeasEthPortMask = value;
		/* Please provide your code to instrument "maxEmkcMeasEthPortMask" here */
	}

	*varValLen = sizeof(gv_maxEmkcMeasEthPortMask);
	return (U_CHAR *)&gv_maxEmkcMeasEthPortMask;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasEthPortGw()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortGw".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasEthPortGw.
 *
 *					  "Configuration of measuring Ethernet port default gateway"
 *
 *	See Also		: GetMaxEmkcMeasEthPortGw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasEthPortGw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeasEthPortGw" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasEthPortGw() @@@@@\n");

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
		/* Set the maxEmkcMeasEthPortGw scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeasEthPortGw,
					varVal, *varValLen);
		gv_maxEmkcMeasEthPortGwLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcMeasEthPortGw" here */
	}
	*varValLen = gv_maxEmkcMeasEthPortGwLen;

	return gv_maxEmkcMeasEthPortGw;
}
/*****************************************************************************
 *	Function Name	: SetCmaxEmkcMeasuringEthPortDhcp()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "cmaxEmkcMeasuringEthPortDhcp".
 *
 *	Task			: Set method for scalar variable cmaxEmkcMeasuringEthPortDhcp.
 *
 *					  "DHCP client"
 *
 *	See Also		: GetCmaxEmkcMeasuringEthPortDhcp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetCmaxEmkcMeasuringEthPortDhcp(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetCmaxEmkcMeasuringEthPortDhcp() @@@@@\n");

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
		gv_cmaxEmkcMeasuringEthPortDhcp = value;
		/* Please provide your code to instrument "cmaxEmkcMeasuringEthPortDhcp" here */
	}

	*varValLen = sizeof(gv_cmaxEmkcMeasuringEthPortDhcp);
	return (U_CHAR *)&gv_cmaxEmkcMeasuringEthPortDhcp;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasuringEthPortRate()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasuringEthPortRate".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasuringEthPortRate.
 *
 *
 *	See Also		: GetMaxEmkcMeasuringEthPortRate().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasuringEthPortRate(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasuringEthPortRate() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 1) || (value == 2) || (value == 3)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcMeasuringEthPortRate = value;
		/* Please provide your code to instrument "maxEmkcMeasuringEthPortRate" here */
	}

	*varValLen = sizeof(gv_maxEmkcMeasuringEthPortRate);
	return (U_CHAR *)&gv_maxEmkcMeasuringEthPortRate;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasuringEthPortDuplex()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasuringEthPortDuplex".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasuringEthPortDuplex.
 *
 *
 *	See Also		: GetMaxEmkcMeasuringEthPortDuplex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasuringEthPortDuplex(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasuringEthPortDuplex() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 1) || (value == 2)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcMeasuringEthPortDuplex = value;
		/* Please provide your code to instrument "maxEmkcMeasuringEthPortDuplex" here */
	}

	*varValLen = sizeof(gv_maxEmkcMeasuringEthPortDuplex);
	return (U_CHAR *)&gv_maxEmkcMeasuringEthPortDuplex;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeasethportsettingsinstru.c
 *****************************************************************************/
