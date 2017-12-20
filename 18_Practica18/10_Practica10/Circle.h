#pragma once

#include "Shape.h"
#define PI 3.141516

class Circle :public Shape {
private:
	float radius;
public:
	Circle(float r) { radius= r; }
	virtual void printHowToGetArea() { printf("To get area you should do PI * Radius^2 "); }
	virtual float getArea() { return PI * radius * radius; }
};