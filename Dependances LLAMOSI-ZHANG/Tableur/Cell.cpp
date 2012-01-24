#include "Cell.h"
#include "INode.h"
#include "NodeImpl.h"
#include "ValueNode.h"
#include "RefNode.h"
#include "BinaryNode.h"
#include "ProductNode.h"
#include "SumNode.h"

double Cell::Value()
{
	double FinalValue=0.;
	FinalValue=(*cel).Value();
	return FinalValue;
}