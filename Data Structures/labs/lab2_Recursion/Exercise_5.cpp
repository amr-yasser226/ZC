#include <iostream>

using namespace std;

bool sorted(int arr[], int size, int index = 0)
{
    // Base cases
    if (size <= 1 || index == size - 1)
        return true;

    if (arr[index] > arr[index + 1])
        return false;

    return sorted(arr, size, index + 1);
}

int main()
{
    // Example array
    int arr[] = {1, 2, 3, 4, 5};             // Change this to test different cases
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Check if the array is sorted
    if (sorted(arr, size))
    {
        cout << "The array is sorted in increasing order." << endl;
    }
    else
    {
        cout << "The array is not sorted in increasing order." << endl;
    }

    return 0;
}