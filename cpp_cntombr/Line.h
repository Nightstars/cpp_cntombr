#pragma once
#include "Coordinate.h"
class Line
{
public:
	Line(int _x1, int _y1, int _x2, int y2);
	~Line();
	void setA(int _x, int _y);
	void setB(int _x, int _y);
	void printInfo();
	void printInfo() const;
private:
	const Coordinate m_coorA;
	Coordinate m_coorB;
};

