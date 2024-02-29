#pragma once
class LinkedList
{
private:
	struct Node 
	{
		int item;
		Node* next;
	};
	int length;
	Node* left;
	Node* right;

public:
	LinkedList();
	void removeLeft();
	void removeRight();
	void removeAtPosition(int position);
	int search(int element);
	void search2(int element);
	void insertLeft(int element);
	void insertRight(int element);
	void insertAtPosition(int position, int element);
	void reverse();
	void print();
};

