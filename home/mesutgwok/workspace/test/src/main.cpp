#include "../include/ArrayList.h"
#include "./ArrayList.cpp"
#include <string>
#include <malloc.h>

using namespace std;

int main(int argv, char** argc) {
	// ArrayList<int>* a = new ArrayList<int>(12);
 	// int data[3] = {2, 5, 6};
	// a->add(*(data + 0));
	// a->add(*(data + 1));
	// a->add(*(data + 2));
	// a->display();
	// delete a;

	const int x_capacity = 10;
	const int y_capacity = 10;
	char** str = NULL;

	str = (char**) malloc(x_capacity * sizeof(char*));
	for (int i = 0; i < y_capacity; i++) {
		str[i] = (char*) malloc(y_capacity * sizeof(char));
	}

	char* c1 = "Hello";
	char* c2 = "World";
	char* c3 = "123";
	char* c4 = "456";
	
	str[0] = c1;
	str[1] = c2;
	str[2] = c3;
	str[3] = c4;
	printf("[%s, %s, %s, %s]\n", *str, *(str + 1), *(str + 2), (*(str + 3)));

	for (int j = 0; j < x_capacity; j++) {
		free(*(str + j));
	}
	free(str);
	return 0;
}
