/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Core\Serializer.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _SERIALIZER_H__Included_163877122
#define _SERIALIZER_H__Included_163877122


namespace ASC
{
	class Serializer
	{
	public:
		Serializer(void);
		virtual ~Serializer(void);
		
		virtual void serialize(void* ptr) = 0;
		virtual void deserialize(void* ptr) = 0;
	};

}

#endif //_SERIALIZER_H__Included_163877122

