#include<iostream>
#include"Deque.h"

using namespace std;




int main() {

	Deque<int>b;
	Deque<int>a;
	b.addFront(0);
	for (int i = 0; i < 20; i++) {
		a.addFront(i);
	}
	for (int i = 0; i < 20; i++) {
		b.addFront(b.removeFront() + a.removeFront());
	}
	char a1[] ="abfdd\ffba";

	cout << polindrom(a1);



	return 0;
}