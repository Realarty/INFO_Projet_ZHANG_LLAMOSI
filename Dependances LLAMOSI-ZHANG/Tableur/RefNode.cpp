#include "RefNode.h"
#include "Cell.h"

//Constructors
RefNode::RefNode(Cell& cel) : m_cell(cel){}

//Methods
double RefNode::Value() const
{
	return m_cell.Value();
}