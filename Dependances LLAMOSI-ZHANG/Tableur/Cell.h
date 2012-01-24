// Import/Export Pattern
#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif


#include "INode.h"


// Include Guard
#ifndef CELL_H
#define CELL_H


ExportedByDLL class Cell
{
public:
	Cell(void);
	double Value();

private:
	INode *cel;

};
#endif