/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgstreamstableftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgstreamstable.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:48 MSK 2018
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
#include "maxemkccfgstreamstable.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgStreamsTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the "maxEmkcCfgStreamsTable" entries from 
 *					  the file and add it to the table(vector). After
 *					  Successfully reading from the file it returns SUCCESS
 *					  else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgStreamsTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgStreamsTableFile()
{
	FILE	*fptr;
	U_INT32 maxEmkcCfgStreamIndex;
	INT32	maxEmkcCfgStreamRowStatus;
	INT32	maxEmkcCfgStreamState;
	U_INT32 maxEmkcCfgY1564StreamPduLength;
	U_CHAR	maxEmkcCfgY1564StreamCir[STRING_MAX_LEN];
	U_CHAR	maxEmkcCfgY1564StreamEir[STRING_MAX_LEN];
	U_CHAR	maxEmkcCfgY1564StreamNonConformToCirEirRate[STRING_MAX_LEN];
	U_CHAR	maxEmkcCfgY1564StreamFlrTreshold[STRING_MAX_LEN];
	U_INT32 maxEmkcCfgY1564StreamFtdTreshold;
	U_INT32 maxEmkcCfgY1564StreamFdvTreshold;
	U_INT32 maxEmkcCfgY1564StreamAvail;
	U_INT32 maxEmkcCfgY1564StreamMeasNetworkRow;
	CHAR	*fileName;
	CHAR	retVal;
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgStreamsTableFile() @@@@@\n");

	retVal = SUCCESS;

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGSTREAMSTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGSTREAMSTABLE_FILE);

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
		/* Reading from the file for the column maxEmkcCfgStreamIndex. */
		if(fscanf(fptr,"%u ",
				&maxEmkcCfgStreamIndex)== EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgStreamRowStatus. */
		if(fscanf(fptr,"%s ", rowStatus) == EOF)
		{
			break;
		}

		/* Reading from file for the columns maxEmkcCfgStreamState, maxEmkcCfgY1564StreamPduLength */
		if(fscanf(fptr,"%d %u ",
				&maxEmkcCfgStreamState, 
				&maxEmkcCfgY1564StreamPduLength) == EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgY1564StreamCir. */
		if(fscanf(fptr,"%s ", maxEmkcCfgY1564StreamCir) == EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgY1564StreamEir. */
		if(fscanf(fptr,"%s ", maxEmkcCfgY1564StreamEir) == EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgY1564StreamNonConformToCirEirRate. */
		if(fscanf(fptr,"%s ", maxEmkcCfgY1564StreamNonConformToCirEirRate) == EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgY1564StreamFlrTreshold. */
		if(fscanf(fptr,"%s ", maxEmkcCfgY1564StreamFlrTreshold) == EOF)
		{
			break;
		}

		/* Reading from file for the columns maxEmkcCfgY1564StreamFtdTreshold, maxEmkcCfgY1564StreamFdvTreshold, maxEmkcCfgY1564StreamAvail, maxEmkcCfgY1564StreamMeasNetworkRow*/
		if(fscanf(fptr,"%u %u %u %u ",
				&maxEmkcCfgY1564StreamFtdTreshold, 
				&maxEmkcCfgY1564StreamFdvTreshold, 
				&maxEmkcCfgY1564StreamAvail, 
				&maxEmkcCfgY1564StreamMeasNetworkRow)== EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgY1564StreamMeasNetworkRow. */
		MapRowStatusToInteger(rowStatus, &maxEmkcCfgStreamRowStatus);

		if(maxEmkcCfgStreamRowStatus != ERR_NUM)
		{
		/* Creates an Instance for "maxEmkcCfgStreamsTable" and adds it to the correspondingvector. */
		retVal = CreateAndAddNewMaxEmkcCfgStreamsTableEntry(maxEmkcCfgStreamIndex, maxEmkcCfgStreamRowStatus, 
					maxEmkcCfgStreamState, maxEmkcCfgY1564StreamPduLength, 
					maxEmkcCfgY1564StreamCir, maxEmkcCfgY1564StreamEir, 
					maxEmkcCfgY1564StreamNonConformToCirEirRate, maxEmkcCfgY1564StreamFlrTreshold, 
					maxEmkcCfgY1564StreamFtdTreshold, maxEmkcCfgY1564StreamFdvTreshold, 
					maxEmkcCfgY1564StreamAvail, maxEmkcCfgY1564StreamMeasNetworkRow);
		}
	}

	fclose(fptr);

	return retVal;
}


/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgStreamsTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the "maxEmkcCfgStreamsTable" entries from
 * 					  the table(vector). After successfully writing into the 
 * 					  file it returns SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgStreamsTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgStreamsTableFile()
{
	INT32	i;
	FILE	*fptr;

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgStreamsTableFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGSTREAMSTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGSTREAMSTABLE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	nodePtr = ElementAt(&gv_maxEmkcCfgStreamsTableVector, 0);

	for (i=0; i<gv_maxEmkcCfgStreamsTableVector.size; i++)
	{
		entryPtr = (Entry *)nodePtr->refPtr;
		maxEmkcCfgStreamsTableEntryPtr = (MaxEmkcCfgStreamsTableEntry *)entryPtr->ptr;

		/* Writing to the file for the column maxEmkcCfgStreamIndex. */
		fprintf(fptr,"%u ",
				maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamIndex);

		MapRowStatusToString(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus, rowStatus);

		/* Writing to file for the columns maxEmkcCfgStreamRowStatus , maxEmkcCfgStreamState , maxEmkcCfgY1564StreamPduLength */
		fprintf(fptr,"%s %d %u ",
				rowStatus, 
				maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState, 
				maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength);

		
		/* Writing to the file for the column maxEmkcCfgY1564StreamCir. */
		fprintf(fptr, "%s ", maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir);

		
		/* Writing to the file for the column maxEmkcCfgY1564StreamEir. */
		fprintf(fptr, "%s ", maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir);

		
		/* Writing to the file for the column maxEmkcCfgY1564StreamNonConformToCirEirRate. */
		fprintf(fptr, "%s ", maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate);

		
		/* Writing to the file for the column maxEmkcCfgY1564StreamFlrTreshold. */
		fprintf(fptr, "%s ", maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold);

		/* Writing to file for the columns maxEmkcCfgY1564StreamFtdTreshold , maxEmkcCfgY1564StreamFdvTreshold , maxEmkcCfgY1564StreamAvail , maxEmkcCfgY1564StreamMeasNetworkRow*/
		fprintf(fptr,"%u %u %u %u \n",
				maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold, 
				maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold, 
				maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail, 
				maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow);

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
 *						 End of maxemkccfgstreamstableftov.c
 *****************************************************************************/
