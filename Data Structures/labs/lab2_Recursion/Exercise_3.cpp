#include <iostream>

using namespace std;

int arrSum(const int arr[], int size)
{
    if (size == 1) // Base case
        return arr[0];
    return arr[size - 1] + arrSum(arr, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of array elements: " << arrSum(arr, size);

    return 0;
}