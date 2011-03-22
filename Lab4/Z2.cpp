#include <iostream>

using namespace std;

bool isPalindrom(char* str) {
	char* end = str;
	while(*++) {}
	for(int i = 0; i < len/2; i++)
		if(str[i] != str[len-i-1])
			return false;
	return true;
}

int main() {
	cout << isPalindrom("hello") << endl;
	cout << isPalindrom("kajak") << endl;
}
