#pragma once
#include "stdio.h"
class Shape {
public:
	virtual void printHowToGetArea() = 0;
	virtual float getArea() = 0;

};