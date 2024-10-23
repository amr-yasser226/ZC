#include <iostream>

using namespace std;

int RecursiveSum(int n)
{
    if (n == 0) // Base case
        return 0;
    return n + RecursiveSum(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "The sum of all numbers from 1 to " << n << " is: " << RecursiveSum(n) << endl;

    return 0;
}