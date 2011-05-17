#include <iostream>
#include <cstring>

using namespace std;

struct Element {
	char* imie;
	Element* next;
};

Element* lista = NULL;

Element* getNewElement() {
	Element* el = new Element();
	el->next = NULL;
	cout << "Podaj imie: " << endl;
	el->imie = new char[15];
	cin >> el->imie;
	return el;
}

void insert(Element* el) {
	if(lista == NULL) {
		lista = el;
		return;
	}
	Element* tmp = lista;
	while(tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = el;
}

//Z3:
void orderedInsert(Element* el) {
	if(lista == NULL) {
		lista = el;
	} else if(strcmp(lista->imie, el->imie) > 0) {
		el->next = lista;
		lista = el;
	} else {
		Element* tmp = lista;
		while(tmp->next != NULL && strcmp(tmp->imie, el->imie) > 0) {
			tmp = tmp->next;
		}
		el->next = tmp->next;
		tmp->next = el;
	}
	
}

void show() {
	cout << "Lista:" << endl;
	Element* tmp = lista;
	while(tmp != NULL) {
		cout << tmp->imie << endl;
		tmp = tmp->next;
	}
}

int main() {
	while (true) {
//		insert(getNewElement());
		orderedInsert(getNewElement());
		show();
	}
}
