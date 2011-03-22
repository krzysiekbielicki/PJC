#include <iostream>

using namespace std;

int dlugoscSlowa(char* str) {
	char* p = str;
	char* tmp = str;
	while(!isblank(*tmp++)) {}
	return tmp-p;
}

char** splitWords(char* str, int& slowa) {
	char* tmp = str;
	char c;
	slowa = 0; //ilosc wyrazow w slowie
	while(c = *tmp++) {
		if(isblank(c))
			slowa++;
	}
	slowa++;
	char** zdanie = new char*[slowa];
	tmp = str;
	int slowo = 0;
	int znak = 0;
	zdanie[slowo] = new char[dlugoscSlowa(tmp)];
	while(c = *tmp++) {
		if(isblank(c)) {
			zdanie[slowo][znak] = '\0';
			slowo++;
			zdanie[slowo] = new char[dlugoscSlowa(tmp)];
			znak = 0;
		} else {
			zdanie[slowo][znak++] = c;
		}
	}
	zdanie[slowo][znak++] = '\0';
	return zdanie;
}

int main() {
	int slowa;
	char** out = splitWords("Ala ma kota, a kot ma ale", slowa);
	char* slowo;
	for(int i = 0; i < slowa; i++)
		cout << out[i] << endl;
}
