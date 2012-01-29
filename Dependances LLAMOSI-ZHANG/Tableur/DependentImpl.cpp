#include "DependentImpl.h"
#include "NodeImpl.h"
#include "Cell.h"
/*
DependentImpl::DependentImpl(void)
{
}
*/
DependentImpl::~DependentImpl(void)
{
}


//Methods
int DependentImpl::getUpdateStamp()
{
	return this->m_updatestamp;
}

void DependentImpl::addDependencyOn(Cell& cell)
{
	Pointer * p = new Pointer(cell);
	this->m_arrowSet.insert(*p);
}

void DependentImpl::touch()
{
	++(this->m_updatestamp);
}

bool DependentImpl::isUpToDate()
{
	set<Pointer>::iterator it;
	for(it = this->m_arrowSet.begin(); it != this->m_arrowSet.end(); it++)
	{
		if(it->getDependence()->getNode()->getUpdateStamp() != it->getValue())
			return false;
		else if(!(it->getDependence()->getNode()->isUpToDate()))
			return false;
	}
	return true;
}

void DependentImpl::synchronize()
{
	set<Pointer>::iterator it;
	for (it = this->m_arrowSet.begin(); it != this->m_arrowSet.end();it++)
	{
		it -> getDependence() -> getNode() -> synchronize();
		it -> synchronize();
	}
}

set<Pointer>& DependentImpl::getArrowSet()
{
	return this->m_arrowSet;
}

void DependentImpl::update()
{
}

void DependentImpl::setUpdateStamp(int stamp)
{
	this->m_updatestamp = stamp;
}