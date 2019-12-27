#include<stdio.h>

int main(void) {

	/*int a = 5;
	int* b = &a; //포인터 b가 a를 가르킨다.

	printf("%d\n", *b);*/

	/*int a[] = { 1,2,4,5,6,4,7,9,8,6,3 };//int형 자료형은 4byte를 가지고 있기 때문에 44byte를 가지고 있다. 
	for (int i = 0; i < 12; i++)
	{
		printf("%d\n", &a[i]);
	}*/ // 연속적인 메모리르 가지고 있는 배열이라서 4byte 씩 증가하고 있는 것을 알 수 있다.

	/*int a = 5;
	int* b = &a;
	int** c = &b;
	printf("%d\n", **c);*/ // 포인터의 포인터로 a의 변수의 접근 할 수 있다.연속적인 포인터이라는걸 보여주기 위해 **두개 사용한다.

	int a[] = { 1,2,4,5,6,4,7,9,8,6,3 };
	int* b = a;
	printf("%d\n", b[2]); // 배열과 포인터는 서로 동일하게 사용가능하다.

	system("pause");
	return 0;
}