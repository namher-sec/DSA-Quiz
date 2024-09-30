#include "Node.h"

Node::Node()
{
	data = 0;
	next = NULL;
}

void Node::set_data(int value) {
	data = value;
}

int Node::get_data() {
	return data;
}

void Node::set_next(Node* addr) {
	next = addr;
}

Node* Node::get_next() {
	return next;
}
