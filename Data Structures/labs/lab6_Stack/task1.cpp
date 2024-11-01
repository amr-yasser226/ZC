// // This is an updated version of code originally // created by Frank M. Carrano and Timothy M. Henry.
// // Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
// template<typename T>
// class StackADT
// {
// public:
// /** checks whether this stack is empty.*/
//     virtual bool isEmpty() const = 0;
// /** Adds a new entry to the top of this stack.*/
//     virtual bool push (const & newEntry) = 0;
// /** Copies the top item of the stack to the passed parameter and removes it from stack*/
//     virtual bool pop (T& TopEntry) 0;
// /** Copies the top item of the stack to the passed parameter without removing it from stack*/ virtual bool peek (T& TopEntry) const = 0;
// /** Destroys this stack and frees its assigned memory. */
//     virtual StackADT() {}
// }; // end StackADT

#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T value) : data(value), next(nullptr) {}
};

template <typename T>
class Stack
{
private:
    Node<T> *topNode;

public:
    Stack() : topNode(nullptr) {}

    void push(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop()
    {
        if (!isEmpty())
        {
            Node<T> *temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    bool isEmpty() const
    {
        return (topNode == nullptr);
    }

    void PrintStacK() const
    {
        Node<T> *current = topNode;
        while (current != nullptr)
        {
            cout << current << " ";
            current = current->next;
        }
    }

    Stack<T> Reverse() const
    {
        Stack<T> ReversedStack;
        Node<T> *current = topNode;

        while (current != nullptr)
        {
            ReversedStack.push(current->data);
            current = current->next;
        }
        return ReversedStack;
    }

    bool ReplaceAll(T value, T newvalue)
    {
        bool found = false;
        Node<T> *current = topNode;

        while (current != nullptr)
        {
            if (current->data == value)
            {
                current->data = newvalue;
                found = true;
            }
            current = current->next;
        }
        return found;
    }

    ~Stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

int main()
{
    Stack<int> stack;

    stack.push(4);
    stack.push(47);
    stack.push(12);
    stack.push(9);

    cout << "Original StacK:";
    stack.PrintStacK();

    cout << "The reversed stack:";
    stack.Reverse();

    return 0;
}