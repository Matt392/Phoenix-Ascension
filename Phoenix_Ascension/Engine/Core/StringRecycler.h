/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Engine\Core\StringRecycler.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _STRINGRECYCLER_H__Included_700072455
#define _STRINGRECYCLER_H__Included_700072455


namespace ASC
{
	class StringRecycler
	{
	public:
		StringRecycler(void);
		~StringRecycler(void);

		void Init(UINT32 uSizeOfStrings);
		
		CHAR8* GetString();
		void RecyleString(CHAR8* pString);

		UINT32 SizeOfStrings();

		bool InUse();

		void CleanUp();
		
		UINT32 TotalActive();
		UINT32 TotalInactive();
	};

}

#endif //_STRINGRECYCLER_H__Included_700072455

