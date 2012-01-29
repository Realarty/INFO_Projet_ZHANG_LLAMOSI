#include "Pointer.h"
#include "NodeImpl.h"
#include "Cell.h"

Pointer::Pointer(Cell& cell):m_scel(&cell)
{
	this->m_proxystamp = 0;
}

Pointer::~Pointer(void)
{
}

int Pointer::getValue()
{
	return this->m_proxystamp;
}

void Pointer::setValue(int stamp)
{
	this->m_proxystamp = stamp;
}

Cell * Pointer::getDependence() const
{
	return this->m_scel;
}

void Pointer::synchronize()
{
	this->m_proxystamp = this -> m_scel ->getNode()->getUpdateStamp();
}