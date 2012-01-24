#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif


#include "BinaryNode.h"


// Include Guard
#ifndef SUMNODE_H
#define SUMNODE_H


class SumNode : public BinaryNode {
public:
	double Value();

private:
	
	


};

#endif