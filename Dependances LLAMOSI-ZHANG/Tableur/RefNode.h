// Include Guard
#ifndef REFNODE_H
#define REFNODE_H

#include "NodeImpl.h"

class Cell;

#ifdef WITH_DEPENDENCIES

class RefNode : public NodeImpl
{
public:

	//Constructor
	RefNode(Cell& cel, int stamp = 0);

	//Deconstructor
	~RefNode();
	/*
	 * ctte classe ne redefinit pas le deconstructor
	 * comme elle ne prend pas l'ownership de la cellule
	 */

	//Methods
	double Value();
	void update();

private:

	Cell& m_cell;
};

#else

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
#endif