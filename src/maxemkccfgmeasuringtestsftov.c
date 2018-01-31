/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasuringtestsftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgmeasuringtests.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:52 MSK 2018
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
#include "maxemkccfgmeasuringtests.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgMeasuringTestsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgMeasuringTestsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgMeasuringTestsFile()
{
	FILE	*fptr;
	INT32	len;
	U_CHAR	tempPtrmaxEmkcCfgTestNtpTimeOfStart[STRING_MAX_LEN];
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgMeasuringTestsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGMEASURINGTESTS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGMEASURINGTESTS_FILE);

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
		/* Reading from the file for the scalar gv_maxEmkcCfgTestTimeMode. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgTestTimeMode) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgTestNtpTimeOfStart. */
		if(fscanf(fptr,"%d ",&len) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgTestNtpTimeOfStartLen = len;

		if(ReadStringFromFile(fptr, tempPtrmaxEmkcCfgTestNtpTimeOfStart, len) == FAILURE)
		{
			break;
		}
		gv_maxEmkcCfgTestNtpTimeOfStart = ConvertToDateTimeFromString((U_CHAR *)tempPtrmaxEmkcCfgTestNtpTimeOfStart, &gv_maxEmkcCfgTestNtpTimeOfStartLen);

		/* Reading from the file for the scalar gv_maxEmkcCfgTestLoopType. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgTestLoopType) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgTestType. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgTestType) == EOF)
		{
			break;
		}
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgMeasuringTestsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgMeasuringTestsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgMeasuringTestsFile()
{
	FILE	*fptr;
	U_CHAR	*tempPtr;
	INT32	tempmaxEmkcCfgTestNtpTimeOfStartLen;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgMeasuringTestsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGMEASURINGTESTS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGMEASURINGTESTS_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	/* Writing to the file for the scalar gv_maxEmkcCfgTestTimeMode. */
	fprintf(fptr,"%d ",
				gv_maxEmkcCfgTestTimeMode);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgTestNtpTimeOfStart. */

	tempmaxEmkcCfgTestNtpTimeOfStartLen = gv_maxEmkcCfgTestNtpTimeOfStartLen;

	tempPtr = ConvertToStringFromDateTime(gv_maxEmkcCfgTestNtpTimeOfStart,
												   &tempmaxEmkcCfgTestNtpTimeOfStartLen);

	fprintf(fptr,"%d ",tempmaxEmkcCfgTestNtpTimeOfStartLen);

	WriteStringToFile(fptr, tempPtr, tempmaxEmkcCfgTestNtpTimeOfStartLen);
		__Free(tempPtr);
	
	fprintf(fptr, "%c", ' ');


	/* Writing to file for the scalars gv_maxEmkcCfgTestLoopType, gv_maxEmkcCfgTestType*/
	fprintf(fptr,"%d %d \n",
				gv_maxEmkcCfgTestLoopType, 
				gv_maxEmkcCfgTestType);


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasuringtestsftov.c
 *****************************************************************************/
