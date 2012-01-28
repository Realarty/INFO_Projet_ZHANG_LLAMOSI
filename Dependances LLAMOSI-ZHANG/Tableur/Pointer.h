#ifndef POINTER_H
#define POINTER_H

#include "IDependent.h"

class Pointer
{
public:

	//Constructor
	Pointer(IDependent& idep);

	//Deconstructor
	~Pointer(void);

	//Methods
	stamp_t getValue() const;
	void setValue(stamp_t stamp);
	IDependent * getDependence() const;
	void synchronize();

private:

	IDependent * m_idependent;
	stamp_t m_proxystamp;

};

#endif