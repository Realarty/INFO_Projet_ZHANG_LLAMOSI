#include "Cell.h"
#include "INode.h"
#include "NodeImpl.h"
#include "ValueNode.h"
#include "RefNode.h"
#include "BinaryNode.h"
#include "ProductNode.h"
#include "SumNode.h"


double SumNode::Value()

{
	double FinalValue=0.;
	FinalValue+=(*c1).Value();
	FinalValue+=(*c2).Value();

	return FinalValue;
	
}
