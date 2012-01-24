#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif

#include "NodeImpl.h"




// Include Guard
#ifndef VALUENODE_H
#define VALUENODE_H


class ValueNode : public NodeImpl {
public:
	ValueNode();
	ValueNode(double val);
	void setValue(double val);
	double Value();
private:
	double LiteralValue;
};

#endif