#include <iostream>

using namespace std;

int mul(int x, int y) {
	return x*y;
}

int div(int x, int y) {
	return x/y;
}

int sum(int x, int y) {
	return x+y;
}

int sub(int x, int y) {
	return x-y;
}

int main() {
	int (*funPtr1) (int, int);
	int (*funPtr2) (int, int);
	funPtr1 = mul;
	funPtr2 = sum;
	cout << funPtr1(2,3) << endl;
	cout << funPtr2(2,3) << endl;
}
