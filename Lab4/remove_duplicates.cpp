#include <iostream>

using namespace std;

void removeNumber(int numbers[], int idx, int &size) {
	int i;
	for(i = idx; i < size - 1; i++)
		numbers[i] = numbers[i + 1];
	size--;
}

void removeDuplicate(int numbers[], int &size) {
	int i, j;
	int number;
	for(i = 0; i < size; i++)
	{
		number = numbers[i];
		for(j = i + 1; j < size; j++)
		{
			if(number == numbers[j])
			{
				removeNumber(numbers, j, size); j--;			
			}
		}
	}
}

int main()
{
	int i;
	int numbers[] = { 1,4,9,16,9,7,4,9,4,11 };

	int size = 10;
	removeDuplicate(numbers, size);
	
	for(i = 0; i < size; i++)
	cout << numbers[i] << ' '; cout << endl;
	
    return 0;
}