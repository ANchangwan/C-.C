#include <stdio.h>

int a;//정적변수 선언, 정적변수로 선언을 하면 0으로 초기화된다. 

int main(void) {

	int b=8;

	printf("the number is %d\n", a);

	printf("trash value %d\n", b);//b의 변수값이 초기화되지 않았기 때문에 쓰레기값이 되어 출력이 되지 않는다.

	system("pause");

	return 0;



}