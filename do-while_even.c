#include <stdio.h>

int main() {

	int i = 0;  // i 지정
	do  {
		i++;  // i값 조건

		if (i % 2 == 0); { // 조건 지정


			continue;
		}

		print("hello world %d\n", i)  // 문장 출력


	} while (i < 10);
}