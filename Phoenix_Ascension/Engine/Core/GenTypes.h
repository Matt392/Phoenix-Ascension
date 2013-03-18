/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Core\GenTypes.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _GENTYPES_H__Included_909425427
#define _GENTYPES_H__Included_909425427

typedef float 			FLOAT32;
typedef double 			FLOAT64;

typedef unsigned long long int UINT64;
typedef signed long long int SINT64;

typedef unsigned int 	UINT32;
typedef signed int		SINT32;

typedef unsigned short	UINT16;
typedef signed short	SINT16;

typedef unsigned char	UINT8;
typedef signed char		SINT8;

typedef char CHAR8;
typedef wchar_t CHAR16;

typedef const void* Handle;

namespace ASC
{
	#define MAX_UINT 4294967295
}

#endif //_GENTYPES_H__Included_909425427

