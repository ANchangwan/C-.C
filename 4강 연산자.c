#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	system("pause");*/

	//Escape sequence
	/*printf("\"A \tB \tC \tD\"\n\n");
		system("pause");
		return 0;*/

		//���� ������
		
		/*printf("%d\n", a > b);
		system("pause");
		return 0;*/
		
		//��������

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", !a);//���̸� ������ ��� 0
	printf("%d\n", a && b);//a�� b�� ������ �� 1 ���
	printf("%d\n", (a > b) && (b > c));// a>b>c�� �ȵǴ� ������ a>b�� 
	system("pause");
	return 0;






}