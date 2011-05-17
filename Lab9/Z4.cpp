#include <iostream>

using namespace std;

struct sOsoba {
	char* imie;
	int wiek;
	bool plec;
};

class cOsoba {
	char* imie;
	int wiek;
	bool plec;
};


int main() {
	sOsoba o1;
	o1.imie = "ala";
	o1.wiek = 1;
	o1.plec = 0;
	cOsoba o2;
	o2.imie = "ala";
	o2.wiek = 1;
	o2.plec = 0;
}
