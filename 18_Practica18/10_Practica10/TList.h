#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Node {
private:
	Shape* value;
	Node* next;
public:
	Node(Shape* v);
	Shape* getValue();
	void setValue(Shape* v);
	Node* getNextPtr();
	void setNextPtr(Node *ptr);

};

class TList {
private:
	//Node* list[100];
	Node* first;
	Node* last;
	int size;
	int index;
public:
	TList();
	~TList();
	int Size(); // Retorna el número de elementos.
	int Push(Shape* psz); // Añade la cadena a la lista.
	Shape * First(); // retorna el primer elemento de la lista.
	Shape * Next(); // retorna el siguiente elemento de la lista.
	Shape * Pop(); // Elimina y retorna el primer elemento de la lista.
	void Reset(); // Elimina todos los elementos de la lista.
	Node* getFirst();
	Node* getLast();
	
};

