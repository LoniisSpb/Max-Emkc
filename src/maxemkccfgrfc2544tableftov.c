/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgrfc2544tableftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgrfc2544table.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:35 MSK 2018
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
#include "maxemkccfgrfc2544table.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgRfc2544TableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the "maxEmkcCfgRfc2544Table" entries from 
 *					  the file and add it to the table(vector). After
 *					  Successfully reading from the file it returns SUCCESS
 *					  else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgRfc2544TableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgRfc2544TableFile()
{
	FILE	*fptr;
	U_INT32 maxEmkcCfgRfc2544TableIndex;
	INT32	maxEmkcCfgRfc2544TableRowStatus;
	CHAR	*fileName;
	CHAR	retVal;
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgRfc2544TableFile() @@@@@\n");

	retVal = SUCCESS;

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGRFC2544TABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGRFC2544TABLE_FILE);

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
		/* Reading from the file for the column maxEmkcCfgRfc2544TableIndex. */
		if(fscanf(fptr,"%u ",
				&maxEmkcCfgRfc2544TableIndex)== EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgRfc2544TableRowStatus. */
		if(fscanf(fptr,"%s ", rowStatus) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgRfc2544TableRowStatus. */
		MapRowStatusToInteger(rowStatus, &maxEmkcCfgRfc2544TableRowStatus);

		if(maxEmkcCfgRfc2544TableRowStatus != ERR_NUM)
		{
		/* Creates an Instance for "maxEmkcCfgRfc2544Table" and adds it to the correspondingvector. */
		retVal = CreateAndAddNewMaxEmkcCfgRfc2544TableEntry(maxEmkcCfgRfc2544TableIndex, maxEmkcCfgRfc2544TableRowStatus);
		}
	}

	fclose(fptr);

	return retVal;
}


/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgRfc2544TableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the "maxEmkcCfgRfc2544Table" entries from
 * 					  the table(vector). After successfully writing into the 
 * 					  file it returns SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgRfc2544TableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgRfc2544TableFile()
{
	INT32	i;
	FILE	*fptr;

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgRfc2544TableFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGRFC2544TABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGRFC2544TABLE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	nodePtr = ElementAt(&gv_maxEmkcCfgRfc2544TableVector, 0);

	for (i=0; i<gv_maxEmkcCfgRfc2544TableVector.size; i++)
	{
		entryPtr = (Entry *)nodePtr->refPtr;
		maxEmkcCfgRfc2544TableEntryPtr = (MaxEmkcCfgRfc2544TableEntry *)entryPtr->ptr;

		/* Writing to the file for the column maxEmkcCfgRfc2544TableIndex. */
		fprintf(fptr,"%u ",
				maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableIndex);

		MapRowStatusToString(maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus, rowStatus);

		/* Writing to the file for the column maxEmkcCfgRfc2544TableRowStatus. */
		fprintf(fptr,"%s \n",
				rowStatus);

		nodePtr = nodePtr->nextPtr;

	}


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgrfc2544tableftov.c
 *****************************************************************************/
