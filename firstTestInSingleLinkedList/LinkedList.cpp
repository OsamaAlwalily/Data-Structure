#include "LinkedList.h"
#include <iostream>
using namespace std;
//Constructor
LinkedList::LinkedList()
{
	length = 0;
	left = nullptr;
	right = nullptr;
}

//insertLeft
void LinkedList::insertLeft(int element)
{
	Node* newNode = new Node;
	newNode->item = element;
	if (length == 0)
	{
		newNode->next = nullptr;
		left = right =  newNode;
	}
	else
	{
		newNode->next = left;
		left = newNode;
	}
	length++;
}

//insertRight
void LinkedList::insertRight(int element)
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

//Print
void LinkedList::print()
{
	Node* current;
	current = left;
	while(current!=nullptr)
	{
		cout << current->item<<" ";
		current = current->next;
	}
}

//Insert At Position
void LinkedList::insertAtPosition(int position, int element)
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
		for (int i = 1; i < position; i++)
		{
			current = current->next;
		}
		newNode->next = current->next;
		current->next = newNode;
		length++;
	}
}

//Search 1
int LinkedList::search(int element)
{
	Node* current = left;
	for(int i=0;i<length;i++)
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
void LinkedList::search2(int element)
{
	Node* current = left;
	for(int i=0;i<length;i++)
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
void LinkedList::reverse()
{
	Node* prevece = nullptr;
	Node* current = left;
	Node* next;
	while(current!=nullptr)
	{ 
		next = current->next;
		current->next = prevece;
		prevece = current;
		current = next;
	}
	left = prevece;
}

//remove from the left of linked list
void LinkedList::removeLeft()
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
		delete current;
		length--;
	}
}

//remove from the right of linked list
void LinkedList::removeRight()
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
		while (current->next != right)
		{
			current = current->next;
		}
		right = current;
		current = current->next;
		right->next = nullptr;
		delete current;
		length--;
	}
}

//Remove At Position
void LinkedList::removeAtPosition(int position)
{
	if (position<0 || position>=length)
	{
		cout << "Error:: Out of range" << endl;
	}
	else if (position == 0)
	{
		removeLeft();
	}
	else if (position == length-1)
	{
		removeRight();
	}
	else
	{
		Node* prevece = left;
		Node* current = left->next;
		for (int i = 1; i < position; i++)
		{
			prevece = current;
			current = current->next;
		}
		prevece->next = current->next;
		current->next = nullptr;
		delete current;
		prevece = nullptr;
		length--;
	}
}



/*
// A node structure for a singly-linked list
struct Node {
  int data; // the value stored in the node
  Node* next; // a pointer to the next node
};

// A function that merges two sorted singly-linked lists
Node* mergeLists(Node* head1, Node* head2) {
  // If either list is empty, return the other list
  if (head1 == NULL) return head2;
  if (head2 == NULL) return head1;

  // Initialize a dummy node to store the merged list
  Node* dummy = new Node();
  // Initialize a pointer to the current node of the merged list
  Node* curr = dummy;

  // Loop until both lists are exhausted
  while (head1 != NULL && head2 != NULL) {
    // Compare the data of the two nodes and append the smaller one to the merged list
    if (head1->data < head2->data) {
      curr->next = head1;
      head1 = head1->next;
    } else {
      curr->next = head2;
      head2 = head2->next;
    }
    // Move the current pointer to the next node
    curr = curr->next;
  }

  // Append the remaining nodes of the non-empty list to the merged list
  if (head1 != NULL) curr->next = head1;
  if (head2 != NULL) curr->next = head2;

  // Return the head of the merged list, skipping the dummy node
  return dummy->next;
}
*/