#include <iostream>
#include <stdlib.h>

using namespace std;

struct Osoba {
	char* imie;
	int wiek;
	bool plec;
};

int main() {
	Osoba osoba;
	osoba.imie = "Krzysiek";
	osoba.plec = 1;
	osoba.wiek = rand() % 100;
	cout << sizeof(osoba) << endl;
//	cout << osoba << endl;
	cout << osoba.imie << endl;
	cout << osoba.wiek << endl;
	cout << osoba.plec << endl;
}
