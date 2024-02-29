#pragma once
class TestLinkedList
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
	TestLinkedList();
	void insertLeft(int element);
	void insertRight(int element);
	void print();
};

