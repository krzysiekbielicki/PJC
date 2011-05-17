#include <iostream>
#include <stdlib.h>

using namespace std;

struct Osoba {
	char* imie;
	int wiek;
	bool plec;

	void show() {
		cout << imie << endl;
		cout << wiek << endl;
		cout << plec << endl;
	}
};

int main() {
	Osoba osoba;
	osoba.imie = "Krzysiek";
	osoba.plec = 1;
	osoba.wiek = rand() % 100;
	osoba.show();
}
