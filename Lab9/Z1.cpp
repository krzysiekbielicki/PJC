#include <iostream>

using namespace std;

union Unia {
	int i;
	long double l;
} u;

int main() {
	u.i = 1;
	cout << sizeof(u) << " " << u.i << " " << u.l << endl;
	u.l = 2;
	cout << sizeof(u) << " " << u.i << " " << u.l << endl;
	u.i = 1;
	cout << sizeof(u) << " " << u.i << " " << u.l << endl;
}
