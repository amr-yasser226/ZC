#include <iostream>

using namespace std;

int GetMin(int arr[], int size, int index = 0)
{
    // Base cases
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[index];

    int min = GetMin(arr, size - 1);

    return (arr[size - 1] < min) ? arr[size - 1] : min;
}

int main()
{
    // Example array
    int arr[] = {5, 3, 8, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Get the minimum element
    int minElement = GetMin(arr, size);

    // Print the result
    cout << "The minimum element in the array is: " << minElement << endl;

    return 0;
}