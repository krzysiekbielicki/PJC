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
		cout << *s << endl;
		for(int i = 0; i < LEN - 1; i++) {
			cout << "\t" << (&needle)[i] << endl;
			if(*s == (&needle)[i]) {
				isSubstr = true;
				++s;
				continue;
			} else {
				isSubstr = false;
				if(curLength > maxLength) {
					maxLength = curLength;
					maxStart = curStart;
				}
				curStart = ++s;
				curLength = 0;
				break;
			}
		}
/*		if(*s == needle) {
			curLength++;
			++s;
		} else {
			if(curLength > maxLength) {
        	                maxLength = curLength;
                                maxStart = curStart;
                        }
                        curStart = ++s;
			curLength = 0;
	
		}*/
		if(isSubstr) {
			curLength++;
		}
	}
	cout << "maxLength: " << maxLength << endl;
	cout << "Poczatek: " << maxStart << endl;
	cout << "Koniec: " << maxStart + (maxLength * (LEN - 1)) << endl;

}

int main() {
        char tab[LEN] = "ab";
	char (&needle) [LEN] = tab;
	char* haystack = "abaac aaababbba";
	fun(haystack, *needle);
}
