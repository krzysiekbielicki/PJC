#include <iostream>
#include <string.h>

using namespace std;

class Osoba {
	char* imie;
	char* nazwisko;
	int wiek;
	Osoba* dzieci;
	int liczbadzieci;
	public:
		Osoba(char* imie = "", char* nazwisko = "", int wiek = 0) : imie( new char[strlen(imie)+1]), nazwisko( new char[strlen(nazwisko)+1]), wiek(wiek) {
			strcpy(this->imie, imie);
			strcpy(this->nazwisko, nazwisko);
			dzieci = new Osoba[0];
			liczbadzieci = 0;
		}

		Osoba(Osoba& o) : imie( new char[strlen(o.imie)+1]), nazwisko( new char[strlen(o.nazwisko)+1]), wiek(o.wiek) {
			strcpy(this->imie, o.imie);
			strcpy(this->nazwisko, o.nazwisko);
			Osoba* tmp = o.dzieci;
			liczbadzieci = o.liczbadzieci;
			dzieci = new Osoba[liczbadzieci];
			for(int i = 0; i < liczbadzieci; i++) {
				dzieci[i] = Osoba(o.dzieci[i]);
			}
		}

		~Osoba() {
			delete[] imie;
			delete[] nazwisko;

			delete[] dzieci;
		}

		void operator++() {
			++wiek;
		}
		
		void operator+(char c) {
			char* tmp = imie;
			imie = new char[strlen(tmp)+2];
			strcpy(imie, tmp);
			imie[strlen(tmp)] = c;
			imie[strlen(tmp)+1] = '\0';
		}
		
		void operator+(Osoba o) {
			Osoba* tmp = dzieci;
			dzieci = new Osoba[liczbadzieci+1];
			for(int i = 0; i < liczbadzieci; i++) {
                                dzieci[i] = tmp[i];
                        }
			dzieci[liczbadzieci++] = o;
		}
		
		void operator-(char c) {
			int newlen = 0;
			int len = strlen(imie);
			for(int i = 0; i < len; i++) {
				newlen += imie[i]==c?0:1; 
			}
			char* tmp = imie;
			imie = new char[newlen+1];
			int j = 0;
			for(int i = 0; i < len; i++) {
				if(tmp[i] != c)
					imie[j++] = tmp[i];
			}
			imie[newlen] = '\0';
		}
		friend ostream& operator<<(ostream&,Osoba);
};

ostream& operator<<(ostream& os, Osoba o) {
	cout << "operator<<" << endl;
        return os << o.imie << " " << o.nazwisko << " wiek: " << o.wiek;
}

int main() {
	Osoba o1("Jerzy", "Jez", 30);
	Osoba o2("Ala", "Makota", 5);
	cout << o1 << endl;
	o1+'j';
	cout << o1 << endl;
	o1-'r';
	cout << o1 << endl;
	o1+o2;
	cout << o1 << endl;
	
	cout << "-----" << endl;
}
