#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //아스키코드

int main(void) {

	/*char a = 65;
	printf("%c\n", a); //문자들을 숫자로 받아들임
	*/
	/*char a = getchar(); //하나의 문자열을 받을 때 쓰는 문자
	printf("%c\n", a);*/


	//버퍼 : 임시적으로 특정한 데이터를 저장하기 위한 목적으로 사용되는 공간
	 //컴퓨터가 처리하는 데이터 량이 한정적이기 때문에 임시적으로 저장할 공간이 필요하다.

	int a;
	char b;
	
	scanf("%d", &a);
	printf("%d\n", a);

	int temp;// 문자를 숫자로 받아들이기 때문에 

	while((temp=getchar()) != EOF && temp !='\n'){ }// 컴퓨터는 줄바꿈이나 공백을 아스키 코드로 받기 때문에 이런 조건식이 필요하다.
	//파일의 끝이거나 공백을 만나면 입력을 멈춘다. 버퍼를 비운다.

	scanf("%c", &b);
	printf("%c\n", b);





	system("pause");
	return 0;
}