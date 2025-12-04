#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = NULL;
    }

    // Insert at end (important for sorted lists)
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// MERGE FUNCTION
Node* mergeLinkedList(Node* head1, Node* head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* dummy = new Node(-1);
    Node* ptr3 = dummy;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->data <= ptr2->data) {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        } else {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while (ptr1 != NULL) {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    while (ptr2 != NULL) {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return dummy->next;
}

int main() {
    // STEP 1: Two sorted arrays
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n1 = 3;
    int n2 = 3;

    // STEP 2: Two linked lists
    List list1, list2;

    for (int i = 0; i < n1; i++) {
        list1.push_back(arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        list2.push_back(arr2[i]);
    }

    cout << "List 1: ";
    list1.print();

    cout << "List 2: ";
    list2.print();

    // STEP 3: Merge lists
    Node* mergedHead = mergeLinkedList(list1.head, list2.head);

    cout << "Merged List: ";
    Node* temp = mergedHead;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
