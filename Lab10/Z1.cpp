#include <iostream>
#include <string.h>

using namespace std;

class Osoba {
	char* imie;
	int wiek;
	public:
		Osoba(char* imie, int wiek) {
			this->imie = new char[40];
			strcpy(this->imie, imie);
			this->wiek = wiek;
		}
};

int main() {
	Osoba* o1 = new Osoba("ala", 2);
	Osoba o2("ola", 3);
}
