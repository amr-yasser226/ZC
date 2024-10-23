#include <iostream>

using namespace std;

int firstOccurrence(int arr[], int size, int target, int index = 0)
{
    if (size == 0 || index == size)
        return -1; // Base case

    if (arr[index] == target)
        return index;

    return firstOccurrence(arr, size, target, index + 1);
}

int lastOccurrence(int arr[], int size, int target, int index = 0)
{
    if (index == size)
        return -1;
    int foundIndex = lastOccurrence(arr, size, target, index + 1);

    if (foundIndex != -1)
        return foundIndex;

    if (arr[index] == target)
        return index;

    return -1;
}

int main()
{
    // Example array
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    // Find first occurrence
    int firstIndex = firstOccurrence(arr, size, target);
    cout << "First occurrence of " << target << " is at index: " << firstIndex << endl;

    // Find last occurrence
    int lastIndex = lastOccurrence(arr, size, target);
    cout << "Last occurrence of " << target << " is at index: " << lastIndex << endl;

    return 0;
}