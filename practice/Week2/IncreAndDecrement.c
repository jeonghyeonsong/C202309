#include <stdio.h>


int main() {

	int x = 1; //�Լ� ����

	printf("x=%d\n", x++); //1����� +1
	printf("x=%d\n", x++); // 2����� +1
	printf("x=%d\n", ++x);// 4�� ���� �� ���
	printf("x=%d\n", x--);// 4����� -1
	printf("x=%d\n", x--);// 3����� -1
	printf("x=%d\n", --x);// 2�� ���� �� ���

}