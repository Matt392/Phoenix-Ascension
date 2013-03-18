/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Core\ASCString.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _ASCSTRING_H__Included_1906725034
#define _ASCSTRING_H__Included_1906725034

#include "Serializer.h"

namespace ASC
{
	static const UINT32 m_kiInitialStringSize = 2;
	static const UINT32 m_kiIncreaseStringSize = 4;

	static const SINT8 ks_ilutLetterValues[128] = 
	{
		-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,//0
		-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,//10
		-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,//20
		-1, -1,  0,  1,  2,  3,  4,  5,  6,  7,//30
		 8,  9, 10, 11, 12, 13, 14, 15, 16, 17,//40
		18, 19, 20, 21, 22, 23, 24, 25, 26, 27,//50
		28, 29, 30, 31, 32, 33, 34, 35, 36, 37,//60
		38, 39, 40, 41, 42, 43, 44, 45, 46, 47,//70
		48, 49, 50, 51, 52, 53, 54, 55, 56, 57,//80
		58, 59, 60, 61, 62, 63, 64, 33, 34, 35,//90
		36, 37, 38, 39, 40, 41, 42, 43, 44, 45,//100
		46, 47, 48, 49, 50, 51, 52, 53, 54, 55,//110
		56, 57, 58, 65, 66, 67, 68, 69//120
	};

	class ASCString : public Serializer
	{
	protected:
		UINT32 m_uMaxSize;
		UINT32 m_iLetterCount;
		CHAR8* m_strString;

	public:
		//Constructors
		ASCString(void);
		ASCString(const CHAR8* str);
		ASCString(const ASCString& str);

		//Destructors
		virtual ~ASCString(void);
	};

}

#endif //_ASCSTRING_H__Included_1906725034

