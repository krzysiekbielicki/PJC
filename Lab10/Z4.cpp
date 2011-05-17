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
		Osoba(char* imie, int wiek) : imie(imie), wiek(wiek){
			cout << "Utworzono obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
		}
		~Osoba() {
			cout << "Usuwam obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
			delete[] imie;
		}
		void show() {
			cout << imie << " " << wiek << endl;
		}
	friend void show(Osoba*);
};

void show(Osoba* o) {
	cout << o->imie << " " << o->wiek << endl;
}

int main() {
	Osoba* o1 = new Osoba("ala", 2);
	show(o1);
	delete o1;
}
