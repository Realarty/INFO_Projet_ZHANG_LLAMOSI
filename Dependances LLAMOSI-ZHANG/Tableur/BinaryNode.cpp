#include "Cell.h"
#include "INode.h"
#include "NodeImpl.h"
#include "ValueNode.h"
#include "RefNode.h"
#include "BinaryNode.h"
#include "ProductNode.h"
#include "SumNode.h"


BinaryNode::BinaryNode(INode *cc1, INode *cc2)

{
	c1=cc1;
	c2=cc2;
}
BinaryNode::~BinaryNode()
{
	c1=0;
	c2=0;
}