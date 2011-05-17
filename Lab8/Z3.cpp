#include <iostream>

using namespace std;

char inputData[100];

int main() {
	int size = 1;
	void* ptr = malloc
	while () {
		cout << "wpisz slowo:";
		cin >> inputData;
		char* tmp = inputData;
		int count = 0;
		while(*tmp++) {
			count++;
		}
		
		if(size+1 > capacity) {
			capacity *= 2;
			char** tmp = slowa;
			slowa = new char*[capacity];
			for(int i = 0; i < size; i++) {
        	                slowa[i] = tmp[i];
	                }
		}
		slowa[size] = new char[count];
		for(int i = 0; i < count; i++) {
			slowa[size][i] = inputData[i];
		}
		size++;

		for(int i = 0; i < size; i++) {
                	cout << slowa[i] << endl;
                }
	}
}
