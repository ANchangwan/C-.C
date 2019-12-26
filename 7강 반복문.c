#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*int i; //전통적인 방법 c언어기법
		for (int i = 0; i <= 100; i++)
		{
			printf("%d\n", i);

		}*/

	/*int input_num, sum = 0;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &input_num);
	for (int i = 0; i <= input_num; i++)//for(초기화값; 조건; 반복 끝명령어;)
	{

		sum = sum + i;
	}
	printf("%d\n", sum);*/

	
	//무한루프  case (1)
	/*for (;;)
	{
		printf("hello world\n");
	}*/

	/* 무한루프  case(2)
	for (int i = 0; i <= 100; i--)
	{
		printf("hello world\n");
	}*/

	/* 무한루프 case(3)
	int sum = 0;
	for (;;)
	{
		int x;
		scanf("%d", &x);
		if (x == -1)
			break;
		sum += x;
	}
	printf("%d\n", sum);*/

	//while 문 case(1)
	/*int repect_num;
	char repect_word;
	scanf("%d %c", &repect_num, &repect_word);

	while (repect_num--)
	{
		printf("%c ", repect_word);
	}*/

	//구구단
	/*int i;//보고싶은 단의 값
	printf("알고싶은 단을 입력해주세요 : ");
	scanf("%d", &i);
	for (int n = 1; n <= 9; n++)
	{
		printf("%d * %d = %d\n", i,n,i*n);
	}*/

	int i = 0;
	
		for (int j = 1; j <= 9; j++) {
			for (int n = 1; n <= 9; n++)
			{
				printf("%d * %d = %d\n ", j, n, j * n);
				
				

			}
			if (j % 3 == 0) {
				printf("\t");
			}
			
		}
		
	
	
		system("pause");
		return 0;

	} 