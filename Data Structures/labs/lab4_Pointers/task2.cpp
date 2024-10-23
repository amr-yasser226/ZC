#include <iostream>
using namespace std;

int *CloneArray(const int *Array, int size)
{
    int *clonedArray = new int[size];

    // i will copy each element
    for (int i = 0; i < size; i++)
    {
        clonedArray[i] = Array[i];
    }

    // set the pointer to the newly (cloned) array
    return clonedArray;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // then let's clone the array
    int *clonedArr = CloneArray(arr, size);

    cout << "Cloned array contents: ";
    for (int i = 0; i < size; i++)
    {
        cout << clonedArr[i] << " ";
    }

    // then free the memory
    delete[] clonedArr;

    return 0;
}
