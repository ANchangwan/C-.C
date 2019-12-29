#include <stdio.h>


int a[2][3][3] = { { {1,2,3},{4,5,6},{7,8,9} },{ {1,2,3},{4,5,6},{7,8,9} } };

int main(void) {

	//2차원배열
	/*int a[10][10] = { {1,2,3},{4,5,6},{7,8,9 } };//행 우선으로 첫번째는부터 0행이다.

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/




	//3차원 배열
	/*int k, i, j;
for(k = 0; k < 2; k++)
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[k][i][j]);
		}
		printf("\n");
	}
	printf("\n");
}*/


//포인터 배열

/*int a[5] = { 1,2,3,4,5 };
int* b = &a;//&a[0]이렇게 작성해도 똑같이 동작한다. 배열의 이름은 첫번째 원소의 주소값이랑 동일하다.
//or a

printf("%d\n", b[2]);*/

	int a[5] = { 1,2,3,4,5 };
	/*int i; //정수형 포인터는 4byte 씩 증가한다.
	for (i = 0; i < 5; i++)//int a[5]의 주소값에 접근한다.
	{
		printf("%d ", a + i);
		
		
		
	}
	printf("\n");
	for (i = 0; i < 5; i++)//inta[5]에 접근할수 있다.
	{
		

		printf("%d ", *(a + i));

	}
	printf("\n");*/

	/*int* p = a;
	printf("%d \n", *(p++));// 1, a[1]
	printf("%d \n", *(++p));// 3, a[3]
	printf("%d \n", *(p+2));// 5,a[5]*/

	int b[2][5] = { {1,2,3,4,5},
					{6,7,8,9,10} };
	int(*p)[5] = b[1];//2번째행을 저장
						// *p가 행을 가리키는 포이터이다.
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", p[0][i]);//2번째 행 첫번째부터 출력
	}
	system("pause");
	return 0;

}
