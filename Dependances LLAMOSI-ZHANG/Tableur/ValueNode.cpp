#include "ValueNode.h"

#ifdef WITH_DEPENDENCIES

//Constructors
ValueNode::ValueNode(double val, int stamp)
{
	this -> m_preVal = val;
	this -> m_LiteralValue = val;
	this -> m_updatestamp = stamp;
}

//Methods
double ValueNode::Value()
{
	return m_LiteralValue;
}

void ValueNode::setValue(double val)
{
	this -> m_LiteralValue = val;
	this -> m_preVal = val;
}

#else

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

#endif