#include <iostream>
#include <string>

using namespace std;


class Main {
private:
	string name;
public:
	Main() { name = "anchangwan"; };
	Main(string name) : name(name) { };
	Main operator+(const Main& other) { return Main(name + "&" + other.name); };
	void showname() { cout << name << endl; };
};

int main(void) {
	Main a;
	Main a2("¾ÈÃ¢¿Ï");
	Main result = a + a2;
	result.showname();

	system("pause");
	return 0;
}