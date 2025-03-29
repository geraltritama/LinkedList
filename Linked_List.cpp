#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = nullptr;

    Node* second = new Node();
    second->data = 2;
    head->next = second;

    Node* third = new Node();
    third->data = 3;
    second->next = third;

    Node* fourth = new Node();
    fourth->data = 4;
    third->next = fourth;

    Node* fifth = new Node();
    fifth->data = 5;
    fourth->next = fifth;
    fifth->next = nullptr;

    cout << "Linked List sebelum dibalik: \n";
    Node* node = head;
    while (node) {
        cout << node->data;
        if (node->next) cout << " -> ";
        node = node->next;
    }
    cout << endl;

    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;

    cout << "Linked List setelah dibalik: \n";
    node = head;
    while (node) {
        cout << node->data;
        if (node->next) cout << " -> ";
        node = node->next;
    }
    cout << endl;

    return 0;
}
