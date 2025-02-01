#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse(queue<int> &q, int k){
    stack<int> st;

    for(int i = 0; i < k; i++){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    for(int i = 0; i < q.size() - k; i++){
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    reverse(q, 2);

    return 0;

}
