/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Engine\Core\StringRecycleBin.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _STRINGRECYCLEBIN_H__Included_494825117
#define _STRINGRECYCLEBIN_H__Included_494825117

#define ASC_STRING_START_SIZE 2
#define ASC_RECYCLER_RESIZE 256

#define MAX_RECYCLERS 12

namespace ASC
{
	class StringRecycleBin
	{
	protected:
		static StringRecycleBin* smp_instance;



	public:
		StringRecycleBin(void);
		~StringRecycleBin(void);

		static StringRecycleBin& Instance();
	};

}

#endif //_STRINGRECYCLEBIN_H__Included_494825117

