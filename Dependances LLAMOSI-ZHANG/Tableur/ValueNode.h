// Include Guard
#ifndef VALUENODE_H
#define VALUENODE_H

#include "NodeImpl.h"

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