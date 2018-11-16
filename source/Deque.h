#pragma once
#ifndef _QUEUE_
#define _QUEUE_
#include"Linkedlist/LinkedList2.h"
#include<cmath>




template<class T>
class Deque:private LinkedList2<T> {
public:
	Deque();

	void addFront(T item);

	void addTail(T item);

	T removeFront();

	T removeTail();


	unsigned int size();

	T peekFront();

	T peekTail();

	~Deque();
private:
	
	

};




template<class T>
void fun(Deque<T> &a, int n) {
	for (int i = 0; i < abs(n); i++)
	{
		a.addTail(a.removeFront());
	}
}




bool polindrom(char *str) {
	Deque<char> a;
	while (*str!='\0') {

		a.addFront(*str);
		str++;
	};
	

	while (a.size()>1) {
		
		if (a.removeFront() != a.removeTail()) {
			return false;
		}
		
	};
		return true;
}





#include "Deque.ipp"
#endif // !_QUEUE_

