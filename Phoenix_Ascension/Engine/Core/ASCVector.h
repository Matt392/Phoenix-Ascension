/**
*	@Phoenix_Ascension Engine
 *	@file Phoenix_Ascension\Engine\Core\ASCVector.h
 *	@brief 
 *	
 *	Copyright()
 *		Copyright © 2011 Matt Dalzell. All Rights Reserved.
 *	
 *********************************************************************************************/
#ifndef _ASCVECTOR_H__Included_1144640075
#define _ASCVECTOR_H__Included_1144640075

#include "GenInc.h"
#include "serializer.h"

#define VECTOR_DEFAULT_INITIAL_SIZE 10
#define VECTOR_DEFAULT_INCREMENT_SIZE 10


namespace ASC
{

	template<typename T> class ASCVector : public Serializer
	{
	protected:
		UINT32 mi_totalSize;
		UINT32 mi_currentSize;
		UINT32 mi_incrementSize;
		T* mt_values;

	public:
		ASCVector(UINT32 i_initialSize = VECTOR_DEFAULT_INITIAL_SIZE, UINT32 i_incrementSize = VECTOR_DEFAULT_INCREMENT_SIZE)
			: mt_values( null )
			, mi_totalSize( i_initialSize )
			, mi_incrementSize( i_incrementSize )
			, mi_currentSize( 0 ) 
		{
			mt_values = new T[mi_totalSize];
		}

		virtual ~ASCVector(void)
		{
			safeDeleteArray(mt_values);
		}

		//Info
		UINT32 size()
		{
			return mi_currentSize;
		}

		UINT32 totalSize()
		{
			return mi_totalSize;
		}

		//Setup
		void setIncrement(UINT32 i_increment)
		{
			mi_incrementSize = i_increment;
		}

		//Accessing
		T& operator[](const UINT32& i_index)
		{
			return mt_values[i_index];
		}

		//Funtionality
		void push(T t_val)
		{
			if(mi_currentSize >= mi_totalSize)
			{
				incrementSize();
			}
			mt_values[mi_currentSize] = t_val;
			++mi_currentSize;
		}

		T pop()
		{
			return mt_values[--mi_currentSize];
		}

		T shift()
		{
			T t_return = mt_values[0];
			--mi_currentSize

			mem_move(&mt_values[0], &mt_values[1], sizeof(T) * mi_currentSize);

			return t_return;
		}

		ASCVector<T> slice(UINT32 i_startIndex, UINT32 i_endIndex = MAX_UINT)
		{
			ASCVector<T> vect_retrun(mi_currentSize);

			if(i_endIndex > mi_currentSize-i_startIndex)
			{
				i_endIndex = mi_currentSize-i_startIndex;
			}

			mem_cpy(vect_retrun.mt_values, mt_values[i_startIndex], sizeof(T) * i_endIndex);

			return vect_retrun;
		}

		void splice(UINT32 i_startIndex, UINT32 i_deleteCount, T t_new)
		{
			spliceOut(i_startIndex, i_deleteCount);
			spliceIn(i_startIndex, t_new);
		}

		void spliceIn(UINT32 i_startIndex, T t_new)
		{
			if(mi_currentSize >= mi_totalSize)
			{
				incrementSize();
			}
			
			mem_move(&mt_values[i_startIndex+1], &mt_values[i_startIndex], sizeof(T) * (mi_currentSize-i_startIndex));

			mt_values[i_startIndex] = t_new;

			++mi_currentSize;
		}

		void spliceOut(UINT32 i_startIndex, UINT32 i_deleteCount)
		{
			UINT32 i_shiftCount = mi_currentSize-i_startIndex-i_deleteCount
			mem_move(&mt_values[i_startIndex], &mt_values[i_startIndex+i_deleteCount], sizeof(T) * i_shiftCount);

			mi_currentSize -= i_deleteCount;
		}

		//Serialization
		virtual void serialize(void* ptr)
		{
			ptr;
		}

		virtual void deserialize(void* ptr)
		{
			ptr;
		}

	private:
		//Helper Funtionality
		void incrementSize()
		{
			T* temp = new T[ mi_totalSize + mi_incrementSize ];

			mem_cpy( temp, mt_values, sizeof(T) * mi_totalSize );

			safeDeleteArray( mt_values );

			mi_totalSize += mi_incrementSize;

			mt_values = temp;
		}

	};

}

#endif //_ASCVECTOR_H__Included_1144640075

