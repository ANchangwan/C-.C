#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<limits.h>// �� �߿��� �ּڰ��� int�� ������ �ּڰ��� ��ȯ�Ѵ�.



int main(void){

//map[index] index�� 2��� 2��° ���� ����� �Ѵ�.

	/*int map[10] = { 6,2,4,7,6,2,4,8,3,1 };// 0���� �ʱ�ȭ ��Ű�� ������ 0,�� �ϸ� �ȴ�.
	int maxvalue = INT_MIN;// �迭�� ���� �� ���� ū��(�ִ�)�� ���� �� ����Ѵ�.
                           // INT_MAX�� �����Ѵ�.
	for (int i = 0; i < 10; i++)
	{
		if (maxvalue < map[i])
			maxvalue = map[i];

		//printf("%d ", map[i]);
	}
	printf("%d", maxvalue);*/

	/*char a[20]; 
	scanf("%s", &a); 
	printf("%s\n", a); 
	system("pause");
	return 0;*/

	//�ٷ� �ε����� �����ϴ� ���
	/*char a[20] = "hellow world";
	a[4] = ',';

	printf("%s\n", a);*/

	char a[] = "hello world";
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == 'l')
			count++;
	}
	printf("%d\n", count);


	system("pause");
	return 0;

}


