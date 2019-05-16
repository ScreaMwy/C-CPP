#include <stdio.h>
#include <stdlib.h>
#include "../include/a.h"
#include "../include/b.h"

int main(int argv, char** argc) {
	int n1 = 0;
	int n2 = 0;

	printf("輸入第一個數a：");
	scanf("%d", &n1);
	printf("輸入第二個數b：");
	scanf("%d", &n2);

	int max_num = max(n1, n2);
	display(max_num);
	return 0;	
}
