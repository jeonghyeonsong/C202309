#include<stdio.h>


int main() {

	int x = +4; // 함수 지정
	int y = -2;

	printf("x+(-y)=%d\n", x + (-y));  // 값 출력
	printf("-x+(+y)=%d\n", -x + (+y));

	return 0;
}