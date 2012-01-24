#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif


#include "NodeImpl.h"


// Include Guard
#ifndef BINARYNODE_H
#define BINARYNODE_H


class BinaryNode : public NodeImpl {
public:
	BinaryNode(INode *cc1, INode *cc2);
	~BinaryNode();
protected:
	INode *c1, *c2;
	


};

#endif