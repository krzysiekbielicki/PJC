#include <iostream>

using namespace std;

int main() {
	int i = 10;
	int* ptr1 = &i;
	int* ptr2 = &i;
	*ptr1 = 20;
	cout << "i = " << i << endl;
	cout << "*ptr1 = " << *ptr1 << endl;
	cout << "*ptr2 = " << *ptr2 << endl;
}
