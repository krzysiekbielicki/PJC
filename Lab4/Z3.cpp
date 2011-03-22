#include <iostream>
#define CLEN 8

using namespace std;


void makeAmbigram(char* str) {
	char c[] = {'C', 'D', 'E', 'H', 'I', 'K', 'O', 'X'};
	char* tmp = str;
	char s;
	while(s = *tmp++) {
		int i;
		for(i = 0; i < CLEN; i++) {
			if(s == c[i]) {
				i = CLEN + 1;
			}
		}
		if(i == CLEN) {
			cout << "To nie jest ambigram!" << endl;
			return;
		}
	}
	cout << str << endl;
}

int main() {
	makeAmbigram("Hello");
	makeAmbigram("HEOO");
	
}
