#include "stackUsingLinkedList.h"
#include<iostream>
using namespace std;
stackUsingLinkedList::stackUsingLinkedList()
{
	top = nullptr;
	length = 0;
}
bool stackUsingLinkedList::isEmpty()
{
	return length == 0;
}
void stackUsingLinkedList::push(int element)
{
	Node* newNode = new Node;
	newNode->item = element;
	newNode->next = top;
	top = newNode;
	length++;
}
void stackUsingLinkedList::pop()
{
	if (isEmpty())
	{
		cout << "The stack is empty can't remove item!!!!!" << endl;
	}
	else
	{
		Node* current = top;
		top = top->next;
		current->next = nullptr;
		delete current; 
		length--;
	}
}
int stackUsingLinkedList::getTop1()
{
	return top->item;
}
void stackUsingLinkedList::getTop2()
{
	cout << "The item in tip is: " << top->item << endl;
}
void stackUsingLinkedList::print()
{
	Node* current = top;
	while (current != nullptr)
	{
		cout << current->item <<" ";
		current = current->next;
	}
}
stackUsingLinkedList::~stackUsingLinkedList()
{

}