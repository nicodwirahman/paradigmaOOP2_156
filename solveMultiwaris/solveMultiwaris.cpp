#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pUmur):
		umur(pUmur)
	{
		cout << "otang dibuat dengan umur" << umur << "\n" << endl;
	}
};