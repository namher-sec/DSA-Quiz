#pragma once
#include <iostream>
class Node
{
public:
	Node();
	void set_data(int);
	int get_data();
	void set_next(Node*);
	Node* get_next();

private:
	int data;
	Node* next;
};

