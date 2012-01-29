#include "RefNode.h"
#include "Cell.h"

#ifdef WITH_DEPENDENCIES

//Constructors
RefNode::RefNode(Cell& cell, int stamp) : m_cell(cell)
{
	//Il faut penser a le liberer
	Pointer * p = new Pointer(m_cell);

	//synchronisation
	p -> synchronize();

	//ajouter dans l'ensemble de dependance
	this -> getArrowSet().insert(*p);

	//affectation de la variable preVal
	this -> m_preVal = m_cell.Value();

	//Initialiser updatestamp
	this -> m_updatestamp = stamp;
}

//Deconstructor
RefNode::~RefNode()
{
	//liberer l'ensemble de dependance
	this -> m_arrowSet.clear();
}

//Methods
//On renvoye la valeur du niveau 1
double RefNode::Value()
{
	this -> update();
	return this -> m_preVal;
}

//Recalculer localement la cible du niveau 1
void RefNode::update()
{
	set<Pointer>::iterator it = this->m_arrowSet.begin();
	if (it->getValue() != this->m_cell.getNode()->getUpdateStamp())
	{
		this -> m_preVal = this -> m_cell.Value();
		this -> touch();
		it -> synchronize();
	}
}

#else

//Constructors
RefNode::RefNode(Cell& cel) : m_cell(cel){}

//Methods
double RefNode::Value() const
{
	return m_cell.Value();
}

#endif