#include <iostream>

using namespace std;

int zeroCount(int arr[], int size, int index = 0)
{
    if (index == size)
        return 0; // Base case

    int count = (arr[index] == 0) ? 1 : 0;
    return count + zeroCount(arr, size, index + 1);
}

int main()
{
    // Example array
    int arr[] = {1, 0, 2, 0, 3, 4, 0, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print the result
    cout << "Number of zeros in the array: " << zeroCount(arr, size) << endl;

    return 0;
}
