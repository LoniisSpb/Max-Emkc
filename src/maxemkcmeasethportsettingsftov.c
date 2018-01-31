/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeasethportsettingsftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkcmeasethportsettings.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:25 MSK 2018
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
#include "maxemkcmeasethportsettings.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcMeasEthPortSettingsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcMeasEthPortSettingsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcMeasEthPortSettingsFile()
{
	FILE	*fptr;
	INT32	len;
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcMeasEthPortSettingsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCMEASETHPORTSETTINGS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCMEASETHPORTSETTINGS_FILE);

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
		/* Reading from the file for the scalar gv_maxEmkcMeasEthPortMacAddress. */
		if(fscanf(fptr,"%d ",&len) == EOF)
		{
			break;
		}

		gv_maxEmkcMeasEthPortMacAddress = (U_CHAR *) __Calloc(1, len+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeasEthPortMacAddress);

		

		gv_maxEmkcMeasEthPortMacAddressLen = len;

		if(ReadStringFromFile(fptr, gv_maxEmkcMeasEthPortMacAddress, len) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcMeasEthPortIpAddress. */
		if(fscanf(fptr,"%d ",&gv_maxEmkcMeasEthPortIpAddressLen) == EOF)
		{
			break;
		}
		gv_maxEmkcMeasEthPortIpAddress = (U_CHAR *) __Calloc(1, MAX_IPADDRESS_LEN+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeasEthPortIpAddress);

		if(ReadStringFromFile(fptr, gv_maxEmkcMeasEthPortIpAddress, gv_maxEmkcMeasEthPortIpAddressLen) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcMeasEthPortMask. */
		if(fscanf(fptr,"%u ", &gv_maxEmkcMeasEthPortMask) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcMeasEthPortGw. */
		if(fscanf(fptr,"%d ",&gv_maxEmkcMeasEthPortGwLen) == EOF)
		{
			break;
		}
		gv_maxEmkcMeasEthPortGw = (U_CHAR *) __Calloc(1, MAX_IPADDRESS_LEN+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeasEthPortGw);

		if(ReadStringFromFile(fptr, gv_maxEmkcMeasEthPortGw, gv_maxEmkcMeasEthPortGwLen) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_cmaxEmkcMeasuringEthPortDhcp. */
		if(fscanf(fptr,"%d ", &gv_cmaxEmkcMeasuringEthPortDhcp) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcMeasuringEthPortRate. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcMeasuringEthPortRate) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcMeasuringEthPortDuplex. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcMeasuringEthPortDuplex) == EOF)
		{
			break;
		}
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcMeasEthPortSettingsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcMeasEthPortSettingsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcMeasEthPortSettingsFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcMeasEthPortSettingsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCMEASETHPORTSETTINGS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCMEASETHPORTSETTINGS_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	
	/* Writing to the file for the scalar gv_maxEmkcMeasEthPortMacAddress. */
	fprintf(fptr,"%d ",gv_maxEmkcMeasEthPortMacAddressLen);

	WriteStringToFile(fptr, gv_maxEmkcMeasEthPortMacAddress, gv_maxEmkcMeasEthPortMacAddressLen);
	fprintf(fptr, "%c", ' ');


	
	/* Writing to the file for the scalar gv_maxEmkcMeasEthPortIpAddress. */
	fprintf(fptr,"%d ",gv_maxEmkcMeasEthPortIpAddressLen);

	WriteStringToFile(fptr, gv_maxEmkcMeasEthPortIpAddress, gv_maxEmkcMeasEthPortIpAddressLen);
	fprintf(fptr, "%c", ' ');


	/* Writing to the file for the scalar gv_maxEmkcMeasEthPortMask. */
	fprintf(fptr,"%u ",
				gv_maxEmkcMeasEthPortMask);

	
	/* Writing to the file for the scalar gv_maxEmkcMeasEthPortGw. */
	fprintf(fptr,"%d ",gv_maxEmkcMeasEthPortGwLen);

	WriteStringToFile(fptr, gv_maxEmkcMeasEthPortGw, gv_maxEmkcMeasEthPortGwLen);
	fprintf(fptr, "%c", ' ');


	/* Writing to file for the scalars gv_cmaxEmkcMeasuringEthPortDhcp, gv_maxEmkcMeasuringEthPortRate, gv_maxEmkcMeasuringEthPortDuplex*/
	fprintf(fptr,"%d %d %d \n",
				gv_cmaxEmkcMeasuringEthPortDhcp, 
				gv_maxEmkcMeasuringEthPortRate, 
				gv_maxEmkcMeasuringEthPortDuplex);


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeasethportsettingsftov.c
 *****************************************************************************/
