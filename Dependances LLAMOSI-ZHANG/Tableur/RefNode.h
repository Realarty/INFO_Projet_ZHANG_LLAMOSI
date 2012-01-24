#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif


#include "NodeImpl.h"


// Include Guard
#ifndef REFNODE_H
#define REFNODE_H



class RefNode : public NodeImpl {
public:
	RefNode(INode * cel2);
	double Value();
private:
	INode *cel;
};

#endif