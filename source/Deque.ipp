#pragma once




template<class T>
Deque<T>::Deque(){
	
}

template<class T>
unsigned int Deque<T>::size() {



	return this->getsize();
}


template<class T>
void Deque<T>::addTail(T item) {
	Node2<T> *p = new	Node2<T>(item);
	
	this->add_in_tail(p);
}

template<class T>
void Deque<T>::addFront(T item) {
	Node2<T> *p = new	Node2<T>(item);

	this->add_in_head(p);
}







template<class T>
T Deque<T>::removeFront() {
	 
	T res = this->gettail()->value;
	this->deltail();
	return res;
}


template<class T>
T Deque<T>::removeTail() {

	T res = this->gethead()->value;
	this->delhead();
	return res;
}



template<class T>
T Deque<T>::peekFront() {
	return this->gethead()->value;
}





template<class T>
T Deque<T>::peekTail() {
	return this->gettail()->value;
}

template<class T>
Deque<T>::~Deque() {


}