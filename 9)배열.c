#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<limits.h>// 값 중에서 최솟값의 int형 범위의 최솟값을 반환한다.



int main(void){

//map[index] index가 2라면 2번째 값을 출력을 한다.

	/*int map[10] = { 6,2,4,7,6,2,4,8,3,1 };// 0으로 초기화 시키고 싶으면 0,로 하면 된다.
	int maxvalue = INT_MIN;// 배열의 원소 중 가장 큰값(최댓값)을 구할 때 사용한다.
                           // INT_MAX도 존재한다.
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

	//바로 인덱스에 접근하는 방법
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


