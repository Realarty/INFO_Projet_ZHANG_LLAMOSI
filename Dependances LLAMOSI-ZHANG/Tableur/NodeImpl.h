#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif


#include "INode.h"


// Include Guard
#ifndef NODEIMPL_H
#define NODEIMPL_H



class NodeImpl : public INode {
public:


};

#endif