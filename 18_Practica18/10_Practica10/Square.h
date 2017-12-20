#pragma once

#include "Shape.h"
class Square :public Shape {
private:
	float side;
public :
	Square(float s) { side = s; }
	virtual void printHowToGetArea() { printf("To get area you should do Side^2 "); }
	virtual float getArea() { return side*side; }

};