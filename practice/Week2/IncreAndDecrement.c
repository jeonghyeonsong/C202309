#include <stdio.h>


int main() {

	int x = 1; //함수 지정

	printf("x=%d\n", x++); //1사용후 +1
	printf("x=%d\n", x++); // 2사용후 +1
	printf("x=%d\n", ++x);// 4로 만든 후 사용
	printf("x=%d\n", x--);// 4사용후 -1
	printf("x=%d\n", x--);// 3사용후 -1
	printf("x=%d\n", --x);// 2로 만든 후 사용

}