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
	
	int (*tabFunPtr[]) (int, int) = {mul, div, sum, sub};
	cout << tabFunPtr[0](2,3) << endl;
	cout << tabFunPtr[2](2,3) << endl;
}
