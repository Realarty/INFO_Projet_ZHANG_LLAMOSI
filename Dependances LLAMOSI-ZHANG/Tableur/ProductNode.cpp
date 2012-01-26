#include "ProductNode.h"

//Constructors
ProductNode::ProductNode(INode * i1, INode * i2) : BinaryNode(i1,i2){}

//Methods
double ProductNode::Value() const
{
	return (m_ino1 -> Value() * m_ino2 -> Value());
}