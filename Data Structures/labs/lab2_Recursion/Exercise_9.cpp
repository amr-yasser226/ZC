#include <iostream>

using namespace std;

int GCD(int n, int m)
{
    // Base case
    if (m == 0)
        return n;

    return GCD(m, n % m);
}

int main()
{
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call GCD function
    int result = GCD(num1, num2);

    // Print the result
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}