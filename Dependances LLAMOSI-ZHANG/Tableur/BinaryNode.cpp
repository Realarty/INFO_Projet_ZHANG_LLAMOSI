#include "BinaryNode.h"

#ifdef WITH_DEPENDENCIES

//Constructors
BinaryNode::BinaryNode(NodeImpl *cc1, NodeImpl *cc2)

{
	m_ino1 = cc1;
	m_ino2 = cc2;
}

//Deconstructors
//Comme BinaryNode prend l'ownership des node que lui passe, il faut les delete pendant destruction
BinaryNode::~BinaryNode()
{
	delete m_ino1;
	delete m_ino2;
}

#else

//Constructors
BinaryNode::BinaryNode(INode *cc1, INode *cc2)

{
	m_ino1 = cc1;
	m_ino2 = cc2;
}

//Deconstructors
//Comme BinaryNode prend l'ownership des node que lui passe, il faut les delete pendant destruction
BinaryNode::~BinaryNode()
{
	delete m_ino1;
	delete m_ino2;
}

#endif