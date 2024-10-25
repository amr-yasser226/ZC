#include <iostream>
using namespace std;

class Node
{
public:
    int data;   // Store the data
    Node *next; // Pointer to the next node

    // A constructor to initialize a new node
    Node(int val)
    {
        data = val;
        next = nullptr; // Initialize next to nullptr (null pointer)
    }
};

class LinkedList
{
public:
    Node *head; // Pointer to the head (the first item) of the list

    LinkedList()
    {
        head = nullptr; // Initialize head to nullptr, the list is empty
    }

    void insertAtBeginning(int new_data)
    {
        Node *new_node = new Node(new_data); // Create a new node
        new_node->next = head;               // The new node points to the (old) current head
        head = new_node;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "Null" << endl;
    }
};

int main()
{
    int arr[] = {1, 5, 6, 7, 9, 5};
    int size = sizeof(arr) / sizeof(arr[2]);

    LinkedList list;
    list.printList();
    return 0;
}
