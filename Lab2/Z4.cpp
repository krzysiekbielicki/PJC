#include <iostream>

using namespace std;

int k = 1;

int main() {
	cout << k << endl;
	cout << ::k << endl;
	k = 2;
	cout << k << endl;
	::k = 3;
	cout << ::k << endl;
	int k = 4;
	cout << k << endl;
	{
		int k = 5;
		cout << k << endl;
	}
	cout << k << endl;
}
