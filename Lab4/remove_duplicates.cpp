#include <iostream>
#include <set>

void removeDuplicates(int arr[], int& size) {
    std::set<int> uniqueElements(arr, arr + size);
    size = uniqueElements.size();
    int i = 0;
    for (int element : uniqueElements) {
        arr[i++] = element;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 7, 8, 1};
    int size = 11;

    removeDuplicates(arr, size);

    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
