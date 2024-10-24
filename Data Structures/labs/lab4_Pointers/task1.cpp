#include <iostream>
using namespace std;

int main()
{
    int X = 7;
    int *P;

    // Pointer Initialization - Method 1 -------
    P = &X;
    cout << "\nThe & operator: &X=" << &X << "\nThe value of P=" << P;
    cout << "\n\nThe value of X: X=" << X << "\nThe * operator: *P=" << *P;

    int *P2;
    // Pointer Initialization - Method 2 -------
    P2 = P;
    cout << "\nP=" << P << " and P2=" << P2;
    *P2 = 30;
    cout << "\n\nAfter statement: *P2= 30;";
    cout << "\nNow X = " << X << ", why?" << endl;
    /// [Q1] How is the value of "X" changed?

    cout << "P = " << *P << endl;
    cout << "P2 = " << *P2 << endl;

    int *P3;
    // Pointer Initialization - Method 3 -------
    P3 = new int;
    cout << "\n\n*P3 = " << *P3 << ", why?";
    // [Q2] What is the value of *P3? and why?

    // When you first initialize P3 using P3 = new int; it allocates memory dynamically for an integer, but the value in this newly allocated memory is
    // not initialized means it doesn't have a particular value
    // the value of *P3 is undefined, meaning it can be any random garbage value that happens to be at the memory location allocated by new int
    // when you print *P3, you will get a garbage value

    *P3 = 7777;
    cout << "\n\n*P3 = " << *P3;
    delete P3;
    P3 = new int;
    *P3 = 100;

    // cout << "\n\n*P3 = " << P3;

    delete P3;
    cout << "\n\n*P3 (after delete)= " << *P3 << ", why?";
    /// [Q3] What is the value of *P3? and why?

    // After deleting P3 with delete P3; and then trying to print *P3, the action is undefined cuz you're accessing a deleted pointer
    // which means the program might crash or print a garbage value

    cout << "\nP3 (after delete)= " << P3 << ", why not equal to NULL?";
    /// [Q4] What is the value of P3? and why not NULL?

    // it retains the memory address it was pointing to before deletion
    // The delete operation only frees the memory but it doesn't modify the value of the pointer
    // P3 still holds the address of the memory that was freed but that memory is no longer available
    // so the value of P3 after the delete operation is the same as it was before

    P3 = NULL;
    cout << "\nP3= " << P3;

    int s = 5;
    int *S1 = &s;

    // After the 1st run, Uncomment the next line and re-run
    // delete S1;
    /// [Q5] What happens when you uncomment & run? and why is that??

    // will lead to undefined behavior because S1 was initialized to point to a variable (int s = 5;) that is not dynamically allocated
    // Trying to delete a pointer that points to non-dynamically allocated memory will cause a runtime error or a crash in

    int *S2 = new int;
    int *S3 = S2;
    delete S3;

    // After the 1st run, Uncomment the next line and re-run
    // delete S2;
    /// [Q6] What happens when you uncomment & run? and why is that??

    // the same as [Q5]

    cout << endl;
    return 0;
}