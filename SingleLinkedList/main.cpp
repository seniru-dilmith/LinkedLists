#include <iostream>

using namespace std;

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head; // Pointer to the head of the linked list

public:
    // Constructor to initialize the LinkedList
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value); // Create a new node with the given value
        newNode->next = head; // Set the next pointer of the new node to the current head
        head = newNode; // Update the head pointer to point to the new node
    }

    // Function to display the elements of the linked list
    void display() {
        Node* current = head; // Start from the head of the linked list
        while (current != nullptr) {
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    // Create a new linked list object
    LinkedList list;

    // Insert elements into the linked list
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    // Display the linked list
    cout << "Linked List: ";
    list.display();

    return 0;
}
