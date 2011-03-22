#include <iostream>

using namespace std;

int main() {
	int i = 5;
	int j = 8;
	int* ptr = &i;
	int& ref = j;
	ref = *ptr;
	cout << "i: " << i << endl;
	cout << "j: " << j << endl;
	cout << "*ptr: " << *ptr << endl;
	cout << "ref: " << ref << endl;
}
