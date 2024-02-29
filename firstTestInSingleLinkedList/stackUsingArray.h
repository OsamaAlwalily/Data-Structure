#pragma once
class stackUsingArray
{
private:
	int* arr;
	int size;
	int top;
public:
	stackUsingArray(int size);
	//stackUsingArray();
	virtual ~stackUsingArray();
	void push(int element);
	bool isFull();
	bool isEmpty();
	void pop();
	int getTop1();
	void getTop2();
	void print();
};

