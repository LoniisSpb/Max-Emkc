/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeterinfo.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcmeterinfo.
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

#ifndef  __MAXEMKCMETERINFO_H__
#define  __MAXEMKCMETERINFO_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCMETERINFO_MAXEMKCMETERCPUSOFTWAREVERSION	1
#define	MAXEMKCMETERINFO_MAXEMKCMETERFPGABINIMAGEVERSION	2
#define	MAXEMKCMETERINFO_MAXEMKCMETERFIRMWARERELEASEVERSION	3
#define	MAXEMKCMETERINFO_MAXEMKCMETERHARDWAREVERSION	4
#define	MAXEMKCMETERINFO_MAXEMKCMETERSERIALNUMBER	5

#define MAXEMKCMETERINFO_OID_LEN	12
#define MAXEMKCMETERINFO_SUBID_LEN	5

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCMETERINFO_FILE	"ftov/max-emkc/maxemkcmeterinfo.txt"
#elif defined (WINDOWS)
#define MAXEMKCMETERINFO_FILE	"ftov\\max-emkc\\maxemkcmeterinfo.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCMETERINFO_PUBLIC


/* The oid to register */
MAXEMKCMETERINFO_PUBLIC OID gv_maxEmkcMeterInfoOid[MAXEMKCMETERINFO_OID_LEN] = {1,3,6,1,4,1,5597,1,1,1,1,5};

/* The subid list of the registerd oid */
MAXEMKCMETERINFO_PUBLIC OID gv_maxEmkcMeterInfoSubIdList[MAXEMKCMETERINFO_SUBID_LEN] = {1,2,3,4,5};

/* Access type of each subid of the registered oid */
MAXEMKCMETERINFO_PUBLIC U_CHAR gv_maxEmkcMeterInfoSubIdListAccess[MAXEMKCMETERINFO_SUBID_LEN] = {RONLY, RONLY, RONLY, RONLY, RONLY};

/* The data type of each subid of the registered oid */
MAXEMKCMETERINFO_PUBLIC U_CHAR gv_maxEmkcMeterInfoSubIdListDataTypes[MAXEMKCMETERINFO_SUBID_LEN] = {ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR};

#else

#define MAXEMKCMETERINFO_PUBLIC extern 

/* The oid to register */
MAXEMKCMETERINFO_PUBLIC OID gv_maxEmkcMeterInfoOid[MAXEMKCMETERINFO_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCMETERINFO_PUBLIC OID gv_maxEmkcMeterInfoSubIdList[MAXEMKCMETERINFO_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCMETERINFO_PUBLIC U_CHAR gv_maxEmkcMeterInfoSubIdListAccess[MAXEMKCMETERINFO_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCMETERINFO_PUBLIC U_CHAR gv_maxEmkcMeterInfoSubIdListDataTypes[MAXEMKCMETERINFO_SUBID_LEN];

#endif /* #ifdef MAXEMKCMETERINFO_PUBLIC */

MAXEMKCMETERINFO_PUBLIC U_CHAR *gv_maxEmkcMeterCpuSoftwareVersion;
MAXEMKCMETERINFO_PUBLIC U_CHAR *gv_maxEmkcMeterFpgaBinImageVersion;
MAXEMKCMETERINFO_PUBLIC U_CHAR *gv_maxEmkcMeterFirmwareReleaseVersion;
MAXEMKCMETERINFO_PUBLIC U_CHAR *gv_maxEmkcMeterHardwareVersion;
MAXEMKCMETERINFO_PUBLIC U_CHAR *gv_maxEmkcMeterSerialNumber;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcmeterinfohdlr.c */
MAXEMKCMETERINFO_PUBLIC void InitMaxEmkcMeterInfo(void);

MAXEMKCMETERINFO_PUBLIC CHAR MaxEmkcMeterInfoProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCMETERINFO_PUBLIC U_CHAR *MaxEmkcMeterInfoProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *MaxEmkcMeterInfoProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC CHAR UpdateMaxEmkcMeterInfo(U_CHAR command);

/* Functions defined in maxemkcmeterinfoinstru.c */
MAXEMKCMETERINFO_PUBLIC U_CHAR *GetMaxEmkcMeterCpuSoftwareVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *SetMaxEmkcMeterCpuSoftwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *GetMaxEmkcMeterFpgaBinImageVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *SetMaxEmkcMeterFpgaBinImageVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *GetMaxEmkcMeterFirmwareReleaseVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *SetMaxEmkcMeterFirmwareReleaseVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *GetMaxEmkcMeterHardwareVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *SetMaxEmkcMeterHardwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *GetMaxEmkcMeterSerialNumber(INT32 *varValLen, U_CHAR *status);

MAXEMKCMETERINFO_PUBLIC U_CHAR *SetMaxEmkcMeterSerialNumber(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcmeterinfoftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCMETERINFO_PUBLIC CHAR ReadFromMaxEmkcMeterInfoFile();
MAXEMKCMETERINFO_PUBLIC CHAR WriteToMaxEmkcMeterInfoFile();
#endif

#endif  /* __MAXEMKCMETERINFO_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeterinfo.h
 *****************************************************************************/
