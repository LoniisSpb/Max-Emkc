/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasuringethportftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgmeasuringethport.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:33 MSK 2018
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
#ifdef FILE_TO_VECTOR
#include "genincludes.h"
#include "maxemkccfgmeasuringethport.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgMeasuringEthPortFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgMeasuringEthPortFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgMeasuringEthPortFile()
{
	FILE	*fptr;
	INT32	len;
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgMeasuringEthPortFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGMEASURINGETHPORT_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGMEASURINGETHPORT_FILE);

	fptr = fopen(fileName, "r");

	__Free(fileName);

	if( fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for reading\n");
		return FAILURE;
	}

	while (!feof(fptr))
	{
		IGNORE_COMMENTED_LINES();
		/* Reading from the file for the scalar gv_maxEmkcCfgMeasEthPortMacAddress. */
		if(fscanf(fptr,"%d ",&len) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgMeasEthPortMacAddress = (U_CHAR *) __Calloc(1, len+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgMeasEthPortMacAddress);

		

		gv_maxEmkcCfgMeasEthPortMacAddressLen = len;

		if(ReadStringFromFile(fptr, gv_maxEmkcCfgMeasEthPortMacAddress, len) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgMeasEthPortIpAddress. */
		if(fscanf(fptr,"%d ",&gv_maxEmkcCfgMeasEthPortIpAddressLen) == EOF)
		{
			break;
		}
		gv_maxEmkcCfgMeasEthPortIpAddress = (U_CHAR *) __Calloc(1, MAX_IPADDRESS_LEN+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgMeasEthPortIpAddress);

		if(ReadStringFromFile(fptr, gv_maxEmkcCfgMeasEthPortIpAddress, gv_maxEmkcCfgMeasEthPortIpAddressLen) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgMeasEthPortMask. */
		if(fscanf(fptr,"%u ", &gv_maxEmkcCfgMeasEthPortMask) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgMeasEthPortGw. */
		if(fscanf(fptr,"%d ",&gv_maxEmkcCfgMeasEthPortGwLen) == EOF)
		{
			break;
		}
		gv_maxEmkcCfgMeasEthPortGw = (U_CHAR *) __Calloc(1, MAX_IPADDRESS_LEN+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgMeasEthPortGw);

		if(ReadStringFromFile(fptr, gv_maxEmkcCfgMeasEthPortGw, gv_maxEmkcCfgMeasEthPortGwLen) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgMeasEthPortDhcp. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgMeasEthPortDhcp) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgMeasEthPortRate. */
		if(fscanf(fptr,"%d ",&len) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgMeasEthPortRate = (U_CHAR *) __Calloc(1, len+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgMeasEthPortRate);

		

		gv_maxEmkcCfgMeasEthPortRateLen = len;

		if(ReadStringFromFile(fptr, gv_maxEmkcCfgMeasEthPortRate, len) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgMeasEthPortDuplex. */
		if(fscanf(fptr,"%d ",&len) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgMeasEthPortDuplex = (U_CHAR *) __Calloc(1, len+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgMeasEthPortDuplex);

		

		gv_maxEmkcCfgMeasEthPortDuplexLen = len;

		if(ReadStringFromFile(fptr, gv_maxEmkcCfgMeasEthPortDuplex, len) == FAILURE)
		{
			break;
		}
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgMeasuringEthPortFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgMeasuringEthPortFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgMeasuringEthPortFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgMeasuringEthPortFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGMEASURINGETHPORT_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGMEASURINGETHPORT_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	
	/* Writing to the file for the scalar gv_maxEmkcCfgMeasEthPortMacAddress. */
	fprintf(fptr,"%d ",gv_maxEmkcCfgMeasEthPortMacAddressLen);

	WriteStringToFile(fptr, gv_maxEmkcCfgMeasEthPortMacAddress, gv_maxEmkcCfgMeasEthPortMacAddressLen);
	fprintf(fptr, "%c", ' ');


	
	/* Writing to the file for the scalar gv_maxEmkcCfgMeasEthPortIpAddress. */
	fprintf(fptr,"%d ",gv_maxEmkcCfgMeasEthPortIpAddressLen);

	WriteStringToFile(fptr, gv_maxEmkcCfgMeasEthPortIpAddress, gv_maxEmkcCfgMeasEthPortIpAddressLen);
	fprintf(fptr, "%c", ' ');


	/* Writing to the file for the scalar gv_maxEmkcCfgMeasEthPortMask. */
	fprintf(fptr,"%u ",
				gv_maxEmkcCfgMeasEthPortMask);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgMeasEthPortGw. */
	fprintf(fptr,"%d ",gv_maxEmkcCfgMeasEthPortGwLen);

	WriteStringToFile(fptr, gv_maxEmkcCfgMeasEthPortGw, gv_maxEmkcCfgMeasEthPortGwLen);
	fprintf(fptr, "%c", ' ');


	/* Writing to the file for the scalar gv_maxEmkcCfgMeasEthPortDhcp. */
	fprintf(fptr,"%d ",
				gv_maxEmkcCfgMeasEthPortDhcp);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgMeasEthPortRate. */
	fprintf(fptr,"%d ",gv_maxEmkcCfgMeasEthPortRateLen);

	WriteStringToFile(fptr, gv_maxEmkcCfgMeasEthPortRate, gv_maxEmkcCfgMeasEthPortRateLen);
	fprintf(fptr, "%c", ' ');


	
	/* Writing to the file for the scalar gv_maxEmkcCfgMeasEthPortDuplex. */
	fprintf(fptr,"%d ",gv_maxEmkcCfgMeasEthPortDuplexLen);

	WriteStringToFile(fptr, gv_maxEmkcCfgMeasEthPortDuplex, gv_maxEmkcCfgMeasEthPortDuplexLen);
	

	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasuringethportftov.c
 *****************************************************************************/
