#include <iostream>
#define LEN 3

using namespace std;

void fun(char* s, char& needle) {
	bool isSubstr = false;
	char* maxStart = 0;
	int maxLength = 0;
	char* curStart = s;
	int curLength = 0;

	while(*s != 0) {
		/*for(int i = 0; i < LEN; i++) {
			if(*s == needle[i]) {
				isSubstr = true;
				++s;
				continue;
			} else {
				isSubstr = false;
				if(curLength > maxLength) {
					maxLength = curLength;
					maxStart = curStart;
					curStart = ++s;
				}
				break;
			}
		}*/
		if(*s == needle) {
			curLength++;
			++s;
		} else {
			if(curLength > maxLength) {
        	                maxLength = curLength;
                                maxStart = curStart;
                        }
                                curStart = ++s;
				curLength = 0;
	
		}
/*		if(isSubstr) {
			curLength++;
		}*/
	}
	cout << "maxLength: " << maxLength << endl;
	cout << "Poczatek: " << maxStart << endl;
	cout << "Koniec: " << maxStart + maxLength << endl;

}

int main() {
        char tab = 'a';
	char (&needle) = tab;
	char* haystack = "abaac aaababbba";
	fun(haystack, needle);
}
