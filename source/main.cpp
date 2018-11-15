#include<iostream>
#include"Deque.h"

using namespace std;




int main() {
	Deque<int> a;
	for (int i = 0; i < 20; i++) {
		a.addTail(i);
	}
	fun(a, 19);
	for (int i = 0; i < 20; i++) {
		cout << a.removeFront() << endl;
	}


	return 0;
}