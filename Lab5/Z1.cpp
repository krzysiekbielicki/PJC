#include <iostream>

using namespace std;

void fun1(int x) {
	cout << "int x = " << x << endl;
	x++;	
	cout << "int x = " << x << endl;
}
void fun2(int* x) {
	cout << "int* x = " << *x << endl;
	(*x)++;
	cout << "int* x = " << *x << endl;
}
void fun3(int& x) {
	cout << "int& x = " << x << endl;
	x++;
	cout << "int& x = " << x << endl;
}

int main() {
	int wrt = 5;
	cout << "int wrt = " << wrt << endl;
	fun1(wrt);
	fun2(&wrt);
	fun3(wrt);
	cout << "int wrt = " << wrt << endl;
}
