#include <stdio.h>

int main() {
	int x = 4; 
	int y = 2;// �Լ� ����
	int z;

	z = x + y;
	printf("z=x+y=%d\n", z);
	z = x - y;
	printf("z=x-y=%d\n", z);   // �� ������ �� ���
	z = x * y;
	printf("z=x*y=%d\n", z);
	z = x / y;
	printf("z=x/y=%d\n", z);
	return 0;
}