#pragma once
#include "Header.h"

class Point2D
{
private:
	int x;
	int y;
public:
	Point2D();
	Point2D(int x, int y);

	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);
	string getInfo;

};