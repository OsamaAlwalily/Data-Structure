#pragma once
class stackUsingLinkedList
{
private:
	struct Node
	{
		int item;
		Node* next;
	};
		Node* top;
		int length;
public:
	stackUsingLinkedList();
	virtual ~stackUsingLinkedList();
	bool isEmpty();
	void push(int element);
	void pop();
	int getTop1();
	void getTop2();
	void print();

};

