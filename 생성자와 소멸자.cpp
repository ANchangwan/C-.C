#include <iostream>
#include <string>

using namespace std;

class Main {
private:
	string name;
	int damege;
	int hp;
	int rangepoint;
public:
	Main(string name, int damage, int hp) : name(name), rangepoint(0), hp(hp), damege(damage) {};
	Main(const Main& other) {
		name = other.name;
		rangepoint = other.rangepoint;
		hp = other.hp;
		damege = other.damege;

	}
	~Main() {
		cout << "객체가 소멸합니다." << endl;
	}

	void pointup() { rangepoint++; };
	void show() { cout << name << "[" << rangepoint << "]" << hp << " "<< damege << endl; };

};

int main(void) {
	Main* a = new Main("슬라임", 50, 10);
	a->pointup();
	Main b(*a);
	b.pointup();
	a->show();
	b.show();

	delete a;



	system("pause");
	return 0;
}