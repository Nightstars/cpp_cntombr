#include "Coordinate.h"
#include <iostream>
using namespace std;
Coordinate::Coordinate(int _x, int _y):m_iX(_x),m_iY(_y)
{
	cout << "Coordinate(int _x, int _y)" << endl;
}

Coordinate::~Coordinate()
{
	cout << "~Coordinate()" << endl;
}

void Coordinate::setX(int _x)
{
	m_iX = _x;
}

int Coordinate::getX() const
{
	return m_iX;
}

void Coordinate::setY(int _y)
{
	m_iY = _y;
}

int Coordinate::getY() const
{
	return m_iY;
}
