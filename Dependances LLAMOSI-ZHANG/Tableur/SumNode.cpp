#include "SumNode.h"

//Constructor
SumNode::SumNode(INode * i1, INode * i2):BinaryNode(i1,i2) {}

//Methods
double SumNode::Value() const
{
	return (m_ino1 -> Value() + m_ino2 -> Value());
}