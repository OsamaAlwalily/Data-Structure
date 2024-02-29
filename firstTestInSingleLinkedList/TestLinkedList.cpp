#include "TestLinkedList.h"
#include<iostream>
using namespace std;
TestLinkedList::TestLinkedList()
{
	length = 0;
	left = nullptr;
	right = nullptr;
}
void TestLinkedList::insertLeft(int element)
{
	Node* newNode = new Node;
	newNode->item = element;
	if (length == 0)
	{
		newNode->next = nullptr;
		left = right = newNode;
	}
	else
	{
		newNode->next = left;
		left = newNode;
	}
	length++;
}
void TestLinkedList::insertRight(int element)
{
	Node* newNode = new Node;
	newNode->item = element;
	if (length == 0)
	{
		newNode->next = nullptr;
		left = right = newNode;
	}
	else
	{
		newNode->next = nullptr;
		right->next = newNode;
		right = newNode;
	}
	length++;
}
void TestLinkedList::print()
{
	Node* current;
	current = left;
	while (current != nullptr)
	{
		cout << current->item << " ";
		current = current->next;
	}
}
