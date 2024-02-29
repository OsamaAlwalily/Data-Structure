#pragma once
class doubleLinkedList
{
private:
	struct Node
	{
		int item;
		Node* next;
		Node* prevece;
	};
	int length;
	Node* left;
	Node* right;
public:
	doubleLinkedList();
	~doubleLinkedList();
	void insertLeft(int element);
	void insertRight(int element);
	void insertAtPosition(int position, int element);
	void insertAtPosition2(int position, int element);
	void removeLeft();
	void removeRight();
	void removeAtPosition(int position);
	int search1(int element);
	void search2(int element);
	void sort();
	void reverse();
	void print();
};

