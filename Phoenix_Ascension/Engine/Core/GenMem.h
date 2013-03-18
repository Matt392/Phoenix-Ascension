/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Engine\Core\GenMem.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _GENMEM_H__Included_373686817
#define _GENMEM_H__Included_373686817


namespace ASC
{
	void* mem_cpy(void* dest, const void* src, size_t length);
	void* mem_move(void* dest, const void* src, size_t length);
}

#endif //_GENMEM_H__Included_373686817

