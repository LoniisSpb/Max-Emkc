/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkctimeftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkctime.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:30 MSK 2018
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
#include "maxemkctime.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcTimeFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcTimeFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcTimeFile()
{
	FILE	*fptr;
	INT32	len;
	U_CHAR	tempPtrmaxEmkcSystemClockTime[STRING_MAX_LEN];
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcTimeFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCTIME_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCTIME_FILE);

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
		/* Reading from the file for the scalar gv_maxEmkcSubagentTimeticks. */
		if(fscanf(fptr,"%lu %lu ", &gv_maxEmkcSubagentTimeticks.high,
				  &gv_maxEmkcSubagentTimeticks.low) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcSystemClockTime. */
		if(fscanf(fptr,"%d ",&len) == EOF)
		{
			break;
		}

		gv_maxEmkcSystemClockTimeLen = len;

		if(ReadStringFromFile(fptr, tempPtrmaxEmkcSystemClockTime, len) == FAILURE)
		{
			break;
		}
		gv_maxEmkcSystemClockTime = ConvertToDateTimeFromString((U_CHAR *)tempPtrmaxEmkcSystemClockTime, &gv_maxEmkcSystemClockTimeLen);
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcTimeFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcTimeFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcTimeFile()
{
	FILE	*fptr;
	U_CHAR	*tempPtr;
	INT32	tempmaxEmkcSystemClockTimeLen;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcTimeFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCTIME_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCTIME_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	/* Writing to the file for the scalar gv_maxEmkcSubagentTimeticks. */
	fprintf(fptr,"%lu %lu ",
				gv_maxEmkcSubagentTimeticks.high,
				gv_maxEmkcSubagentTimeticks.low);

	
	/* Writing to the file for the scalar gv_maxEmkcSystemClockTime. */

	tempmaxEmkcSystemClockTimeLen = gv_maxEmkcSystemClockTimeLen;

	tempPtr = ConvertToStringFromDateTime(gv_maxEmkcSystemClockTime,
												   &tempmaxEmkcSystemClockTimeLen);

	fprintf(fptr,"%d ",tempmaxEmkcSystemClockTimeLen);

	WriteStringToFile(fptr, tempPtr, tempmaxEmkcSystemClockTimeLen);
		__Free(tempPtr);
	
	

	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkctimeftov.c
 *****************************************************************************/
