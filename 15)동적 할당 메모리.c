#include <stdio.h> //동적 메모리 할당
#include <stdlib.h>
#include <string.h>//memset() 함수를 사용하기 위해 필요하다.
//컴퓨터가 임의의로 할당한다. 동적으로 할당한다.
int main(void) {

	/*int* a = malloc(sizeof(int)); //4byte만큼 메모리를 할당을 의미한다.
									// 포인터 a에 할당
	printf("%d \n", a);
	printf("\n"); //만약 할당을 실패하면  null 값이 반환된다.
	*a = malloc(sizeof(int));
	printf("%d \n", a);*/

	/*int* a = malloc(sizeof(int));// 스택에 선언된 변수는 해제를 따로 하지 않아도 알아서 해제 되지만
								//malloc함수는 free함수를 이용해서 해제 해주워야 한다.
	printf("%d\n", a);			// 만약 해제하지 않으면 메모리가 계속 싸여 부담을 주게되서 나중에 다운될 수도 있다.
	free(a);// free함수는 마지막에 해제 해주면 된다.
	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);*/

	//동적으로 문자열 처리하기

	char* a = malloc(100);
	memset(a, 'A', 100);//meset(포인터,값,크기)
	for (int i = 0; i < 100; i++)
	{
		printf("%c ", a[i]);

	}
	printf("\n");

	system("pause");
	return 0;
}
//동적으로 할당된 변수는 <힙 영역>에 할당된다.