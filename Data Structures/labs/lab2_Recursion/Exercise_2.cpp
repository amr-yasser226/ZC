#include <iostream>

using namespace std;

int fib(int n)
{

    // The two base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;

    // Prompt user for input
    cout << "Enter a non-negative integer to find its Fibonacci value: ";
    cin >> n;

    // Calculate Fibonacci value
    int result = fib(n);

    // Check if the input was valid before printing the result
    if (result != -1)
    {
        cout << "Fibonacci value for " << n << " is: " << result << endl;
    }

    return 0;
}