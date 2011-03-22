#include <iostream>

using namespace std;

int main() {
	char c = 'A';
	double d = 1.1;
	int i = 1;
	char* pc = &c;
	double* pd = &d;
	int* pi = &i;
	cout << "char c=" << c << endl;
	cout << "char* pc=" << pc << endl;
	cout << "double d=" << d << endl;
	cout << "double* pd=" << pd << endl;
	cout << "int i=" << i << endl;
	cout << "int* pi=" << pi << endl;
}
