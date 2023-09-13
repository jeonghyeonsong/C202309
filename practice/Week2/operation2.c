#include <stdio.h>

int main() {
	int x = 4;
	int y = 2;// 함수 지정
	int z;

	z = (x + y) * (x - y);
	printf("z=(x + y) * (x - y)=%d\n", z);
	z = (x * y) + (x / y);
	printf("z=(x * y) + (x / y)=%d\n", z);   // 각 수식의 값 출력
	z = x + y + 2004;
	printf("z=x + y + 2004=%d\n", z);
	
	return 0;
}	