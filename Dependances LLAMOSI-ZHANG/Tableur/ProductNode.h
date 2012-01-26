// Include Guard
#ifndef PRODUCTNODE_H
#define PRODUCTNODE_H

#include "BinaryNode.h"

class ProductNode : public BinaryNode
{
public:

	//Constructor
	ProductNode(INode * i1, INode * i2);

	//Methods
	double Value() const;

};

#endif