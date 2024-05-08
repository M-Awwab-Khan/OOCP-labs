#include <iostream>
using namespace std;

int* findMax(int arr[], int size) {
	int* ptr {arr};
	for (int i = 0; i < size; ++i) {
		if (arr[i] > *ptr) {
			ptr = &arr[i];
		}
	}
	return ptr;
}

int main(int argc, char const *argv[])
{
	int arr[5] = {3, 2, 51, 4, 1};
	int* maxptr = findMax(arr, 5);

	cout << maxptr << endl;
	cout << *maxptr << endl;
	return 0;
}