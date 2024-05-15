#include <iostream>

using namespace std;

// Define the structure for a node in the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    // Constructor to initialize data and next and prev pointers
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

// Define the DoublyLinkedList class
class DoublyLinkedList {
private:
    Node* head; // Pointer to the head of the doubly linked list

public:
    // Constructor to initialize the DoublyLinkedList
    DoublyLinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the doubly linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value); // Create a new node with the given value
        if (head != nullptr) {
            head->prev = newNode; // Update the previous pointer of the current head
        }
        newNode->next = head; // Set the next pointer of the new node to the current head
        head = newNode; // Update the head pointer to point to the new node
    }

    // Function to display the elements of the doubly linked list
    void display() {
        Node* current = head; // Start from the head of the doubly linked list
        while (current != nullptr) {
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    // Create a new doubly linked list object
    DoublyLinkedList list;

    // Insert elements into the doubly linked list
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    // Display the doubly linked list
    cout << "Doubly Linked List: ";
    list.display();

    return 0;
}
