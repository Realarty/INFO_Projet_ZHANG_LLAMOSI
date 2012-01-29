#ifndef IDEPENDENT_H
#define IDEPENDENT_H

class Cell;

class IDependent
{
public:
	IDependent(void);
	virtual ~IDependent(void);

	//Pure methods
	virtual int getUpdateStamp() = 0;
	virtual void addDependencyOn(Cell& cell) = 0;
	virtual void touch() = 0;
	virtual bool isUpToDate() = 0;
	virtual void update() = 0;
	double getPreVal();

protected:
	int m_updatestamp;
	double m_preVal;

};

#endif