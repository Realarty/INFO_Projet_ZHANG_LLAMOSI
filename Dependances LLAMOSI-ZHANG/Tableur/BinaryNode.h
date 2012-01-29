// Include Guard
#ifndef BINARYNODE_H
#define BINARYNODE_H

#include "NodeImpl.h"

#ifdef WITH_DEPENDENCIES

class BinaryNode : public NodeImpl
{
public:

	//Contructors
	BinaryNode(NodeImpl *cc1, NodeImpl *cc2);

	//Deconstructors
	~BinaryNode();
	
	//C'est aussi une classe virtuelle
	virtual void update() = 0;

protected:

	NodeImpl * m_ino1, * m_ino2;

};

#else

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
#endif