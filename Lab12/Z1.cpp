#include <iostream>

using namespace std;

class Osoba {
	char* imie;
	int wiek;
	public:
		Osoba(char* imie, int wiek, int numer, double stan) : imie( new char[strlen(imie)+1]), wiek(wiek), konto(Konto(numer, stan)){
                        strcpy(this->imie, imie);
		}
		~Osoba() {
			delete[] imie;
		}
		class Konto {
			int numer;
			double stan;
			public:
				Konto(int numer, double stan) : numer(numer), stan(stan) {}
				void wplata(double kasa) {
					stan += kasa;
				}
				void wyplata(double kasa) {
					stan -= kasa;
				}
				int getNumer() {
					return numer;
				}
		};
		Konto konto;
};

class Transakcja {
	int numer;
	double wartosc;
	public:
		Transakcja(int numer, doublei wartosc) : numer(numer), wartosc(wartosc) {}
		int getNumer() {
			return numer;
		}
		double getWartosc() {
			return wartosc;
		}
}

class Galka {
	char* nazwa;
	double cena;
	public:
		Galka(char* nazwa, double cena) : nazwa(new char[strlen(nazwa)+1]), cena(cena) {
			strcpy(this->nazwa, nazwa);
		}
		~Galka() {
			delete[] nazwa;
		}
		double getCena() {
			return cena;
		}
		char* getNazwa() {
			return nazwa;
		}
}

class Lodziarnia {
	int kosztStaly;
	Transakcja** tab;
	int pojemnosc;
	int liczbaTransakcji;
	Galka** galki;
	int liczbaRodzajow;
	public:
		Lodziarnia(int kosztStaly) : kosztStaly(kosztStaly) {
			pojemnosc = 10;
			tab = new Transakcja*[pojemnosc];
			liczbaTransakcji = 0;
			liczbaRodzajow = 3;
			galki = new Galki*[liczbaRodzajow];
			galki[0] = new Galka("czekoladowe", 10);
			galki[1] = new Galka("waniliowe", 20);
			galki[2] = new Galka("truskawkowe", 30);
		}
		void kup(Osoba& osoba, Galka* rodzaj) {
			osoba.konto.wyplata(rodzaj->getCena()+kosztStaly);
			if(liczbaTransakcji + 1 > pojemnosc) {
                	        pojemnosc *= 2;
        	                Transakcja** tmp = tab;
	                        tab = new Transakcja*[pojemnosc];
                        	for(int i = 0; i < liczbaTransakcji; i++) {
                	                tab[i] = tmp[i];
        	                }
	                }
			tab[liczbaTransakcji++] = new Transakcja(osoba.konto.getNumer(), rodzaj->getCena()+kosztStaly);
		}
		int operator[](int indeks) {
			return tab[indeks]->getNumer();
		}
		int operator()(int indeks) {
			return tab[indeks]->getWartosc();
		}
		Galka** getGalki(int& rozmiar) {
			rozmiar = liczbaRodzajow;
			return galki;
		}		
};

int main() {
	Lodziarnia l(3);
	Osoba o("ala", 3, 1234, 12.5);
	int size;
	Galka** galki = getGalki(size);
	cout << "Dostepne smaki lodow:" << endl;
	for(int i = 0; i < size; i++) {
		cout << i << " " << galki[i].getNazwa() << " " << galki[i].getCena() << endl;
	}
	cout << "Podaj numer smaku: ";
	int smak;
	cin >> smak;
	l.kup(o, galki[smak]);
}
