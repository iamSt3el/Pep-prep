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

void sumAtKLevel(Node* root, int k){
    if(root == nullptr) return;

    queue<Node*> q;
    q.push(root);
    int level = 0;
    int sum = 0;


    while(!q.empty()){
        int size = q.size();

        if(level == k){
            while(size --){
                Node* node = q.front();
                q.pop();

                sum += node -> data;
            }

            cout << "Sum at level " << k << " is " << sum << endl;
            return;
        }


        while(size --){
            Node* node = q.front();
            q.pop();

            if(node -> left) q.push(node -> left);
            if(node -> right) q.push(node -> right);
        }

        level ++;
    }
}

int preOrder(Node* node){
    if(node == nullptr) return 0;

    
    return node -> data + preOrder(node -> left) + preOrder(node -> right);
}

/*int allNodes(Node* node){
    if(node == nullptr) return 0;

    int sum = 0;

    preOrder(node, sum);


    return sum;

}*/

int sumOfAllNodes(Node* node){
    if(node == nullptr) return 0;

    return preOrder(node);
}

int height(Node* root){
    if(root == nullptr) return 0;

    int leftHeight = height(root -> left);
    int rightHeight = height(root -> right);

    return max(leftHeight, rightHeight) + 1;
}

void rightView(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int level = q.size();

        for(int i = 1; i <= level; i++){
            Node* node = q.front();
            q.pop();
            if(i == 1){
                cout << node -> data << " ";
            }

            if(node -> left) q.push(node -> left);
            if(node -> right) q.push(node -> right);
        }
    }
}


int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    root -> right -> right -> left = new Node(8);

    //sumAtKLevel(root, 2);
    //
   // cout << sumOfAllNodes(root) << endl;
    
    //cout << height(root) << endl;
    //
    rightView(root);
    return 0;
}
