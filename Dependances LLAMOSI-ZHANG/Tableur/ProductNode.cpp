#include "ProductNode.h"

#ifdef WITH_DEPENDENCIES
#include "Cell.h"

//Constructors
ProductNode::ProductNode(NodeImpl * i1, NodeImpl * i2, int stamp) : BinaryNode(i1,i2)
{
	this -> m_updatestamp = stamp;
	Cell * c1 = this->m_ino1->getArrowSet().begin()->getDependence();
	Cell * c2 = this->m_ino2->getArrowSet().begin()->getDependence();

	//Il faut penser a le liberer
	Pointer * p1 = new Pointer(*c1);
	Pointer * p2 = new Pointer(*c2);

	//synchronisation
	p1 -> synchronize();
	p2 -> synchronize();

	//ajouter dans l'ensemble de dependance
	this -> getArrowSet().insert(*p1);
	this -> getArrowSet().insert(*p2);

	//affectation de la variable preVal
	this -> m_preVal = c1-> Value() * c2 -> Value();

	//Initialiser updatestamp
	this -> m_updatestamp = stamp;
}

//Deconstructor
ProductNode::~ProductNode()
{
	this->getArrowSet().clear();
}
//Methods
double ProductNode::Value()
{
	this -> update();
	return this-> m_preVal;
}

//Recalculer localement la cible du niveau 1
void ProductNode::update()
{
	this->m_preVal = 1.;
	set<Pointer>::iterator it;
	for(it = this->m_arrowSet.begin(); it != this->m_arrowSet.end();it++)
	{
		this->m_preVal *= it->getDependence()->Value();
		if (it->getValue() != it->getDependence()->getNode()->getUpdateStamp())
		{
			this -> touch();
			it -> synchronize();
		}
	}
}

#else

//Constructors
ProductNode::ProductNode(INode * i1, INode * i2) : BinaryNode(i1,i2){}

//Methods
double ProductNode::Value() const
{
	return (m_ino1 -> Value() * m_ino2 -> Value());
}

#endif