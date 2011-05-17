#include <iostream>
using namespace std;

template <typename T>
void add(T* (&tab), int size) {
	T* tmp = tab;
	tab = new T[size+1];
	for(int i = 0; i < size; i++) {
		tab[i] = tmp[i];
	}
	cin >> tab[size];
}

void add(char** &tab, int size) {
	char** tmp = tab;
	tab = new char*[size+1];
	for(int i = 0; i < size; i++) {
		tab[i] = tmp[i];
	}
	cin >> tab[size];
}

template <typename T>
void print(T* tab, int size) {
	for(int i = 0; i < size; i++)
		cout << tab[i] << endl;
}

int main() {
	int* wiek;
	cout << "podaj imie: ";
	add(wiek, 0);
	print(wiek, 1);
}
