#include <iostream>
#include <string.h>

using namespace std;

class Osoba {
	char* imie;
	int wiek;
	public:
		Osoba() {
			this->imie = new char[40];
		}
		Osoba(char* imie, int wiek) : imie(imie), wiek(wiek){
			this->imie = new char[strlen(imie)+1];
			strcpy(this->imie, imie);
			this->wiek = wiek;
			cout << "Utworzono obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
		}
};

int main() {
	Osoba* o1 = new Osoba("ala", 2);
	Osoba o2("ola", 3);
}
