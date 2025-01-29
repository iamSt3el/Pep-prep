#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = nullptr;
        }

        void push_to_front(int data){
            Node* newNode = new Node(data);

            if(head == nullptr){
                head = newNode;
                return;
            }

            newNode -> next = head;
            head = newNode;
        }

        void push_to_end(int data){
            Node* newNode = new Node(data);

            if(head == nullptr){
                head = newNode;
                return;
            }

            Node* temp = head;

            while(temp->next != nullptr){
                temp = temp -> next;
            }

            temp -> next = newNode;
        }

        void push_to_middle(int data, int position){
            Node* newNode = new Node(data);

            if(head == nullptr){
                head = newNode;
                return;
            }
            int count = 0;
            Node* temp = head;

            while(count != position && temp -> next != nullptr){
                temp = temp -> next;
                count ++;
            }
            if(position < 0 || position > count){
                cout << "Position is not found" << endl;
                return ;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }

        void display(){
            Node* temp = head;

            while(temp != nullptr){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }
};


int main(){
    LinkedList list;

    list.push_to_front(1);
    list.push_to_front(2);
    list.push_to_front(3);
    list.push_to_front(4);
    list.push_to_front(5);

    list.push_to_end(6);
    list.push_to_end(7);
    
    list.push_to_middle(10, 10);

    list.display();
    return 0;
}

