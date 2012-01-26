// Import/Export Pattern
#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif

#ifndef VOLATILECELL_H
#define VOLATILECELL_H

class Cell;
class INode;

class ExportedByDLL VolatileCell
{
public:

	//Constructors
	VolatileCell(void);

	//Deconstructors
	~VolatileCell(void);

	//friends overloaded operators
	ExportedByDLL friend VolatileCell operator+(Cell &c1, Cell &c2);
	ExportedByDLL friend VolatileCell operator*(Cell &c1, Cell &c2);

	//Attributs
	INode * m_vcino;

};

//ExportedByDLL VolatileCell operator+(Cell &c1, Cell &c2);
//ExportedByDLL VolatileCell operator*(Cell &c1, Cell &c2);

#endif
