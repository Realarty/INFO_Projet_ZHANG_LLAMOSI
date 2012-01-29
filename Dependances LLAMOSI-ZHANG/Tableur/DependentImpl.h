#ifndef DEPENDENTIMPL_H
#define DEPENDENTIMPL_H

#include "IDependent.h"
#include "Pointer.h"
#include <set>

using namespace std;

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

	//DependentImpl(void);
	~DependentImpl(void);

	//Methods
	virtual int getUpdateStamp();
	virtual void addDependencyOn(Cell& cell);
	virtual void touch();
	virtual bool isUpToDate();
	virtual void update();
	void synchronize();
	void setUpdateStamp(int stamp);
	set<Pointer>& getArrowSet();

protected:

	set<Pointer> m_arrowSet;
};


#endif