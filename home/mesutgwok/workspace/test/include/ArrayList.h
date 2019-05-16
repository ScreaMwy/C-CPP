#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <stdio.h>
#include <string.h>
#include <malloc.h>

template<typename T>
class ArrayList {
private:
	const int DEFAULT_CAPACITY = 10;
	T* data = NULL;
	int size = 0;
	int length = 0;
	
public:
	ArrayList();
	ArrayList(int capacity);
	~ArrayList();
	void add(T e);
	char* toString();
	void display();
};

#endif
