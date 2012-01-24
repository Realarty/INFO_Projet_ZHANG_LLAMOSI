#include "Cell.h"
#include "INode.h"
#include "NodeImpl.h"
#include "ValueNode.h"
#include "RefNode.h"
#include "BinaryNode.h"
#include "ProductNode.h"
#include "SumNode.h"

RefNode::RefNode(INode *cel2)
{
	cel = cel2;
}

double RefNode::Value()
{
	double FinalValue;
	FinalValue= (*cel).Value();
	return FinalValue;
}