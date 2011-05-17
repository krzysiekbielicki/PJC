#include <iostream>
#include <string.h>

using namespace std;

class Osoba {
	char* imie;
	int wiek;
	public:
		Osoba() {
			imie = new char[40];
			cout << "Podaj imie" << endl;
			cin >> imie;
			cout << "Utworzono obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
		}
		Osoba(char* imie, int wiek) : imie( new char[strlen(imie)+1]), wiek(wiek){
			strcpy(this->imie, imie);
			cout << "Utworzono obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
		}
		~Osoba() {
			cout << "Usuwam obiekt Osoba("<<this->imie<<", "<<this->wiek<<")"<<endl;
			delete[] imie;
		}
};

int main() {
	new Osoba();
	Osoba* o1 = new Osoba("ala", 2);
	delete o1;
}
