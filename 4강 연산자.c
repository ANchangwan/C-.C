#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	system("pause");*/

	//Escape sequence
	/*printf("\"A \tB \tC \tD\"\n\n");
		system("pause");
		return 0;*/

		//관계 연산자
		
		/*printf("%d\n", a > b);
		system("pause");
		return 0;*/
		
		//논리연산자

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", !a);//참이면 거짓값 출력 0
	printf("%d\n", a && b);//a와 b가 있으면 참 1 출력
	printf("%d\n", (a > b) && (b > c));// a>b>c가 안되는 이유는 a>b가 
	system("pause");
	return 0;






}