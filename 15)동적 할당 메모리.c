#include <stdio.h> //���� �޸� �Ҵ�
#include <stdlib.h>
#include <string.h>//memset() �Լ��� ����ϱ� ���� �ʿ��ϴ�.
//��ǻ�Ͱ� �����Ƿ� �Ҵ��Ѵ�. �������� �Ҵ��Ѵ�.
int main(void) {

	/*int* a = malloc(sizeof(int)); //4byte��ŭ �޸𸮸� �Ҵ��� �ǹ��Ѵ�.
									// ������ a�� �Ҵ�
	printf("%d \n", a);
	printf("\n"); //���� �Ҵ��� �����ϸ�  null ���� ��ȯ�ȴ�.
	*a = malloc(sizeof(int));
	printf("%d \n", a);*/

	/*int* a = malloc(sizeof(int));// ���ÿ� ����� ������ ������ ���� ���� �ʾƵ� �˾Ƽ� ���� ������
								//malloc�Լ��� free�Լ��� �̿��ؼ� ���� ���ֿ��� �Ѵ�.
	printf("%d\n", a);			// ���� �������� ������ �޸𸮰� ��� �ο� �δ��� �ְԵǼ� ���߿� �ٿ�� ���� �ִ�.
	free(a);// free�Լ��� �������� ���� ���ָ� �ȴ�.
	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);*/

	//�������� ���ڿ� ó���ϱ�

	char* a = malloc(100);
	memset(a, 'A', 100);//meset(������,��,ũ��)
	for (int i = 0; i < 100; i++)
	{
		printf("%c ", a[i]);

	}
	printf("\n");

	system("pause");
	return 0;
}
//�������� �Ҵ�� ������ <�� ����>�� �Ҵ�ȴ�.