#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
	int* l = arr;
	int* r = arr + size - 1;

	while (l < r) {
		int temp = *l;
		*l = *r;
		*r = temp;
		l++;
		r--;
	}

}

int main(int argc, char const *argv[])
{
	
	int arr[5] {1, 2, 3, 4, 5};
	reverseArray(arr, 5);

	for (int element: arr) {
		cout << element << endl;
	}
	
	return 0;
}
