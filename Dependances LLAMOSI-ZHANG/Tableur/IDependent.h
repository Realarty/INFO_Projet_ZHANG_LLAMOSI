#ifndef IDEPENDENT_H
#define IDEPENDENT_H

typedef int stamp_t;

class IDependent
{
public:

	//Deconstructors
	virtual ~IDependent(void);

	//Methods
	virtual stamp_t getUpdateStamp() const = 0;
	virtual void addDependencyOn(IDependent& idep) = 0;
	virtual void touch() = 0;
	virtual bool isUpToDate() = 0;
	virtual void synchronize() = 0;

protected:

	stamp_t m_updatestamp;
};

#endif