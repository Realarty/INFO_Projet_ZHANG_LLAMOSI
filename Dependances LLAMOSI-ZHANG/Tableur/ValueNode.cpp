#include "ValueNode.h"

//Constructors
ValueNode::ValueNode(double val)
{
	m_LiteralValue = val;
}

//Methods
double ValueNode::Value() const
{
	return m_LiteralValue;
}

void ValueNode::setValue(double val)
{
	m_LiteralValue = val;
}