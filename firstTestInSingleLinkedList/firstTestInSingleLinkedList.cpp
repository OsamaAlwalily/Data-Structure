#include <iostream>
using namespace std;
#include"LinkedList.h"
#include"doubleLinkedList.h"
#include"stackUsingArray.h"
#include"stackUsingLinkedList.h"
//struct Book
//{
//    string name;
//    string author;
//    int pages;
//    double price;
//};
int main()
{
    /*Book book1 = { "Clean Code" , "Robert" , 2000 , 500 };
    Book book1;
    cin >> book1.name;
    cout << book1.name << endl;
    cin.ignore();
    getline(cin, book1.name);
    cout << book1.name << endl;*/


    //Vlaidation of single linked list
    stackUsingLinkedList linked;
    linked.push(15);//50 6 7 8 17 15
    linked.push(17);
    //linked.pop();
    linked.push(8);
    linked.push(7);
    linked.push(6);
    linked.push(50);
    //linked.pop();
    linked.pop();
    linked.getTop2();
    linked.print();
    //linked.print();
    //linked.insertLeft(40);//50 40 80 200 100 
    //linked.insertRight(80);
    //linked.insertLeft(50);
    //linked.insertRight(100);
    //linked.insertAtPosition2(2, 200);
    /*linked.removeLeft();
    linked.removeRight();
    linked.removeAtPosition(3);*/
    /*linked.sort();
    linked.reverse();*/
    /*cout << linked.search(100) << endl;
    linked.search2(100);*/
    //linked.reverse();
    /*linked.removeLeft();
    linked.removeRight();*/
    //linked.removeAtPosition(2);
    





    return 0;
}