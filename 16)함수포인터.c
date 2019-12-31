#include <stdio.h>//함수 포인터



void function() { //배열과 마찬가지로 함수의 이름은 메모리주소를 반환한다. 
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
	//반환 자료형(*이름)(매개변수) = 함수명;
	//포인터가 생성되어 있는 변수를 가리킨다.
	//하나의 명령어로 여러개의 함수를 불러 올 수 있다.
	fp();
	fp = yourfunction;
	fp();

	/*printf("%d\n", function);



	system("pause");
	return 0/
	
}*/

//매개변수 및 반환 자료형이 있는 함수 포인터

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {

	return a - b;
}

/*int main(void) {

	int(*fp)(int, int) = add;
	//fp포인터가 add() 함수를 가리킨다.
	printf("%d\n", fp(10, 3));
	fp = sub;
	printf("%d \n", fp(10, 3));

	system("pause");
	return 0;

}*/


//함수 포인터를 반환하여 사용하기

int(*process(char* a))(int, int) {
	printf("%s\n", a);
	return add;
}

int main(void) {

	printf("%d\n", process("10과 30을 출력합니다.")(10, 30));

	system("pause");
	return 0;
}