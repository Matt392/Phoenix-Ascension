/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Core\Macros.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _MACROS_H__Included_1586773347
#define _MACROS_H__Included_1586773347

template<typename T> void safeDelete(T*& ptr)
{
	if(ptr)
	{
		delete ptr;
		ptr = 0;
	}
}

template<typename T> void safeDeleteArray(T*& ptr)
{
	if(ptr)
	{
		delete [] ptr;
		ptr = 0;
	}
}

namespace ASC
{
	#define SC_UINT(x) static_cast<UINT32>(x)
	#define SC_SINT(x) static_cast<SINT32>(x)
	#define SC_FLOAT(x) static_cast<FLOAT32>(x)
	#define SC_CHAR(x) static_cast<CHAR8>(x)
	#define REINTERP(x,y) reinterpret_cast<x>(y)
}

#endif //_MACROS_H__Included_1586773347

