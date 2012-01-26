#include "Cell.h"
#include "VolatileCell.h"
#include "INode.h"
#include "ValueNode.h"
#include "RefNode.h"


//Constructors
Cell::Cell() : m_cino(0){}

//Deconstructors
Cell::~Cell()
{
	if (m_cino != 0)
		delete m_cino;
}

//Methods
double Cell::Value() const
{
	if (m_cino == 0)
		return 0.;
	else
		return m_cino -> Value();
}

//overloaded operator
void Cell::operator=(double val)
{
	//If m_cino already point to somme INode object, we must release it first
	if (m_cino != 0)
		delete m_cino;
	/*
	 * le cahier de charge demande "donner a la cellule une valeur constante"
	 * mais je doute de faire une convension (ValueNode const *)
	 */
	m_cino =  new ValueNode(val);
}

void Cell::operator =(Cell &cel)
{
	//If ino already point to somme INode object, we must release it first
	if (m_cino != 0)
		delete m_cino;

	m_cino = new RefNode(cel);
}

void Cell::operator =(VolatileCell &vc)
{
	if (m_cino != 0)
		delete m_cino;

	m_cino = vc.m_vcino;
}

