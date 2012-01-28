#include "DependentImpl.h"

//Constructor
DependentImpl::DependentImpl(void)
{
	this -> m_updatestamp = 0;
}

//Deconstructor
DependentImpl::~DependentImpl(void)
{
}

//Methods
stamp_t DependentImpl::getUpdateStamp() const
{
	return this -> m_updatestamp;
}

void DependentImpl::addDependencyOn(IDependent& idep)
{
	Pointer * p = new Pointer(idep);
	this -> m_arrowSet.insert(*p);
}

void DependentImpl::touch()
{
	++(this -> m_updatestamp);
}

bool DependentImpl::isUpToDate()
{
	if(this -> m_arrowSet.empty())
	{
		return true;

	}else{
		set<Pointer>::iterator it; 
		for(it = this -> m_arrowSet.begin(); it != this -> m_arrowSet.end(); it++)
		{
			if(it -> getValue() != (it -> getDependence() -> getUpdateStamp()))
			{
				return false;

			}else if(!(it -> getDependence() -> isUpToDate()))
			{
				return false;
			}
		}
		return true;
	}
}

void DependentImpl::synchronize()
{
	if(!(this -> m_arrowSet.empty()))
	{
		set<Pointer>::iterator it; 
		for(it = this -> m_arrowSet.begin(); it != this -> m_arrowSet.end(); it++)
		{
			it -> getDependence() -> synchronize();
			it -> synchronize();
		}
	}
}

