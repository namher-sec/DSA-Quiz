#include "Stack.h"
#include "Node.h"

Stack::Stack() {
	Node* head = NULL;
}
// Checks if the stack is empty.
bool Stack::isEmpty()
{
	if (head == NULL) {
		return true;
	}

	else {
		return false;
	}

}

// Adds an element on top of the stack.
void Stack::push(int num)
{
	if (head == NULL) {
		Node* p = new Node;
		p->set_data(num);
		p->set_next(NULL);
	}
	else {
		std::cout << " test ";
	}
}

//Removes the element from the top of the stack and returns that value.
void Stack::pop()
{
	if (head == NULL) {
	}
	else {

	}
}

//Returns the top element without removing it.
void Stack::peek()
{

}

//returns the number of elements in the stack.
void Stack::size()
{

}


