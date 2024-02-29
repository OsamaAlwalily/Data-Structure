#include "stackUsingArray.h"
#include<iostream>
using namespace std;
//stackUsingArray::stackUsingArray()
//{
//	top = -1;
//	arr = new int[100];
//}
stackUsingArray::stackUsingArray(int size=100)
{
	top = -1;
	this->size = size;
	arr = new int[size];
}
void stackUsingArray::push(int element)
{
	if (isFull())
	{
		cout << "The stack is full can't insert element number: "<<element << endl;
	}
	else
	{
		top++;
		arr[top] = element;
	}
}
void stackUsingArray::pop()
{
	if (isEmpty())
	{
		cout << "The stack is empty can't remove element" << endl;
	}
	else
	{
		top--;
	}
}
int stackUsingArray::getTop1()
{
	if (isEmpty())
	{
		cout << "The stack is empty can't remove element" << endl;
	}
	else
	{
		return arr[top];
	}
}
void stackUsingArray::getTop2()
{
	if (isEmpty())
	{
		cout << "The stack is empty can't remove element" << endl;
	}
	else
	{
		cout << "The value of top is: " << arr[top] << endl;
	}
}
bool stackUsingArray::isFull()
{
	return top == size - 1;
}
bool stackUsingArray::isEmpty()
{
	return top == -1;
}
void stackUsingArray::print()
{
	cout << "The size of stack is: " << size << endl;
	for (int i = top; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
}
stackUsingArray::~stackUsingArray()
{
	delete[]arr;
}