// 10_Practica10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"
#include "Shape.h"
#include "Square.h"
#include "Circle.h"


int main()
{
	TList List;
	Square* square = new Square(10);
	Circle* circle = new Circle(20);


	List.Push(square);
	List.Push(circle);

	cout << "List Size: " << List.Size()<<endl;
	cout << "Printing How to Get area using next() " << endl;
	List.Next()->printHowToGetArea();
	cout << endl;
	List.Next()->printHowToGetArea();
	cout << endl;

	cout << "Poping first value and Getting area: " << endl;
	cout << List.Pop()->getArea() << endl;

	cout << "List Size: " << List.Size() << endl;
	cout << "Getting Area: " << endl;
	cout << List.Next()->getArea() << endl;
	cout << "Reseting List!" << endl;
	List.Reset();
	cout << "List Size: " << List.Size() << endl;
	if (List.First())
		cout << "List First: " << List.First()->getArea() << endl;
	else
		cout << "Empty List" << endl;

	getchar();

    return 0;
}

