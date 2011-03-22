#include <iostream>

using namespace std;

int main() {
	int wrt;
	int*  ptr1 = &wrt;
	int** ptr2 = &ptr1;
	cout << "wrt = " << wrt << endl;
	cout << "ptr1 = " << ptr1 << endl;
	cout << "ptr2 = " << ptr2 << endl;
}
