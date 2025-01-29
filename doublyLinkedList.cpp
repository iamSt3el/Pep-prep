#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this->data = data;
            this->next = nullptr;
            this->prev = nullptr;
    }
};

class DoubleyLinkedList{
    public:
        Node* head;
        Node* tail;

        DoubleyLinkedList(){
            head = nullptr;
            tail = nullptr;
        }


        void push_to_front(int data){
            Node* newNode = new Node(data);

            if(head == nullptr){
                head = newNode;
                tail = newNode;
                return;
            }

            newNode -> next = head;
            head -> prev = newNode;

            head = newNode;
            
        }

        void push_to_end(int data){
            Node* newNode = new Node(data);

            if(tail == nullptr){
                tail = newNode;
                head = newNode;
                return;
            }
            
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;

        }

        void push_to_middle(int data, int position){
            Node* newNode = new Node(data);

            int count = 0;

            Node* temp = head;

            while(count != position && temp != nullptr){
                count ++;
                temp = temp -> next;
            }

            if(position < 0 || position > count){
                cout << "Not found" << endl;
            }

            newNode -> next = temp -> next;
            newNode -> prev = temp;

            temp -> next -> prev = newNode;
            temp -> next = newNode;

        }

        void displayFromFront(){
            Node* temp = head;

            while(temp != nullptr){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
        }

        void displayFromEnd(){
            Node* temp = tail;

            while(temp != nullptr){
                cout << temp -> data << " ";
                temp = temp -> prev;
            }
        }
};


int main(){
    DoubleyLinkedList list;
    
    list.push_to_front(4);
    list.push_to_front(3);
    list.push_to_front(2);
    list.push_to_front(1);

    list.push_to_end(5);
    list.push_to_end(6);

    list.push_to_middle(10, 4);

    cout << "From front: " << endl;
    list.displayFromFront();

    cout << "\nFrom end: " << endl;
    list.displayFromEnd();

    return 0; 
}
