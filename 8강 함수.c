#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ��� ����ϴ� ���� �ݺ��Ǵ� �ڵ带 ���� �� �ְ� ����� �ڵ带 �ۼ��ϱ� ���ؼ� ����Ѵ�.
void input(input) {
	printf("���� �ֻ��� �ո� : %d\n", input);
}
 
int add(int a, int b) // ���ϱ� �Լ�
{
	return a + b;
}

int caculator(int a, int b) // ��Ģ���� �Լ�
{
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("\n");
}

int factorial(int a) { //��� �Լ� : ����Լ��� ���� �ڽ��� ȣ���ϴ� �Լ��̴�. ����ؼ� ���� �ڽ��� ȣ���ϱ� ������
	                          // ���ѷ����� ������ �ʵ��� �ݵ�� ���� ������ ������ش�.
	if (a == 1)
		return 1;
	else
		return a * factorial(a - 1);
}


//�Լ��� ���� ����� Main�Լ��� �ҷ����� ���� �� ���� �ڵ��̴�.
int main(void) {


	input(5);
	input(2);
	input(1);

	printf("%d\n", add(5, 10));

	caculator(5, 10);
	caculator(60, 10);
	caculator(20, 10);
	

	int n;
	printf("���丮�� ���� �Է����ּ��� : ");
	scanf("%d", &n);
	printf("%d\n", factorial(n));



	system("pause");
	return 0;
}

//�پ��� �Լ��� ������ ���̺귯����� �θ���.