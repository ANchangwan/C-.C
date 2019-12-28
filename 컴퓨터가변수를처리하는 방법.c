#include <stdio.h>

int a = 5;//전역변수
/*
1)프로그램이 크기 클수록 전역변수를 많이 사용하면 프로그램이 복잡해 질 수 있으므로 주의한다.
2)메모리 데이터 영역에 할당한다.
3)main함수가 실행되기 전에 프로그램이 시작과 동시에 메모리에 할당한다.
4)global variable라서 어디서든 접근이 가능하다. 



*/
int changevalue() {
	a = 10;
}

void process() {//정적변수 1) 메모리  영역에 할당된다


	static int a = 5; //프로그램이 시작하자마자 메모리에 적재 된다.
	a = a + 1;//함수가 실행 될때 마다 static 변수를 무시하고 1을 더해서 출력한다.-->실행 될 때 마다 1이 더해져서 출력된다. 
	printf("%d\n", a);

}

int main(void) {

	/*printf("%d\n", a);
	changevalue();
	printf("%d\n", a);*/

	/*int a = 7;
	if (1) {
		int a = 5;//지역 변수 if black(if{ }) 안에 있는 변수는 지역변수라고 한다. black 안에서만 사용할 수 있다.
		

	}
	printf("%d\n", a);

	process();
	process();
	process();*/


	register int a , i;// 레지스터 변수 ; 레지스터변수는 메인 메모리가 아니라 cpu에 직접 할당 되기 때문에 더 빠르게 처리 할 수 있다.
	//하지만 공간이 매우 한정적이기 때문에 레지스터에 할당 된다는 보장이 없다.
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);

	}
	printf("\n");
	system("pause");
	return 0;


}