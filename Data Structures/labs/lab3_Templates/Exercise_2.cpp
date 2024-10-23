#include <iostream>

using namespace std;

template <class T>

class Matrix
{
private:
    T arr[5][7];

public:
    // Construct to initialize the matrix with default values
    Matrix()
    {
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 7; ++j)
            {
                arr[i][j] = T();
            }
        }
    }

    void AddValue(int row, int col, T Value)
    {
        if (row >= 0 && row < 5 && col >= 0 && col < 7)
        {
            arr[row][col] = Value;
        }
    }

    bool BelongTo(T Value)
    {
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 7; ++j)
            {
                if (arr[i][j] == Value)
                {
                    return true;
                }
            }
        }
        return false;
    }

    void PrintRow(int row)
    {
        if (row >= 0 && row < 5)
        {
            for (int j = 0; j < 7; ++j)
            {
                cout << arr[row][j] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Invalid row number!" << endl;
        }
    }

    void Print()
    {
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 7; ++j)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    T MaxValue()
    {
        T maxValue = arr[0][0];

        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 7; ++j)
            {
                if (arr[i][j] > maxValue)
                {
                    maxValue = arr[i][j];
                }
            }
        }
        return maxValue;
    }
};

int main()
{
    // Test the Matrix class with int type
    Matrix<int> intMatrix;
    intMatrix.AddValue(0, 0, 10);
    intMatrix.AddValue(0, 1, 20);
    intMatrix.AddValue(1, 0, 5);
    cout << "Integer Matrix:\n";
    intMatrix.Print();
    cout << "Max value in integer matrix: " << intMatrix.MaxValue() << endl;

    // Test the Matrix class with double type
    Matrix<double> doubleMatrix;
    doubleMatrix.AddValue(0, 0, 3.14);
    doubleMatrix.AddValue(0, 1, 2.71);
    doubleMatrix.AddValue(1, 0, 1.61);
    cout << "\nDouble Matrix:\n";
    doubleMatrix.Print();
    cout << "Max value in double matrix: " << doubleMatrix.MaxValue() << endl;

    // Test the Matrix class with char type
    Matrix<char> charMatrix;
    charMatrix.AddValue(0, 0, 'g');
    charMatrix.AddValue(0, 1, 'e');
    charMatrix.AddValue(1, 0, 'a');
    cout << "\nChar Matrix:\n";
    charMatrix.Print();
    cout << "Max value in char matrix: " << charMatrix.MaxValue() << endl;

    // Test BelongTo function
    cout << "Does the integer matrix contain 10? " << (intMatrix.BelongTo(10) ? "Yes" : "No") << endl;

    return 0;
}