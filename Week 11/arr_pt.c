#include <stdio.h>

#define SIZE 10

int main(void) {
	char data[SIZE] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	};
	int result = 0,
		i;
	char* p = data; 

	for (i = 0; i < SIZE; i++) {
		printf("���� result: %d\n", result);
		result = result + *p; 
		p++;
	}

	printf("������ result ��: %d\n", result);

	return 0;
}