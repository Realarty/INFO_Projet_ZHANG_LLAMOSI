// Include Guard
#ifndef INODE_H
#define INODE_H

class INode {
public:
	/*
	 * Comme indique dans la chaier de charge, la methode ne peut pas 
	 * modifier l'objet courant, du coup je le declare comme une methode
	 * constant, donc il faut tous les classes filles respecter cette
	 * declarartion
	 */
	virtual double Value() const = 0;
	virtual ~INode();
};

#endif