#include "Line.h"
#include <iostream>
using namespace std;
Line::Line(int _x1, int _y1, int _x2, int _y2):m_coorA(_x1,_y1),m_coorB(_x2,_y2)
{
	cout << "Line(int _x1, int _y1, int _x2, int y2)" << endl;
}

Line::~Line()
{
	cout << "~Line()" << endl;
}

void Line::setA(int _x, int _y)
{
	//m_coorA.setX(_x);
	//m_coorA.setY(_y);
}

void Line::setB(int _x, int _y)
{
	m_coorB.setX(_x);
	m_coorB.setY(_y);
}

void Line::printInfo()
{
	cout << "printInfo()" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
}

void Line::printInfo() const
{
	cout << "printInfo() const"<<endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
}
