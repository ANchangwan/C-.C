#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수를 사용하는 이유 반복되는 코드를 줄일 수 있고 깔끔한 코드를 작성하기 위해서 사용한다.
void input(input) {
	printf("던지 주사위 앞면 : %d\n", input);
}
 
int add(int a, int b) // 더하기 함수
{
	return a + b;
}

int caculator(int a, int b) // 사칙연사 함수
{
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("\n");
}

int factorial(int a) { //재귀 함수 : 재귀함수는 본인 자신을 호출하는 함수이다. 계속해서 본인 자신을 호출하기 때문에
	                          // 무한루프가 빠지지 않도록 반드시 종료 조건을 명시해준다.
	if (a == 1)
		return 1;
	else
		return a * factorial(a - 1);
}


//함수를 많이 만들고 Main함수에 불러오는 식이 잘 만든 코드이다.
int main(void) {


	input(5);
	input(2);
	input(1);

	printf("%d\n", add(5, 10));

	caculator(5, 10);
	caculator(60, 10);
	caculator(20, 10);
	

	int n;
	printf("팩토리얼 값을 입력해주세요 : ");
	scanf("%d", &n);
	printf("%d\n", factorial(n));



	system("pause");
	return 0;
}

//다양한 함수를 묶음을 라이브러리라고 부른다.