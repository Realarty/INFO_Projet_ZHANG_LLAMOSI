#ifndef POINTER_H
#define POINTER_H

class Cell;

class Pointer
{
public:
	Pointer(Cell& cell);
	~Pointer(void);

	//Methods
	int getValue();
	void setValue(int stamp);
	Cell * getDependence() const;
	void synchronize();

private:
	Cell * m_scel;
	int m_proxystamp;
};

#endif