// Include Guard
#ifndef REFNODE_H
#define REFNODE_H

#include "NodeImpl.h"

class Cell;

class RefNode : public NodeImpl
{
public:

	//Constructor
	RefNode(Cell& cel);

	/*
	 * ctte classe ne redefinit pas le deconstructor
	 * comme elle ne prend pas l'ownership de la cellule
	 */

	//Methods
	double Value() const;

private:
	Cell& m_cell;
};

#endif