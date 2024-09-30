#pragma once
#include <iostream>
#include "Node.h"

class Stack
{
public:
	Stack();
	bool isEmpty();
	void push(int);
	void pop();
	void peek();
	void size();

private:
	Node* head;
};

