#include <iostream>

using namespace std;

int strlen(char* str) {
	char* c = str;
	while(*str++) {}
	return str-c;
}

int main() {
	cout << "\"Hello\" ma dlugosc:"<< strlen("Hello") << endl;
}
