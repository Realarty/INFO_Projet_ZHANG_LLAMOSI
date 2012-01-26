// Import/Export Pattern
#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif

// Include Guard
#ifndef CELL_H
#define CELL_H

#include "VolatileCell.h"
class INode;

class ExportedByDLL Cell
{
public:
	//Constructor
	Cell();

	//Deconstructor
	~Cell();

	//Methods
	double Value() const;

	//overloaded operators
	void operator=(double val);
	void operator=(Cell &cel);
	void operator=(VolatileCell &vcel);

private:

	INode * m_cino;

};
#endif