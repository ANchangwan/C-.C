#include<stdio.h>
#include<stdlib.h>
//구조체 : 객체를 표현하는 방법. 같은 특성의 묶음


/*struct student{//구조체 선언 정의

	char studentID[10];
	char name[10];
	char major[20];
	int grad;
	


}s;// 만약 전역 변수로 쓰고 싶을때 구조체 선언 후에 끝부분에 변수를 적는다. 
//오직 하나의 변수를 쓰고 싶을 때 또는 전역변수로 쓰고 싶을 때 사용한다.
//또는 s={"1501023", "안창완","컴퓨터정보공학과",2} 이런식으로 전역변수로 초기화 할 수 있다.

int main(void) {
	/*struct student s={"1501023", "안창완","컴퓨터정보공학과",2} //선언과 동시에 초기화 할수 있다.
																	//차례대로 초기화해야한다.
	struct student s; //구조체 변수 선언
	strcpy(s.studentID, "1501023"); //구조체 변수 접근
	strcpy(s.name, "안창완");
	strcpy(s.major, "컴퓨터정보공학과");
	s.grad = 2;
	printf("학번 : %s\n ", s.studentID);//구조체 내용 접근
	printf("이름 : %s\n ", s.name);
	printf("학년 : %d\n ", s.grad);
	printf("전공 : %s\n ", s.major);

	system("pause");
	return 0;


}


//typedef 키워드를 이용하면 더 짧게 코드를 작성할 수 있다.
typedef struct student{// 최근에는 student를 지워도 상관없다.

	char studentID[10];
	char name[10];
	char major[20];
	int grade;


} student;

int main(void) {

	student s = { "1501023", "안창완","컴퓨터정보공학과",2 };// struc student라고 쓸 필요 없이 더 짧게 쓸 수 있다.
	printf("학번 : %s\n", s.studentID);
	printf("이름 : %s\n", s.name);
	printf("전공 : %s\n", s.major);
	printf("학년 : %d\n", s.grade);
	system("pause");
	return 0;
}*/

//포인터로 구조체를 접근할 수 있다. 점(.)대신 화살표로 접근한다.
typedef struct {//구조체 정의

	char studentID[10];
	char name[10];
	char major[20];
	int grade;


} student;

int main(void) {

	student* s = malloc(sizeof(student));//선언된 구조체 크기만큼 메모리를 할당한다.

	strcpy(s->studentID, "1501023");//studentID 를 화살표를 통해서 접근한다.
	strcpy(s->name, "안창완");      //strcpy 문자열을 복사하는 함수
	strcpy(s->major, "컴퓨터정보공학과");
	s->grade = 2;

	printf("학번 : %s\n", s->studentID);
	printf("이름 : %s\n", s->name);
	printf("전공 : %s\n", s->major);

	printf("학번 : %d\n", s->grade);

	system("pause");
	return 0;


}
//화살표를 통해서 포인터 구조체에 접근한다.

//여러개의 변수를 모아서 특성에 맞게 모아서 만들 수 있다.