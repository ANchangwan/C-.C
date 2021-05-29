#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int age;
	string name;
	void show() { cout << age << name << endl; }

public:
	Student(int age, string name) {
		this->age = age;
		this->name = name;
		
	}
	void show2() { show(); }
};


int main(void) {
	
	Student a = Student(26,"anchangwan");
	a.show2();
	system("pause");
	return 0;
}