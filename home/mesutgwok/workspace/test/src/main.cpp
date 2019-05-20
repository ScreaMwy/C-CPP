#include "../include/ArrayList.h"
#include "./ArrayList.cpp"
#include <string>

using namespace std;

int main(int argv, char** argc) {
	ArrayList<int>* a = new ArrayList<int>(12);
 	int data[3] = {2, 5, 6};
	a->add(*(data + 0));
	a->add(*(data + 1));
	a->add(*(data + 2));
	a->display();
	delete a;
	return 0;
}
