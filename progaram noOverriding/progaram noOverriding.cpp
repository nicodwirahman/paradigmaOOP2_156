#include<iostream>
using namespace std;

class baseClass {
public:
	virtula void perkenalan()final {
		cout << "Hallo saya function dari serived base class";
	}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari drived Class";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
};