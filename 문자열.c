#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>// strlen�� ������ �������� c������ ��ߵ����� ���־� ��Ʃ��������� ���� �ۼ��� �ʿ�� ����.

int main(void) {

	/*char *a = "Hello world"; // �迭�� ����Ʈ�� ���� ġȯ�� �����ϴ�.

	printf("%c\n", a[0]);

	printf("%c\n", a[7]);

	printf("%c\n", a[6]);*/

	/*char a[100];
	gets(a);// scanf()�Լ��� ������ ���� ������ �Է¹����� gets()�Լ��� ���� ���� �����Ͽ� �� ���� �Է� �޴´�.(ª�� ���ڿ��� ã�� �ּҰ� ��ü ��ȯ)
			// ������ gets() �迭�� ���̿� ��� ���� ��� �Ǳ� ������ ���Ȼ� ������ ���� �� �� �ִ�.
	printf("%s\n", a);*/

	/*har a[100];
	get_s(a, sizeof(a));
	printf("%s\n", a);*/

	
	char a[20] = "changwan An";
	char b[20] = "somi";
	char c[30] = "My name is ";//strcat()�� ����� ���� �迭 ũ�⸦ �� �÷� ����Ѵ�. �׷��߸� ���� ���� �� �������� �迭 �� �̻��� ������ �� �ִ�.
	char d[40] = "you should go and love your self";
	char e[20] = "love";
	printf("ã�� ���ڿ� : %s\n", strstr(d,e)); // �� ���ڿ����� ã�� ��ġ�� ã�� �׵ڿ� ���ڸ� ��� ����ϴ� �Լ�
	//strcat(c, a); �ڿ� �ִ� ���ڿ��� �տ� �ִ� ���ڿ��� ��ģ��
	//printf("%s\n", c);
	//strcpy(a, b); a=b�� ���� �ǹ̸� ������. b�� �迭���� a�� �����Ѵ�. 
	//printf("%s\n", a);
	//printf(" �ι迭�� ���� �� �� : %d\n", strcmp(a, b));  strcmp : ���� 1�� ���� 2���� ���������� �տ� ������ -1, �ڿ� ������ 1�� ��ȯ�Ѵ�.
	//printf("���ڿ��� ���� : %d\n", strlen(a)); ���ڿ��� ���̸� ���� �� ���


	system("pause");
	return 0;

}