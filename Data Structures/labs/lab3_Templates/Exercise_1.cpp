#include <iostream>

using namespace std;

template <typename T>

T minElement(T arr[], int size)
{
    T min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    // Test with an array of integers
    int arrInt[] = {8, 2, 3, 4, 5, 6, 7, 1};
    int sizeInt = sizeof(arrInt) / sizeof(arrInt[0]);
    cout << "The min element in the integer array is: " << minElement(arrInt, sizeInt) << endl;

    // Test with an array of floats
    float arrFloat[] = {3.14f, 2.71f, 5.2f, 1.61f, 8.97f};
    int sizeFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);
    cout << "The min element in the float array is: " << minElement(arrFloat, sizeFloat) << endl;

    // Test with an array of characters
    char arrChar[] = {'g', 'e', 'a', 'd', 'c'};
    int sizeChar = sizeof(arrChar) / sizeof(arrChar[0]);
    cout << "The min element in the char array is: " << minElement(arrChar, sizeChar) << endl;

    // Test with an array of strings
    string arrString[] = {"banana", "apple", "grape", "cherry"};
    int sizeString = sizeof(arrString) / sizeof(arrString[0]);
    cout << "The min element in the string array is: " << minElement(arrString, sizeString) << endl;

    return 0;
}