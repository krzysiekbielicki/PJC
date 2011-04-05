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

void funCall(int **dane, int danec, int (*fun[]) (int, int), int func) {
	for(int i = 0; i < func; i++)
		for(int j = 0; j < danec; j++)
			cout << fun[i](dane[0][j], dane[1][j]) << endl;
}

int main() {
	int** dane = new int*[2];
	dane[0] = new int[4];
	dane[0][1]
	dane[1] = {1,3,5,7};
//	int dane[][2] = {{1,2},{3,4},{5,6},{7,8}};

	

	int (*fun[]) (int, int) = {mul, div, sum, sub};
	funCall(dane, 4, fun, 4);
}
