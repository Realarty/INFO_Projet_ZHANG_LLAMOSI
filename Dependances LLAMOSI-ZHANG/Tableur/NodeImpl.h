// Include Guard
#ifndef NODEIMPL_H
#define NODEIMPL_H

#include "DependentImpl.h"
#include "INode.h"

#ifdef WITH_DEPENDENCIES

class NodeImpl : public INode, public DependentImpl
{
public:
	// C'est aussi une classe virtuelle comme on n a pas redefinir la methode "double Value() const"
	
};

#else

class NodeImpl : public INode, public DependentImpl
{
public:
	// C'est aussi une classe virtuelle comme on n a pas redefinir la methode "double Value() const"
	
};

#endif
#endif