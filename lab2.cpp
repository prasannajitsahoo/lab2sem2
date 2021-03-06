#include <iostream>
using namespace std;

// Generic Programming - Ignore 

class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(){
        next = NULL;
    }

};


class LinkedList{
    // Head + Circles inside linked with each other
    public:
    // Head -> Node type ptr
    Node * head;
    Node * tail;

    // Construct
    LinkedList(){
        head = NULL;
        tail = NULL;
    } 
    // Circles inside linked with each other
    // Rules how circles will be linked

    // Insert

    void insert(int value){
       // If 1st Node is added
       Node * temp = new Node; 
       // Insert value in the node
       temp-> data = value;
       // 1st Node only.
       if(head == NULL){
            head = temp;
       }
       // Any other Node only.
       else{
            tail-> next = temp;
       }
       tail = temp;
    } 

    void insertAt(int pos, int value){
        // Reach the place before the pos
        Node * current = head;
        int i =1;
        while(i < pos-1){
            i++;
            current = current-> next;
        }

        // Create a node
        Node * temp = new Node;
        temp -> data = value;


        // Moving ptrs if not head
        temp-> next = current-> next;
        current->next = temp;
        
        // Update the code for 1st position

    }

  //INSERTING at head
  void insertAthead(int value){
        
        // Create a node
        Node * temp = new Node;
        temp -> data = value;


        // Moving ptrs if not head
        temp-> next = head;
        head = temp;
        

}


    // Deletion of last element
    void delet(){
        // store the tail in temp
        Node * temp = tail;
        // before tail has to point to null
        Node * current = head;
        while(current-> next != tail){
            current = current-> next;
        }
        current-> next = NULL; 

        // update tail
        tail = current;
        // delete temp
         delete temp;
    }

//delete a node at any position pos
 void deletpos(int pos){
       
       //reach the position
        Node * current = head;
   int i=1;
        while(i<pos-1){
           i++;
     current = current-> next;}

       //difine new pointer store pos address
    Node * ptr;
    ptr=current-> next;
    current-> next=ptr-> next;

        
       
        // delete temp
         delete ptr;
    }


    // Display
    void display(){
        Node * current = head;
        while(current != NULL){
            cout << current->data << "->";
            current = current->next;
        }
        cout << endl;
    }


     //count the numbers in linked list
     void count(){

     Node * current = head;
     int i=1;
       while(current != tail){
               i++;
       current = current->next;
        }
     cout<<"numbers in linked list are  "<<i<<endl;
}


};

int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.display();
    l1.delet();
    l1.display();
    l1.insertAt(2,5);
    l1.display();
   l1.insertAthead(7);
    l1.display();
    l1.deletpos(2);
    l1.display();
    l1.count();
   l1.display();
     return 0;
}
