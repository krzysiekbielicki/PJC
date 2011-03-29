#include <iostream>

using namespace std;

int main() {
	int x = 5;
	int* px = &x;
	int*& rpx = px;
	int** tab[] = {&px, &rpx};
	cout << **tab << endl;
	cout << **tab << endl;
}
