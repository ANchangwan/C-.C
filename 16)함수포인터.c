#include <stdio.h>//�Լ� ������



void function() { //�迭�� ���������� �Լ��� �̸��� �޸��ּҸ� ��ȯ�Ѵ�. 
	printf("it's my function\n");
}

void myfunction() {
	printf("it's my function");
}

void yourfunction() {
	printf("it's your function \n");
}

/*int main(void)
{
	void(*fp)() = myfunction;
	//��ȯ �ڷ���(*�̸�)(�Ű�����) = �Լ���;
	//�����Ͱ� �����Ǿ� �ִ� ������ ����Ų��.
	//�ϳ��� ��ɾ�� �������� �Լ��� �ҷ� �� �� �ִ�.
	fp();
	fp = yourfunction;
	fp();

	/*printf("%d\n", function);



	system("pause");
	return 0/
	
}*/

//�Ű����� �� ��ȯ �ڷ����� �ִ� �Լ� ������

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {

	return a - b;
}

/*int main(void) {

	int(*fp)(int, int) = add;
	//fp�����Ͱ� add() �Լ��� ����Ų��.
	printf("%d\n", fp(10, 3));
	fp = sub;
	printf("%d \n", fp(10, 3));

	system("pause");
	return 0;

}*/


//�Լ� �����͸� ��ȯ�Ͽ� ����ϱ�

int(*process(char* a))(int, int) {
	printf("%s\n", a);
	return add;
}

int main(void) {

	printf("%d\n", process("10�� 30�� ����մϴ�.")(10, 30));

	system("pause");
	return 0;
}