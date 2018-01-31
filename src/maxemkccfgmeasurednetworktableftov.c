/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasurednetworktableftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgmeasurednetworktable.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:51 MSK 2018
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
#include "maxemkccfgmeasurednetworktable.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgMeasuredNetworkTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the "maxEmkcCfgMeasuredNetworkTable"
 *					  entries from the file and add it to the table(vector). 
 *					  After Successfully reading from the file it returns
 *					  SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgMeasuredNetworkTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgMeasuredNetworkTableFile()
{
	FILE	*fptr;
	U_INT32 maxEmkcCfgMeasNetTableIndex;
	INT32	maxEmkcCfgMeasNetTableRowStatus;
	INT32	maxEmkcCfgMeasNetAddressingType;
	U_CHAR	maxEmkcCfgMeasNetDestMac[STRING_MAX_LEN];
	INT32	maxEmkcCfgMeasNetDestMacLen;
	U_CHAR	maxEmkcCfgMeasNetDestIp[STRING_MAX_LEN];
	INT32	maxEmkcCfgMeasNetDestIpLen;
	U_INT32 maxEmkcCfgMeasNetSourcePort;
	U_INT32 maxEmkcCfgMeasNetDestPort;
	U_INT32 maxEmkcCfgMeasNetTosDscp;
	CHAR	*fileName;
	CHAR	retVal;
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgMeasuredNetworkTableFile() @@@@@\n");

	retVal = SUCCESS;

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGMEASUREDNETWORKTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGMEASUREDNETWORKTABLE_FILE);

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
		/* Reading from the file for the column maxEmkcCfgMeasNetTableIndex. */
		if(fscanf(fptr,"%u ",
				&maxEmkcCfgMeasNetTableIndex)== EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgMeasNetTableRowStatus. */
		if(fscanf(fptr,"%s ", rowStatus) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgMeasNetAddressingType. */
		if(fscanf(fptr,"%d ",
				&maxEmkcCfgMeasNetAddressingType) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgMeasNetDestMac. */
		if(fscanf(fptr,"%d ", &maxEmkcCfgMeasNetDestMacLen) == EOF)
		{
			break;
		}
		/* Reading from the file for the column maxEmkcCfgMeasNetDestMac. */
		if(ReadStringFromFile(fptr, maxEmkcCfgMeasNetDestMac, maxEmkcCfgMeasNetDestMacLen) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgMeasNetDestIp. */
		if(fscanf(fptr,"%d ", &maxEmkcCfgMeasNetDestIpLen) == EOF)
		{
			break;
		}
		/* Reading from the file for the column maxEmkcCfgMeasNetDestIp. */
		if(ReadStringFromFile(fptr, maxEmkcCfgMeasNetDestIp, maxEmkcCfgMeasNetDestIpLen) == FAILURE)
		{
			break;
		}

		/* Reading from file for the columns maxEmkcCfgMeasNetSourcePort, maxEmkcCfgMeasNetDestPort, maxEmkcCfgMeasNetTosDscp*/
		if(fscanf(fptr,"%u %u %u ",
				&maxEmkcCfgMeasNetSourcePort, 
				&maxEmkcCfgMeasNetDestPort, 
				&maxEmkcCfgMeasNetTosDscp)== EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgMeasNetTosDscp. */
		MapRowStatusToInteger(rowStatus, &maxEmkcCfgMeasNetTableRowStatus);

		if(maxEmkcCfgMeasNetTableRowStatus != ERR_NUM)
		{
		/* Creates an Instance for "maxEmkcCfgMeasuredNetworkTable" and adds it to the correspondingvector. */
		retVal = CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableEntry(maxEmkcCfgMeasNetTableIndex, maxEmkcCfgMeasNetTableRowStatus, 
					maxEmkcCfgMeasNetAddressingType, maxEmkcCfgMeasNetDestMac, 
					maxEmkcCfgMeasNetDestMacLen, maxEmkcCfgMeasNetDestIp, maxEmkcCfgMeasNetDestIpLen, maxEmkcCfgMeasNetSourcePort, 
					maxEmkcCfgMeasNetDestPort, maxEmkcCfgMeasNetTosDscp);
		}
	}

	fclose(fptr);

	return retVal;
}


/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgMeasuredNetworkTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the "maxEmkcCfgMeasuredNetworkTable"
 * 					  entries from the table(vector). After successfully
 * 					  writing into the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgMeasuredNetworkTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgMeasuredNetworkTableFile()
{
	INT32	i;
	FILE	*fptr;

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgMeasuredNetworkTableFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGMEASUREDNETWORKTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGMEASUREDNETWORKTABLE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	nodePtr = ElementAt(&gv_maxEmkcCfgMeasuredNetworkTableVector, 0);

	for (i=0; i<gv_maxEmkcCfgMeasuredNetworkTableVector.size; i++)
	{
		entryPtr = (Entry *)nodePtr->refPtr;
		maxEmkcCfgMeasuredNetworkTableEntryPtr = (MaxEmkcCfgMeasuredNetworkTableEntry *)entryPtr->ptr;

		/* Writing to the file for the column maxEmkcCfgMeasNetTableIndex. */
		fprintf(fptr,"%u ",
				maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableIndex);

		MapRowStatusToString(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus, rowStatus);

		/* Writing to file for the columns maxEmkcCfgMeasNetTableRowStatus , maxEmkcCfgMeasNetAddressingType */
		fprintf(fptr,"%s %d ",
				rowStatus, 
				maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType);

		
		/* Writing to the file for the column maxEmkcCfgMeasNetDestMac. */
		fprintf(fptr,"%d ",maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen);
	
		WriteStringToFile(fptr, maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac, maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen);
		fprintf(fptr, "%c", ' ');


		
		/* Writing to the file for the column maxEmkcCfgMeasNetDestIp. */
		fprintf(fptr,"%d ",maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIpLen);
	
		WriteStringToFile(fptr, maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp, maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIpLen);
		fprintf(fptr, "%c", ' ');


		/* Writing to file for the columns maxEmkcCfgMeasNetSourcePort , maxEmkcCfgMeasNetDestPort , maxEmkcCfgMeasNetTosDscp*/
		fprintf(fptr,"%u %u %u \n",
				maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort, 
				maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort, 
				maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp);

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
 *						 End of maxemkccfgmeasurednetworktableftov.c
 *****************************************************************************/
