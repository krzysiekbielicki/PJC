#include <iostream>

using namespace std;

int main() {
	int capacity = 1;
	char* slowa = new char[capacity];
	while (true) {
		try {
			slowa = new char[++capacity];
		} catch(bad_alloc e) {
			cout << "Wywalilismy sie probujac utworzyc tablice o rozmiarze " << capacity << endl;
			break;
		}
		delete[] slowa;
	}
}
