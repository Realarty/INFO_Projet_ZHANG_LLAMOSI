// Import/Export Pattern
#ifdef TABLEUR_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif




// Include Guard
#ifndef INODE_H
#define INODE_H

class INode {
public:
	virtual double Value()=0;
	virtual ~INode();

};

#endif