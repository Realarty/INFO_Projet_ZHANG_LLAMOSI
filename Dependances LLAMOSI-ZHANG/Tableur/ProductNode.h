// Include Guard
#ifndef PRODUCTNODE_H
#define PRODUCTNODE_H

#include "BinaryNode.h"

#ifdef WITH_DEPENDENCIES

class ProductNode : public BinaryNode
{
public:

	//Constructor
	ProductNode(NodeImpl * i1, NodeImpl * i2, int stamp = 0);

	//Deconstructor
	~ProductNode();

	//Methods
	virtual double Value();
	virtual void update();

};

#else

class ProductNode : public BinaryNode
{
public:

	//Constructor
	ProductNode(INode * i1, INode * i2);

	//Methods
	double Value() const;

};

#endif
#endif