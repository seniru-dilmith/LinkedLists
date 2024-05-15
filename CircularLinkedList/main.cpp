#include <iostream>

using namespace std;

// Define the structure for a node in the circular linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// Define the CircularLinkedList class
class CircularLinkedList {
private:
    Node* head; // Pointer to the head of the circular linked list

public:
    // Constructor to initialize the CircularLinkedList
    CircularLinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the circular linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value); // Create a new node with the given value
        if (head == nullptr) {
            newNode->next = newNode; // Point the next pointer of the new node to itself
        } else {
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }
            last->next = newNode; // Point the next pointer of the last node to the new node
            newNode->next = head; // Point the next pointer of the new node to the head
        }
        head = newNode; // Update the head pointer to point to the new node
    }

    // Function to display the elements of the circular linked list
    void display() {
        if (head == nullptr) {
            cout << "Circular Linked List is empty" << endl;
            return;
        }
        Node* current = head; // Start from the head of the circular linked list
        do {
            cout << current->data << " "; // Print the data of the current node
            current = current->next; // Move to the next node
        } while (current != head); // Continue until we reach the head again
        cout << endl;
    }
};

int main() {
    // Create a new circular linked list object
    CircularLinkedList list;

    // Insert elements into the circular linked list
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    // Display the circular linked list
    cout << "Circular Linked List: ";
    list.display();

    return 0;
}
