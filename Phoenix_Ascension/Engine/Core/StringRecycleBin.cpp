#include "GenInc.h"
#include "StringRecycleBin.h"

StringRecycleBin* StringRecycleBin::smp_instance = null;

StringRecycleBin& 
StringRecycleBin::Instance()
{
	if(smp_instance == null)
	{
		smp_instance = new StringRecycleBin();
	}
	return *smp_instance;
}

StringRecycleBin::StringRecycleBin(void)
{
}


StringRecycleBin::~StringRecycleBin(void)
{
}
