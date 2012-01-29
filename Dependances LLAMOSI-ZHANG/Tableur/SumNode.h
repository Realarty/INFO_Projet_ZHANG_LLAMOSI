// Include Guard
#ifndef SUMNODE_H
#define SUMNODE_H

#include "BinaryNode.h"

#ifdef WITH_DEPENDENCIES

class SumNode : public BinaryNode
{
public:

	//Constructor;
	SumNode(NodeImpl * i1, NodeImpl * i2, int stamp = 0);

	//Deconstructor;
	~SumNode();

	//Methods
	virtual double Value();
	virtual void update();

};

#else

class SumNode : public BinaryNode
{
public:

	//Constructor;
	SumNode(INode * i1, INode * i2);

	//Methods
	double Value() const;

};

#endif
#endif