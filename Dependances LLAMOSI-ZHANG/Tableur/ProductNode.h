#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif



#include "BinaryNode.h"


// Include Guard
#ifndef PRODUCTNODE_H
#define PRODUCTNODE_H



class ProductNode : public BinaryNode {
public:
	double Value();

private:
	
	


};

#endif