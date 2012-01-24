#include "Cell.h"
#include "INode.h"
#include "NodeImpl.h"
#include "ValueNode.h"
#include "RefNode.h"
#include "BinaryNode.h"
#include "ProductNode.h"
#include "SumNode.h"


void ValueNode::setValue(double val)
{
	LiteralValue = val;
}
ValueNode::ValueNode()
{
	LiteralValue = 0.;
}

ValueNode::ValueNode(double val)
{
	LiteralValue = val;
}

double ValueNode::Value()
{
	return LiteralValue;
}