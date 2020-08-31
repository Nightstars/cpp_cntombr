#pragma once
class Coordinate
{
public:
	Coordinate(int _x, int _y);
	~Coordinate();
	void setX(int _x);
	int getX() const;
	void setY(int _y);
	int getY() const;
private:
	int m_iX;
	int m_iY;
};

