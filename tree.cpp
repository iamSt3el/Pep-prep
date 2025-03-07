#include <iostream>
#include <queue>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this -> data = data;
            this -> left = nullptr;
            this -> right = nullptr;
        }
};


class BST{
    public:
        Node* root;

        BST(){
           root = nullptr;
        }

        // Function to insert a new node into the tree
        Node* insertHelper(Node* &node, int data){
            if(node == nullptr){
                return new Node(data); 
            }

            if(data > node -> data){
                node -> right = insertHelper(node -> right, data);
            }else if(data < node -> data){
                node -> left = insertHelper(node -> left, data);
            }

            return node;

        }
    
        // Function to preOrder traversal
        void preOrderHelper(Node* node){
            if(node != nullptr){
                cout << node -> data << " ";
                preOrderHelper(node -> left);
                preOrderHelper(node -> right);
            }
        }

        // Function to post Order traversal
        void postOrderHelper(Node* node){
            if(node != nullptr){
                postOrderHelper(node -> left);
                postOrderHelper(node -> right);
                cout << node -> data << " ";
            }
        }

        // Function to in Order traversal
        void inOrderHelper(Node* node){
            if(node != nullptr){
                inOrderHelper(node -> left);
                cout << node -> data << " ";
                inOrderHelper(node -> right);
            }
        }

        // Funciton for Breadth first traversal

        void BFT(){
            if(root == nullptr) return;
    
            queue<Node*> q;

            q.push(root);

            while(!q.empty()){
                Node* currentNode = q.front();
                cout << currentNode -> data << " ";
                q.pop();

                if(currentNode -> left) q.push(currentNode -> left);
                if(currentNode -> right) q.push(currentNode -> right );
            }
        }

        void insert(int data){
            root = insertHelper(root, data);
        }
    
        void inOrder(){
            inOrderHelper(root);
            cout << endl;
        }

        void preOrder(){
            preOrderHelper(root);
            cout << endl;
        }

        void postOrder(){
            postOrderHelper(root);
            cout << endl;
        }


        bool search(Node* node, int data){
            if(node == nullptr) return false;

            if(node -> data == data) return true;

            if(node -> data < data) return search(node -> right, data);
            else return search(node -> left, data);
        }

        Node* min(Node* node){
            if(node == nullptr) return nullptr;

            if(node -> left == nullptr) return node;

            return min(node -> left);

        }

        Node* max(Node* node){
            if(node == nullptr) return nullptr;

            if(node -> right == nullptr) return node;

            return max(node -> right);
        }

        //Do it later
        Node* deleteFromBST(Node* node, int val){
            if(node == nullptr) return nullptr;

            if(val > node -> data) node -> right = deleteFromBST(node -> right, val);

            else if(val < node -> data) node -> left = deleteFromBST(node -> left, val);

            else{
                if(node -> left == nullptr){
                    Node* temp = node -> right;

                    delete node;
                    return temp;
                }else if(node -> right == nullptr){
                    Node* temp = node -> left;

                    delete node;
                    return temp;
                }

                Node* temp = min(node -> right);

                node -> data = temp -> data;

                node -> right = deleteFromBST(node -> right, temp -> data); 
            }

            return node;
        }
        

};


int main(){

    BST node;
    
    node.insert(10);
    node.insert(5);
    node.insert(2);
    node.insert(1);
    node.insert(3);
    node.insert(6);
    node.insert(4);

    cout << "In Order: ";
    node.inOrder();

    //cout << "Pre Order: ";
    //node.preOrder();

    //cout << "Post Order: ";
    //node.postOrder();

    //cout << "Breadth First Traversal: ";
    //node.BFT();
    
    //if(node.search(node.root, 11)) cout << "Found" << endl;
    //else cout << "Not found" << endl;

    //cout << node.mim(node.root) -> data << endl;
    //cout << node.max(node.root) -> data << endl;
    
    node.root = node.deleteFromBST(node.root, 5);

    cout << "In Order after deleting: " << endl;
    node.inOrder();
    return 0;
}
