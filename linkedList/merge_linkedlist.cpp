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
   Node* head;
   Node* tail;

   public:
     List() {
        head = tail = NULL;
     }

     void push_front(int val) {
      Node* newNode = new Node(val);
      if(head == NULL) {
        head = tail = newNode;
        return;
      }else {
        newNode->next = head;
        head = newNode;
      }
     }

     
     void print() {
      Node* temp = head;
      while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
      }
      cout << "NULL";
      
     }

   Node* mergeLinkedList(Node* &head1, Node* & head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* dummyNode = new Node(-1);
    Node* ptr3 = dummyNode;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->data <= ptr2->data) {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }else {
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

    return dummyNode->next;
    
    

   }


};

int main() {
   List ll;
   ll.push_front(6);
   ll.push_front(5);
   ll.push_front(4);
   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);
   ll.print();
   cout << endl;
   return 0;
}