#include <iostream>
#include <queue>
#include <stack>
using namespace std;


void reverse(queue<int> q){
    stack<int> st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    

    while(!st.empty()){
      cout << st.top() << " ";
      st.pop();
    }
}

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverse(q);

    return 0;

}
