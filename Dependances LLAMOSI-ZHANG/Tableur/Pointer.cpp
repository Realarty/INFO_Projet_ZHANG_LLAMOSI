#include "Pointer.h"

//Constructor
Pointer::Pointer(IDependent& idep):m_idependent(&idep)
{
	m_proxystamp = idep.getUpdateStamp();
}

//Deconstructor
Pointer::~Pointer(void)
{
}

//Methods
stamp_t Pointer::getValue() const
{
	return this -> m_proxystamp;
}

void Pointer::setValue(stamp_t stamp)
{
	this -> m_proxystamp = stamp;
}

IDependent * Pointer::getDependence() const
{
	return m_idependent;
}

void Pointer::synchronize()
{
	this -> m_proxystamp = this -> m_idependent -> getUpdateStamp();
}