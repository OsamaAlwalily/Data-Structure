#include "doubleLinkedList.h"
#include<iostream>
using namespace std;

//constructor
doubleLinkedList::doubleLinkedList()
{
	length = 0;
	left = nullptr;
	right = nullptr;
}

//Insert Left
void doubleLinkedList::insertLeft(int element)
{
	Node* newNode = new Node;
	newNode->item = element;
	if (length == 0)
	{
		newNode->next = nullptr;
		newNode->prevece = nullptr;
		left = right = newNode;
	}
	else
	{
		newNode->next = left;
		left->prevece = newNode;
		newNode->prevece = nullptr;
		left = newNode;
	}
	length++;
}

//Insert Right
void doubleLinkedList::insertRight(int element)
{
	Node* newNode = new Node;
	newNode->item = element;
	if (length == 0)
	{
		newNode->next = nullptr;
		newNode->prevece = nullptr;
		left = right = newNode;
	}
	else
	{
		newNode->next = nullptr;
		newNode->prevece = right;
		right->next = newNode;
		right = newNode;
	}
	length++;
}

//Insert At Position 1
void doubleLinkedList::insertAtPosition(int position, int element)
{

	if (position<0 || position>length)
	{
		cout << "Error:: Out of range" << endl;
	}
	else if (position == 0)
	{
		insertLeft(element);
	}
	else if (position == length)
	{
		insertRight(element);
	}
	else
	{
		Node* newNode = new Node;
		newNode->item = element;
		Node* current = left;
		Node* temp = left->next;
		for (int i = 1; i < position; i++)
		{
			current = current->next;//current=temp
			temp = temp->next;//tmep=current->next
		}
		newNode->next = temp;
		newNode->prevece = current;
		current->next = newNode;
		temp->prevece = newNode;
		temp = nullptr;
		current = nullptr;
		delete temp;
		delete current;
		length++;
	}
}

//Insert At Position 2
void doubleLinkedList::insertAtPosition2(int position, int element)
{

	if (position<0 || position>length)
	{
		cout << "Error:: Out of range" << endl;
	}
	else if (position == 0)
	{
		insertLeft(element);
	}
	else if (position == length)
	{
		insertRight(element);
	}
	else
	{
		Node* newNode = new Node;
		newNode->item = element;
		Node* current = left;
		for (int i = 0; i < position; i++)
		{
			current = current->next;
		}
		newNode->prevece = current;
		newNode->next = current->next;
		current->next->prevece = newNode;
		current->next = newNode;
		current = nullptr;
		delete current;
		length++;
	}
}

//Rempve left
void doubleLinkedList::removeLeft()
{
	if (length == 0)
	{
		cout << "The list is empty!!!!" << endl;
	}
	else if (length == 1)
	{
		left = right = nullptr;
		delete left;
		delete right;
		length--;
	}
	else
	{
		Node* current = left;
		left = left->next;
		current->next = nullptr;
		left->prevece = nullptr;
		delete current;
		length--;
	}
}

//Remove from right
void doubleLinkedList::removeRight()
{
	if (length == 0)
	{
		cout << "The list is empty!!!!" << endl;
	}
	else if (length == 1)
	{
		left = right = nullptr;
		delete left;
		delete right;
		length--;
	}
	else
	{
		Node* current = right;
		right = right->prevece;
		current->prevece = nullptr;
		right->next = nullptr;
		delete current;
		length--;
	}
}

//Remove At Position
void doubleLinkedList::removeAtPosition(int position)
{
	if (position < 0 || position >= length)
	{
		cout << "Error:: Out of range" << endl;
	}
	else if (position == 0)
	{
		removeLeft();
	}
	else if (position == length - 1)
	{
		removeRight();
	}
	else
	{
		Node* temp = left;
		Node* current = left->next;
		for (int i = 1; i < position; i++)
		{
			temp = current;
			current = current->next;
		}
		temp->next = current->next;
		current->next->prevece = temp;
		current->prevece = nullptr;
		current->next = nullptr;
		delete current;
		length--;
	}
}

//search 1
int doubleLinkedList::search1(int element)
{
	Node* current = left;
	for (int i = 0; i < length; i++)
	{
		if (current->item == element)
		{
			return i;
		}
		current = current->next;
	}
	return -1;
}

//Search2
void doubleLinkedList::search2(int element)
{
	Node* current = left;
	for (int i = 0; i < length; i++)
	{
		if (current->item == element)
		{
			cout << "The element is exist in position number: " << i << endl;
			return;
		}
		current = current->next;
	}
	cout << "The element is not exist in list" << endl;
}

//Sorting
void doubleLinkedList::sort()
{
	Node* current = left;
	Node* test = left->next;
	while (current != nullptr)
	{
		test = current->next;
		while (test != nullptr)
		{
			if (current->item > test->item)
			{
				swap(current->item, test->item);
			}
			test = test->next;
		}
		current = current->next;
	}
}

//Reverse
void doubleLinkedList::reverse()
{
	Node* temp = left;
	Node* current = left->next;
	Node* test = current->next;
	while (current != nullptr)
	{
		if (temp == left)
		{
			temp->prevece = current;
			temp->next = nullptr;
			right = temp;
		}
		current->prevece = test;
		current->next = temp;
		temp = current;
		current = test;
		if (test != nullptr)
		{
			test = test->next;
		}
	}
	left = temp;
}

//Print
void doubleLinkedList::print()
{
	Node* current;
	current = left;
	while (current != nullptr)
	{
		cout << current->item << " ";
		current = current->next;
	}
}
doubleLinkedList::~doubleLinkedList()
{

}
