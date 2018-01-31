/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeterinfoftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkcmeterinfo.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
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
#ifdef FILE_TO_VECTOR
#include "genincludes.h"
#include "maxemkcmeterinfo.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcMeterInfoFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcMeterInfoFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcMeterInfoFile()
{
	FILE	*fptr;
	CHAR 	tempString[STRING_MAX_LEN];
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcMeterInfoFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCMETERINFO_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCMETERINFO_FILE);

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
		/* Reading from the file for the scalar gv_maxEmkcMeterCpuSoftwareVersion. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcMeterCpuSoftwareVersion = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeterCpuSoftwareVersion);

		

		__Strcpy((CHAR *)gv_maxEmkcMeterCpuSoftwareVersion, tempString);

		/* Reading from the file for the scalar gv_maxEmkcMeterFpgaBinImageVersion. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcMeterFpgaBinImageVersion = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeterFpgaBinImageVersion);

		

		__Strcpy((CHAR *)gv_maxEmkcMeterFpgaBinImageVersion, tempString);

		/* Reading from the file for the scalar gv_maxEmkcMeterFirmwareReleaseVersion. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcMeterFirmwareReleaseVersion = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeterFirmwareReleaseVersion);

		

		__Strcpy((CHAR *)gv_maxEmkcMeterFirmwareReleaseVersion, tempString);

		/* Reading from the file for the scalar gv_maxEmkcMeterHardwareVersion. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcMeterHardwareVersion = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeterHardwareVersion);

		

		__Strcpy((CHAR *)gv_maxEmkcMeterHardwareVersion, tempString);

		/* Reading from the file for the scalar gv_maxEmkcMeterSerialNumber. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcMeterSerialNumber = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcMeterSerialNumber);

		

		__Strcpy((CHAR *)gv_maxEmkcMeterSerialNumber, tempString);
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcMeterInfoFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcMeterInfoFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcMeterInfoFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcMeterInfoFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCMETERINFO_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCMETERINFO_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	
	/* Writing to the file for the scalar gv_maxEmkcMeterCpuSoftwareVersion. */
	fprintf(fptr, "%s ", gv_maxEmkcMeterCpuSoftwareVersion);

	
	/* Writing to the file for the scalar gv_maxEmkcMeterFpgaBinImageVersion. */
	fprintf(fptr, "%s ", gv_maxEmkcMeterFpgaBinImageVersion);

	
	/* Writing to the file for the scalar gv_maxEmkcMeterFirmwareReleaseVersion. */
	fprintf(fptr, "%s ", gv_maxEmkcMeterFirmwareReleaseVersion);

	
	/* Writing to the file for the scalar gv_maxEmkcMeterHardwareVersion. */
	fprintf(fptr, "%s ", gv_maxEmkcMeterHardwareVersion);

	
	/* Writing to the file for the scalar gv_maxEmkcMeterSerialNumber. */
	fprintf(fptr, "%s \n", gv_maxEmkcMeterSerialNumber);


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeterinfoftov.c
 *****************************************************************************/
