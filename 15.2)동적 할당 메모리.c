#include <stdio.h>
#include<stdlib.h>

int main(void) {

	int** p = (int**)malloc(sizeof(int*) * 3);//3���� ���� ����
	for (int i = 0; i < 3; i++)
	{
		*(p +i) = (int*)malloc(sizeof(int) * 3);//������ ���� 3���� ���� �Ҵ�
		//������ ��
	}
	for (int j = 0; j < 3; j++)// �࿭�� ������ ä���ش�
	{
		for (int i = 0; i < 3; i++)
		{
			*(*(p + j)+i) = j * 3 + i;
			//���° ������ i�� �˷���
		}
	}
	for (int j = 0; j < 3; j++)//ä���� �࿭�� ������ش�.
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