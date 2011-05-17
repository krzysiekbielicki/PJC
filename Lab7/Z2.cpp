#include <iostream>
using namespace std;

template <typename T>
T max(T* arr, int size) {
	T max = arr[0];
	for(int i = 1; i<size; i++)
		if(arr[i] > max)
			max = arr[i];
	return max;
}

int arr1[] = {1,2,7,9,2,15};
double arr2[] = {1.1, 5.6, 3.0};

int main() {
	cout << max(arr1, 6) << endl;
	cout << max(arr2, 3) << endl;
}
