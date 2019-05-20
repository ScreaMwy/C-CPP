#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <stdio.h>
#include <string.h>
#include <malloc.h>

template<typename T>
class ArrayList {
private:
	static const int DEFAULT_CAPACITY = 10;
	T* data;
	int size;
	int length;

public:
	ArrayList();
	ArrayList(int capacity);
	~ArrayList();
	void add(T e);
	char* toString();
	void display();
};

#endif
