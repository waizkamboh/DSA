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

    //  void middleOfLL() {
    //   int len = 0;
    //   Node* temp = head;
    //   Node* temp1 = head;
    //   while (temp != NULL)
    //   {
    //     temp = temp->next;
    //     len++;
    //   }
    //   int middleNode = ((len/2) + 1);
    //   for (int i = 1; i < middleNode; i++)
    //   {
    //     temp1 = temp1->next;
    //   }

    //   cout << "Middle of a LinkedList" << temp1->data;
      
      
    //  }

    // Using Slow Fast Approch

    void middleOfLL() {
      Node* slow = head;
      Node* fast = head;

      while (fast->next != NULL && fast != NULL)
      {
        slow = slow->next;
        fast = fast->next->next;
      }

      cout << "Middle of a LinkedList" << slow->data;
      
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
   ll.middleOfLL();
   return 0;
}