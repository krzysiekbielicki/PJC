#include <iostream>

using namespace std;

char inputData[100];

int main() {
	cout << "wpisz cos:";
	cin >> inputData;
	char* tmp = inputData;
	int count = 0;
	while(*tmp++) {
		count++;
	}
	
	char* outputData = new char[count];
	for(int i = 0; i < count; i++) {
		outputData[i] = inputData[i];
	}
	cout << outputData << endl;
}
