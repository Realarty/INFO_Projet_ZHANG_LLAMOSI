// Include Guard
#ifndef SUMNODE_H
#define SUMNODE_H

#include "BinaryNode.h"

class SumNode : public BinaryNode
{
public:

	//Constructor;
	SumNode(INode * i1, INode * i2);

	//Methods
	double Value() const;

};

#endif