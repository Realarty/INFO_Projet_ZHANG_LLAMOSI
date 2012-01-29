// Include Guard
#ifndef VALUENODE_H
#define VALUENODE_H

#include "NodeImpl.h"

#ifdef WITH_DEPENDENCIES

class ValueNode : public NodeImpl
{
public:

	//Constructors
	ValueNode(double val = 0., int stamp = 0);

	//Methods
	void setValue(double val);
	double Value();

private:

	double m_LiteralValue;
};

#else

class ValueNode : public NodeImpl
{
public:

	//Constructors
	ValueNode(double val = 0.);

	//Methods
	void setValue(double val);
	double Value() const;

private:

	double m_LiteralValue;
};

#endif
#endif