/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeterinfoinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcMeterInfo.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:21 MSK 2018
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
#include "maxemkcmeterinfo.h" 
#include "nautilus.h"

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeterCpuSoftwareVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterCpuSoftwareVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcMeterCpuSoftwareVersion.
 *
 *					  "version of CPU software"
 *
 *	See Also		: SetMaxEmkcMeterCpuSoftwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeterCpuSoftwareVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeterCpuSoftwareVersion() @@@@@\n");

//	CHECK_FOR_NULL(gv_maxEmkcMeterCpuSoftwareVersion);

	/* Please provide your code to instrument "maxEmkcMeterCpuSoftwareVersion" here */

char str[80];
GoString a1,a2;
AllocateAndDoStrcpy((CHAR **)&a1.p,"-----------------HELLO--------------123----");
a1.n=__Strlen((CHAR *)a1.p);
a2=TestFunc(a1);
strncpy(str,a2.p,a2.n);
DEBUGMSG2("\n+++++%s\n",str); 

	strcpy(str, "Ver 10.0.0.4 from 1/30/2018");
	AllocateAndDoStrcpy((CHAR **)&gv_maxEmkcMeterCpuSoftwareVersion,str);
    *status=SNMP_ERR_NOERROR;

	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterCpuSoftwareVersion);
	return (U_CHAR *)gv_maxEmkcMeterCpuSoftwareVersion;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeterFpgaBinImageVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterFpgaBinImageVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcMeterFpgaBinImageVersion.
 *
 *					  "installed FPGA binary image version"
 *
 *	See Also		: SetMaxEmkcMeterFpgaBinImageVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeterFpgaBinImageVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeterFpgaBinImageVersion() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcMeterFpgaBinImageVersion);

	/* Please provide your code to instrument "maxEmkcMeterFpgaBinImageVersion" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterFpgaBinImageVersion);
	return (U_CHAR *)gv_maxEmkcMeterFpgaBinImageVersion;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeterFirmwareReleaseVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterFirmwareReleaseVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcMeterFirmwareReleaseVersion.
 *
 *					  "installed firmware (SPU and FPGA software) release version"
 *
 *	See Also		: SetMaxEmkcMeterFirmwareReleaseVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeterFirmwareReleaseVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeterFirmwareReleaseVersion() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcMeterFirmwareReleaseVersion);

	/* Please provide your code to instrument "maxEmkcMeterFirmwareReleaseVersion" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterFirmwareReleaseVersion);
	return (U_CHAR *)gv_maxEmkcMeterFirmwareReleaseVersion;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeterHardwareVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterHardwareVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcMeterHardwareVersion.
 *
 *					  "Hardware (schematic and PSB) version"
 *
 *	See Also		: SetMaxEmkcMeterHardwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeterHardwareVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeterHardwareVersion() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcMeterHardwareVersion);

	/* Please provide your code to instrument "maxEmkcMeterHardwareVersion" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterHardwareVersion);
	return (U_CHAR *)gv_maxEmkcMeterHardwareVersion;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeterSerialNumber()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterSerialNumber".
 *
 *	Task			: Get method for scalar variable maxEmkcMeterSerialNumber.
 *
 *					  "MAKC-EMKC1 serial number"
 *
 *	See Also		: SetMaxEmkcMeterSerialNumber().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeterSerialNumber(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeterSerialNumber() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcMeterSerialNumber);

	/* Please provide your code to instrument "maxEmkcMeterSerialNumber" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterSerialNumber);
	return (U_CHAR *)gv_maxEmkcMeterSerialNumber;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeterCpuSoftwareVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterCpuSoftwareVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcMeterCpuSoftwareVersion.
 *
 *					  "version of CPU software"
 *
 *	See Also		: GetMaxEmkcMeterCpuSoftwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeterCpuSoftwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeterCpuSoftwareVersion" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeterCpuSoftwareVersion() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 9)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}

	for( i=0;i<(*varValLen);i++)
		 {
			 if(isascii(varVal[i])==0)
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}

		}
	}
	else
	{
		/* Set the maxEmkcMeterCpuSoftwareVersion scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeterCpuSoftwareVersion,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcMeterCpuSoftwareVersion" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterCpuSoftwareVersion);
	return (U_CHAR *)gv_maxEmkcMeterCpuSoftwareVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeterFpgaBinImageVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterFpgaBinImageVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcMeterFpgaBinImageVersion.
 *
 *					  "installed FPGA binary image version"
 *
 *	See Also		: GetMaxEmkcMeterFpgaBinImageVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeterFpgaBinImageVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeterFpgaBinImageVersion" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeterFpgaBinImageVersion() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 9)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}

	for( i=0;i<(*varValLen);i++)
		 {
			 if(isascii(varVal[i])==0)
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}

		}
	}
	else
	{
		/* Set the maxEmkcMeterFpgaBinImageVersion scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeterFpgaBinImageVersion,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcMeterFpgaBinImageVersion" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterFpgaBinImageVersion);
	return (U_CHAR *)gv_maxEmkcMeterFpgaBinImageVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeterFirmwareReleaseVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterFirmwareReleaseVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcMeterFirmwareReleaseVersion.
 *
 *					  "installed firmware (SPU and FPGA software) release version"
 *
 *	See Also		: GetMaxEmkcMeterFirmwareReleaseVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeterFirmwareReleaseVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeterFirmwareReleaseVersion" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeterFirmwareReleaseVersion() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 6)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}

	for( i=0;i<(*varValLen);i++)
		 {
			 if(isascii(varVal[i])==0)
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}

		}
	}
	else
	{
		/* Set the maxEmkcMeterFirmwareReleaseVersion scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeterFirmwareReleaseVersion,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcMeterFirmwareReleaseVersion" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterFirmwareReleaseVersion);
	return (U_CHAR *)gv_maxEmkcMeterFirmwareReleaseVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeterHardwareVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterHardwareVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcMeterHardwareVersion.
 *
 *					  "Hardware (schematic and PSB) version"
 *
 *	See Also		: GetMaxEmkcMeterHardwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeterHardwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeterHardwareVersion" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeterHardwareVersion() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 5)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}

	for( i=0;i<(*varValLen);i++)
		 {
			 if(isascii(varVal[i])==0)
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}

		}
	}
	else
	{
		/* Set the maxEmkcMeterHardwareVersion scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeterHardwareVersion,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcMeterHardwareVersion" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterHardwareVersion);
	return (U_CHAR *)gv_maxEmkcMeterHardwareVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeterSerialNumber()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeterSerialNumber".
 *
 *	Task			: Set method for scalar variable maxEmkcMeterSerialNumber.
 *
 *					  "MAKC-EMKC1 serial number"
 *
 *	See Also		: GetMaxEmkcMeterSerialNumber().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeterSerialNumber(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcMeterSerialNumber" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeterSerialNumber() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 4)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}

	for( i=0;i<(*varValLen);i++)
		 {
			 if(isascii(varVal[i])==0)
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}

		}
	}
	else
	{
		/* Set the maxEmkcMeterSerialNumber scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcMeterSerialNumber,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcMeterSerialNumber" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcMeterSerialNumber);
	return (U_CHAR *)gv_maxEmkcMeterSerialNumber;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeterinfoinstru.c
 *****************************************************************************/
