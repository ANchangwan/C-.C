#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*int i; //�������� ��� c�����
		for (int i = 0; i <= 100; i++)
		{
			printf("%d\n", i);

		}*/

	/*int input_num, sum = 0;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &input_num);
	for (int i = 0; i <= input_num; i++)//for(�ʱ�ȭ��; ����; �ݺ� ����ɾ�;)
	{

		sum = sum + i;
	}
	printf("%d\n", sum);*/

	
	//���ѷ���  case (1)
	/*for (;;)
	{
		printf("hello world\n");
	}*/

	/* ���ѷ���  case(2)
	for (int i = 0; i <= 100; i--)
	{
		printf("hello world\n");
	}*/

	/* ���ѷ��� case(3)
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

	//while �� case(1)
	/*int repect_num;
	char repect_word;
	scanf("%d %c", &repect_num, &repect_word);

	while (repect_num--)
	{
		printf("%c ", repect_word);
	}*/

	//������
	/*int i;//������� ���� ��
	printf("�˰���� ���� �Է����ּ��� : ");
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