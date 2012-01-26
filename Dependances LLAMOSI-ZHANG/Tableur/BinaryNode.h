// Include Guard
#ifndef BINARYNODE_H
#define BINARYNODE_H

#include "NodeImpl.h"

class BinaryNode : public NodeImpl
{
public:
	//Contructors
	BinaryNode(INode *cc1, INode *cc2);

	//Deconstructors
	~BinaryNode();
	
	//C'est aussi une classe virtuelle

protected:
	INode * m_ino1, * m_ino2;

};

#endif