#include <iostream>
#define N 3

using namespace std;

void show(int** t) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cout << t[i][j] << "\t";
		}
		cout << endl;
	}
}

int main() {
	int t1[] = {1, 2, 3};
	int t2[] = {4, 5, 6};
	int t3[] = {7, 8, 9};
	int* t[] = {t1, t2, t3};
	show(t);
}
