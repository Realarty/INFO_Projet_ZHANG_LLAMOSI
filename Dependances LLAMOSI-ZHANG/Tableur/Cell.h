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
#include "NodeImpl.h"

#ifdef WITH_DEPENDENCIES

class ExportedByDLL Cell
{
public:
	//Constructor
	Cell();

	//Deconstructor
	~Cell();

	//Methods
	double Value() const;
	NodeImpl * getNode();
	//overloaded operators
	void operator=(double val);
	void operator=(Cell &cel);
	void operator=(VolatileCell &vcel);

private:

	NodeImpl * m_cino;

};

#else

class ExportedByDLL Cell
{
public:
	//Constructor
	Cell();

	//Deconstructor
	~Cell();

	//Methods
	double Value() const;
	NodeImpl * getNode();
	//overloaded operators
	void operator=(double val);
	void operator=(Cell &cel);
	void operator=(VolatileCell &vcel);

private:

	NodeImpl * m_cino;

};

#endif
#endif