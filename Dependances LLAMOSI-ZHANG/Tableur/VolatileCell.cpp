#include "VolatileCell.h"
#include "Cell.h"
#include "RefNode.h"
#include "SumNode.h"
#include "ProductNode.h"

#ifdef WITH_DEPENDENCIES

//Constructors
VolatileCell::VolatileCell(void) : m_vcino(0){}

//Deconstructors
VolatileCell::~VolatileCell(void){}

//friends overloaded operators
VolatileCell operator+(Cell &c1, Cell &c2)
{
	VolatileCell * vc = new VolatileCell();
	RefNode * r1 = new RefNode(c1);
	RefNode * r2 = new RefNode(c2);
	vc -> m_vcino = new SumNode(r1,r2);
	return (*vc);
}

VolatileCell operator*(Cell &c1, Cell &c2)
{
	VolatileCell * vc = new VolatileCell();
	RefNode * r1 = new RefNode(c1);
	RefNode * r2 = new RefNode(c2);
	vc -> m_vcino = new ProductNode(r1,r2);
	return (*vc);
}

#else

//Constructors
VolatileCell::VolatileCell(void) : m_vcino(0){}

//Deconstructors
VolatileCell::~VolatileCell(void){}

//friends overloaded operators
VolatileCell operator+(Cell &c1, Cell &c2)
{
	VolatileCell * vc = new VolatileCell();
	RefNode * r1 = new RefNode(c1);
	RefNode * r2 = new RefNode(c2);
	vc -> m_vcino = new SumNode(r1,r2);
	return (*vc);
}

VolatileCell operator*(Cell &c1, Cell &c2)
{
	VolatileCell * vc = new VolatileCell();
	RefNode * r1 = new RefNode(c1);
	RefNode * r2 = new RefNode(c2);
	vc -> m_vcino = new ProductNode(r1,r2);
	return (*vc);
}

#endif