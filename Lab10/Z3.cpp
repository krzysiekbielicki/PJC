#include <iostream>
#include <string.h>

using namespace std;

class Osoba {
	char* imie;
	int wiek;
	public:
		Osoba() {
			this->imie = new char;
			cout << "Utworzono obiekt Osoba()"<<endl;
		}
		Osoba(char* imie, int wiek) : imie(new char[strlen(imie)+1]), wiek(wiek){
			strcpy(this->imie, imie);
			cout << "Utworzono obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
		}
		Osoba(const Osoba& o) {
			imie = new char[strlen(o.imie)+1];
			strcpy(imie, o.imie);
			wiek = o.wiek;
		}
		~Osoba() {
			cout << "Usuwam obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
			delete[] imie;
		}
		void show() {
			cout << imie << " " << wiek << endl;
		}
};

int main() {
	Osoba* o1 = new Osoba("ala", 2);
	o1->show();
	Osoba& ref = *o1;
	Osoba* o2 = new Osoba(ref);
	o2->show();
	delete o1;
	o2->show();
	delete o2;
}
