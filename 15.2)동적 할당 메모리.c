#include <stdio.h>
#include<stdlib.h>

int main(void) {

	int** p = (int**)malloc(sizeof(int*) * 3);//3개의 행을 만듬
	for (int i = 0; i < 3; i++)
	{
		*(p +i) = (int*)malloc(sizeof(int) * 3);//각각의 행의 3개씩 열을 할당
		//각각의 행
	}
	for (int j = 0; j < 3; j++)// 행열에 내용을 채워준다
	{
		for (int i = 0; i < 3; i++)
		{
			*(*(p + j)+i) = j * 3 + i;
			//몇번째 열인지 i가 알려줌
		}
	}
	for (int j = 0; j < 3; j++)//채워진 행열을 출력해준다.
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%d ", *(*(p+j)+i));
		}
		printf("\n");
	}
	free(p);

	system("pause");
	return 0;
}