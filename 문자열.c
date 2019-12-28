#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>// strlen을 쓸때는 전통적인 c언어에서는 써야되지만 비주얼 스튜디오에서는 굳지 작성할 필요는 없다.

int main(void) {

	/*char *a = "Hello world"; // 배열과 포인트는 서로 치환이 가능하다.

	printf("%c\n", a[0]);

	printf("%c\n", a[7]);

	printf("%c\n", a[6]);*/

	/*char a[100];
	gets(a);// scanf()함수는 공백을 만날 때까지 입력받지만 gets()함수는 공백 까지 포함하여 한 줄을 입력 받는다.(짧은 문자열을 찾은 주소갑 자체 반환)
			// 하지만 gets() 배열의 길이에 상관 없이 사용 되기 때문에 보안상에 문제가 생길 수 도 있다.
	printf("%s\n", a);*/

	/*har a[100];
	get_s(a, sizeof(a));
	printf("%s\n", a);*/

	
	char a[20] = "changwan An";
	char b[20] = "somi";
	char c[30] = "My name is ";//strcat()를 사용할 때는 배열 크기를 더 늘려 줘야한다. 그래야만 합쳐 졌을 때 합쳐지는 배열 수 이상을 충족할 수 있다.
	char d[40] = "you should go and love your self";
	char e[20] = "love";
	printf("찾은 문자열 : %s\n", strstr(d,e)); // 긴 문자열에서 찾은 위치를 찾아 그뒤에 문자를 모두 출력하는 함수
	//strcat(c, a); 뒤에 있는 문자열을 앞에 있는 문자열에 합친다
	//printf("%s\n", c);
	//strcpy(a, b); a=b와 같은 의미를 가진다. b의 배열값을 a의 복사한다. 
	//printf("%s\n", a);
	//printf(" 두배열의 사전 순 비교 : %d\n", strcmp(a, b));  strcmp : 문자 1이 문자 2보다 사전적으로 앞에 있으면 -1, 뒤에 있으면 1을 반환한다.
	//printf("문자열의 길이 : %d\n", strlen(a)); 문자열의 길이를 구할 때 사용


	system("pause");
	return 0;

}