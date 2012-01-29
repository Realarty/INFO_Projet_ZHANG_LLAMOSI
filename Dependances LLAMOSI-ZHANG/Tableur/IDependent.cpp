#include "IDependent.h"

IDependent::IDependent(void)
{
}

IDependent::~IDependent(void)
{
}

double IDependent::getPreVal()
{
	return this -> m_preVal;
}
