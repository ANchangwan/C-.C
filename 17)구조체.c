#include<stdio.h>
#include<stdlib.h>
//����ü : ��ü�� ǥ���ϴ� ���. ���� Ư���� ����


/*struct student{//����ü ���� ����

	char studentID[10];
	char name[10];
	char major[20];
	int grad;
	


}s;// ���� ���� ������ ���� ������ ����ü ���� �Ŀ� ���κп� ������ ���´�. 
//���� �ϳ��� ������ ���� ���� �� �Ǵ� ���������� ���� ���� �� ����Ѵ�.
//�Ǵ� s={"1501023", "��â��","��ǻ���������а�",2} �̷������� ���������� �ʱ�ȭ �� �� �ִ�.

int main(void) {
	/*struct student s={"1501023", "��â��","��ǻ���������а�",2} //����� ���ÿ� �ʱ�ȭ �Ҽ� �ִ�.
																	//���ʴ�� �ʱ�ȭ�ؾ��Ѵ�.
	struct student s; //����ü ���� ����
	strcpy(s.studentID, "1501023"); //����ü ���� ����
	strcpy(s.name, "��â��");
	strcpy(s.major, "��ǻ���������а�");
	s.grad = 2;
	printf("�й� : %s\n ", s.studentID);//����ü ���� ����
	printf("�̸� : %s\n ", s.name);
	printf("�г� : %d\n ", s.grad);
	printf("���� : %s\n ", s.major);

	system("pause");
	return 0;


}


//typedef Ű���带 �̿��ϸ� �� ª�� �ڵ带 �ۼ��� �� �ִ�.
typedef struct student{// �ֱٿ��� student�� ������ �������.

	char studentID[10];
	char name[10];
	char major[20];
	int grade;


} student;

int main(void) {

	student s = { "1501023", "��â��","��ǻ���������а�",2 };// struc student��� �� �ʿ� ���� �� ª�� �� �� �ִ�.
	printf("�й� : %s\n", s.studentID);
	printf("�̸� : %s\n", s.name);
	printf("���� : %s\n", s.major);
	printf("�г� : %d\n", s.grade);
	system("pause");
	return 0;
}*/

//�����ͷ� ����ü�� ������ �� �ִ�. ��(.)��� ȭ��ǥ�� �����Ѵ�.
typedef struct {//����ü ����

	char studentID[10];
	char name[10];
	char major[20];
	int grade;


} student;

int main(void) {

	student* s = malloc(sizeof(student));//����� ����ü ũ�⸸ŭ �޸𸮸� �Ҵ��Ѵ�.

	strcpy(s->studentID, "1501023");//studentID �� ȭ��ǥ�� ���ؼ� �����Ѵ�.
	strcpy(s->name, "��â��");      //strcpy ���ڿ��� �����ϴ� �Լ�
	strcpy(s->major, "��ǻ���������а�");
	s->grade = 2;

	printf("�й� : %s\n", s->studentID);
	printf("�̸� : %s\n", s->name);
	printf("���� : %s\n", s->major);

	printf("�й� : %d\n", s->grade);

	system("pause");
	return 0;


}
//ȭ��ǥ�� ���ؼ� ������ ����ü�� �����Ѵ�.

//�������� ������ ��Ƽ� Ư���� �°� ��Ƽ� ���� �� �ִ�.