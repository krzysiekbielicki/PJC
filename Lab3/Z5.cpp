#include <iostream>

using namespace std;

int main() {
	char tab[] = "fantasmagoria";
	char* ptr1 = &tab[0];
	char* ptr2 = &tab[12];
	cout << "ptr1 = " << ptr1 << endl;
	cout << "ptr2 = " << ptr2 << endl;
//	cout << "ptr1+ptr2 = " << ptr1+ptr2 << endl;
	cout << "ptr1-ptr2 = " << ptr1-ptr2 << endl;
}
