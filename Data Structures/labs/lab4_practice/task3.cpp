#include <iostream>
using namespace std;

char *CompressArray(const char *inputArray, int size)
{
    // Count non special characters
    int Count = 0;
    for (int i = 0; i < size; i++)
    {
        if (inputArray[i] != '#' && inputArray[i] != '$' && inputArray[i] != '&')
        {
            Count++;
        }
    }

    // Allocate new memory for the compressed array
    char *compressedArray = new char[Count + 1]; // +1 for null terminator
    int index = 0;

    // Copy non specail characters
    for (int i = 0; i < size; i++)
    {
        if (inputArray[i] != '#' && inputArray[i] != '$' && inputArray[i] != '&')
        {
            compressedArray[index++] = inputArray[i];
        }
    }

    // Add null terminator at the end of compressed array
    compressedArray[index] = '\0';

    return compressedArray;
}

int main()
{
    while (true)
    {
        int numElements;

        // Step (a): Ask the user to enter the number of elements
        cout << "Enter the number of characters: ";
        cin >> numElements;

        // Step (b): Stop if the number of elements is <= 0
        if (numElements <= 0)
        {
            cout << "Program stoped" << endl;
            break;
        }

        // Step (c): Ask the user to enter an array of characters
        char *inputArray = new char[numElements + 1]; // +1 for null terminator
        cout << "Enter the array of characters: ";
        for (int i = 0; i < numElements; i++)
        {
            cin >> inputArray[i];
        }
        inputArray[numElements] = '\0'; // Manually adding null terminator

        // Step (d): Call the CompressArray function
        char *compressedArray = CompressArray(inputArray, numElements);

        // Step (e): Print the array returned from the function
        cout << "After function call: " << compressedArray << endl;

        // Step (f): De-allocate the arrays and repeat from step (a)
        delete[] inputArray;
        delete[] compressedArray;
    }

    return 0;
}
