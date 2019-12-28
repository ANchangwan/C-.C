#include <stdio.h>


int add(int a, int b)// 값의 의한 참조방법
					// 이런 방법 지역변수를 처리하는 방법하고 비슷하다.
{
	a = a + b;


}

int add2(int* a,int b) { //주소를 전달하는 방식
	(*a) = (*a) + b;
}


int main(void) {


	int a = 7;
	add2(&a,10);//&a가 a를 주소값을 가리킨다.
	printf("%d\n", a);//a는 지역함수의 a는 함수내에서만 처리되기 때문에 main함수에서 사용할 수 없다. 사용하기 위해서는 포인터를  사용해서 접근해야한다.

	system("pause");
	return 0;


}