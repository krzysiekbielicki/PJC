#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3, int N, typename ret, typename arg>
void func(T1* a1, T2& a2, T3 (*a3)[N], ret (*a4)(arg)) {
	cout << *a1 << " " << a2 << endl;
	for(int i = 0; i < N; i++)
		cout << (*a3)[i] << endl;
	cout << a4(*a1) << endl;
}

int by2(int x) {
	return 2*x;
}

int main() {
	int i = 1;
	char c = 'A';
	char arr[] = "ala ma kota";
	func(&i, c, &arr, by2);
}
