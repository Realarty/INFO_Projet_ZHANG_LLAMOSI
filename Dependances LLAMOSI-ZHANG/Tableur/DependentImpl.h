#ifndef DEPENDENTIMPL_H
#define DEPENDENTIMPL_H

#include "idependent.h"
#include "Pointer.h"
#include <set>

using namespace std;

//Pour qu'on peut inserer un Pointer dans set par son ordre
template<>
struct less<Pointer>
{
	bool operator()(const Pointer& _Left, const Pointer& _Right) const
	{
		return (_Left.getDependence() < _Right.getDependence());
	}
};

class DependentImpl : public IDependent
{
public:

	//Constructor
	DependentImpl(void);

	//Deconstructor
	~DependentImpl(void);

	//Methods
	virtual stamp_t getUpdateStamp() const;
	virtual void addDependencyOn(IDependent& idep);
	virtual void touch();
	virtual bool isUpToDate();
	virtual void synchronize();

protected:

	set<Pointer> m_arrowSet;
};

#endif