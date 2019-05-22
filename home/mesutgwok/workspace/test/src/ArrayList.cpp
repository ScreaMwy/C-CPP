#include "../include/ArrayList.h"


template<typename T>
ArrayList<T>::ArrayList(int capacity) {
	this->data = (T*) malloc(sizeof(T) * capacity);
	//this->data = new T[capacity];
	this->length = capacity;
	this->size = 0;
}

template<typename T>
ArrayList<T>::ArrayList() {
	this->data = (T*) malloc(sizeof(T) * ArrayList::DEFAULT_CAPACITY);
	//this->data = new T[capacity];
	this->length = ArrayList::DEFAULT_CAPACITY;
	this->size = 0;
}

template<typename T>
ArrayList<T>::~ArrayList() {
	free(this->data);
}

template<typename T>
void ArrayList<T>::add(T e) {
	if (this->size == this->length) {
		this->data = (T*) realloc(this->data, 1.5 * this->length * sizeof(T*));
	}
	*(data + size) = e;
	size++;
}

template<typename T>
char* ArrayList<T>::toString() {
	char* str = NULL;
	for (int i = 0; i < this->size; i++) {
		
	}
	return str;
}

template<typename T>
void ArrayList<T>::display() {
	if (NULL == this->data) {
		printf("NULL");
	}

	if (0 == this->size) {
		printf("[]");
	}

	int max = this->size - 1;
	char* str = toString();
	printf("[");
	for (int i = 0; ; i++) {
		printf("%s", *(str + i));
		if (max == i) {
			printf("]");
		}
		printf(", ");
	}
}
