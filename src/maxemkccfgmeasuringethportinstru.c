/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasuringethportinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgMeasuringEthPort.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:32 MSK 2018
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
#include "maxemkccfgmeasuringethport.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortMacAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgMeasEthPortMacAddress.
 *
 *					  "Configuration of measuring Ethernet port MAC address"
 *
 *	See Also		: SetMaxEmkcCfgMeasEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasEthPortMacAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasEthPortMacAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgMeasEthPortMacAddress);

	/* Please provide your code to instrument "maxEmkcCfgMeasEthPortMacAddress" here */

	*varValLen = gv_maxEmkcCfgMeasEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortIpAddress".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgMeasEthPortIpAddress.
 *
 *					  "Configuration of measuring Ethernet port IP address"
 *
 *	See Also		: SetMaxEmkcCfgMeasEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasEthPortIpAddress(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasEthPortIpAddress() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgMeasEthPortIpAddress);

	/* Please provide your code to instrument "maxEmkcCfgMeasEthPortIpAddress" here */

	*varValLen = gv_maxEmkcCfgMeasEthPortIpAddressLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortIpAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasEthPortMask()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortMask".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgMeasEthPortMask.
 *
 *					  "Configuration of measuring Ethernet port mask in Linux style"
 *
 *	See Also		: SetMaxEmkcCfgMeasEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasEthPortMask(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasEthPortMask() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgMeasEthPortMask" here */

	*varValLen = sizeof(gv_maxEmkcCfgMeasEthPortMask);
	return (U_CHAR *)&gv_maxEmkcCfgMeasEthPortMask;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasEthPortGw()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortGw".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgMeasEthPortGw.
 *
 *					  "Configuration of measuring Ethernet port default gateway"
 *
 *	See Also		: SetMaxEmkcCfgMeasEthPortGw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasEthPortGw(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasEthPortGw() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgMeasEthPortGw);

	/* Please provide your code to instrument "maxEmkcCfgMeasEthPortGw" here */

	*varValLen = gv_maxEmkcCfgMeasEthPortGwLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortGw;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasEthPortDhcp()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortDhcp".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgMeasEthPortDhcp.
 *
 *					  "DHCP client"
 *
 *	See Also		: SetMaxEmkcCfgMeasEthPortDhcp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasEthPortDhcp(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasEthPortDhcp() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgMeasEthPortDhcp" here */

	*varValLen = sizeof(gv_maxEmkcCfgMeasEthPortDhcp);
	return (U_CHAR *)&gv_maxEmkcCfgMeasEthPortDhcp;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasEthPortRate()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortRate".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgMeasEthPortRate.
 *
 *					  "This is the set of independent bit-based Ethernet port rate options. Checked rates is participated in port autonegotiations process.
 *					  rate10Mbps=rate100Mbps=rate1000Mbps=0 combination of bits is not allowed!"
 *
 *	See Also		: SetMaxEmkcCfgMeasEthPortRate().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasEthPortRate(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasEthPortRate() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgMeasEthPortRate);

	/* Please provide your code to instrument "maxEmkcCfgMeasEthPortRate" here */

	*varValLen = gv_maxEmkcCfgMeasEthPortRateLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortRate;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasEthPortDuplex()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortDuplex".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgMeasEthPortDuplex.
 *
 *					  "This is the pare of independent bit-based Ethernet port type of duplex options. Checked duplex options is participated in port autonegotiations process.
 *					  halfDuplex=fullDuplex=0 combination of bits is not allowed!"
 *
 *	See Also		: SetMaxEmkcCfgMeasEthPortDuplex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasEthPortDuplex(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasEthPortDuplex() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgMeasEthPortDuplex);

	/* Please provide your code to instrument "maxEmkcCfgMeasEthPortDuplex" here */

	*varValLen = gv_maxEmkcCfgMeasEthPortDuplexLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortDuplex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasEthPortMacAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortMacAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgMeasEthPortMacAddress.
 *
 *					  "Configuration of measuring Ethernet port MAC address"
 *
 *	See Also		: GetMaxEmkcCfgMeasEthPortMacAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgMeasEthPortMacAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasEthPortMacAddress() @@@@@\n");

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		/* Set the maxEmkcCfgMeasEthPortMacAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgMeasEthPortMacAddress,
					varVal, *varValLen);
		gv_maxEmkcCfgMeasEthPortMacAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgMeasEthPortMacAddress" here */
	}
	*varValLen = gv_maxEmkcCfgMeasEthPortMacAddressLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortMacAddress;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasEthPortIpAddress()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortIpAddress".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgMeasEthPortIpAddress.
 *
 *					  "Configuration of measuring Ethernet port IP address"
 *
 *	See Also		: GetMaxEmkcCfgMeasEthPortIpAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgMeasEthPortIpAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasEthPortIpAddress() @@@@@\n");

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
		/* Set the maxEmkcCfgMeasEthPortIpAddress scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgMeasEthPortIpAddress,
					varVal, *varValLen);
		gv_maxEmkcCfgMeasEthPortIpAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgMeasEthPortIpAddress" here */
	}
	*varValLen = gv_maxEmkcCfgMeasEthPortIpAddressLen;

	return gv_maxEmkcCfgMeasEthPortIpAddress;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasEthPortMask()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortMask".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgMeasEthPortMask.
 *
 *					  "Configuration of measuring Ethernet port mask in Linux style"
 *
 *	See Also		: GetMaxEmkcCfgMeasEthPortMask().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasEthPortMask() @@@@@\n");

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
		gv_maxEmkcCfgMeasEthPortMask = value;
		/* Please provide your code to instrument "maxEmkcCfgMeasEthPortMask" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgMeasEthPortMask);
	return (U_CHAR *)&gv_maxEmkcCfgMeasEthPortMask;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasEthPortGw()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortGw".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgMeasEthPortGw.
 *
 *					  "Configuration of measuring Ethernet port default gateway"
 *
 *	See Also		: GetMaxEmkcCfgMeasEthPortGw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasEthPortGw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgMeasEthPortGw" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasEthPortGw() @@@@@\n");

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
		/* Set the maxEmkcCfgMeasEthPortGw scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgMeasEthPortGw,
					varVal, *varValLen);
		gv_maxEmkcCfgMeasEthPortGwLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgMeasEthPortGw" here */
	}
	*varValLen = gv_maxEmkcCfgMeasEthPortGwLen;

	return gv_maxEmkcCfgMeasEthPortGw;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasEthPortDhcp()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortDhcp".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgMeasEthPortDhcp.
 *
 *					  "DHCP client"
 *
 *	See Also		: GetMaxEmkcCfgMeasEthPortDhcp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasEthPortDhcp(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasEthPortDhcp() @@@@@\n");

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
		gv_maxEmkcCfgMeasEthPortDhcp = value;
		/* Please provide your code to instrument "maxEmkcCfgMeasEthPortDhcp" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgMeasEthPortDhcp);
	return (U_CHAR *)&gv_maxEmkcCfgMeasEthPortDhcp;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasEthPortRate()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortRate".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgMeasEthPortRate.
 *
 *					  "This is the set of independent bit-based Ethernet port rate options. Checked rates is participated in port autonegotiations process.
 *					  rate10Mbps=rate100Mbps=rate1000Mbps=0 combination of bits is not allowed!"
 *
 *	See Also		: GetMaxEmkcCfgMeasEthPortRate().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasEthPortRate(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgMeasEthPortRate" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasEthPortRate() @@@@@\n");

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		/* Set the maxEmkcCfgMeasEthPortRate scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgMeasEthPortRate,
					varVal, *varValLen);
		gv_maxEmkcCfgMeasEthPortRateLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgMeasEthPortRate" here */
	}
	*varValLen = gv_maxEmkcCfgMeasEthPortRateLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortRate;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasEthPortDuplex()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasEthPortDuplex".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgMeasEthPortDuplex.
 *
 *					  "This is the pare of independent bit-based Ethernet port type of duplex options. Checked duplex options is participated in port autonegotiations process.
 *					  halfDuplex=fullDuplex=0 combination of bits is not allowed!"
 *
 *	See Also		: GetMaxEmkcCfgMeasEthPortDuplex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasEthPortDuplex(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgMeasEthPortDuplex" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasEthPortDuplex() @@@@@\n");

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		/* Set the maxEmkcCfgMeasEthPortDuplex scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgMeasEthPortDuplex,
					varVal, *varValLen);
		gv_maxEmkcCfgMeasEthPortDuplexLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgMeasEthPortDuplex" here */
	}
	*varValLen = gv_maxEmkcCfgMeasEthPortDuplexLen;
	return (U_CHAR *)gv_maxEmkcCfgMeasEthPortDuplex;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasuringethportinstru.c
 *****************************************************************************/
