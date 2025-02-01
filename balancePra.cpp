#include <iostream>
#include <stack>
using namespace std;

bool check(string str){
    stack<char> st;

    for(char ch : str){
        if(ch == '{' || ch == '(' || ch == '[') st.push(ch);

        if(ch == '}' || ch == ')' || ch == ']'){
            if(!st.empty()){
                char temp = st.top();
                st.pop();

                if(ch == '}' && temp != '{') return false;
                if(ch == ')' && temp != '(') return false;
                if(ch == ']' && temp != '[') return false;
            }
            else{
                return false;
            }
        }
    }
    
    if(!st.empty()) return false;

    return true;
}


int main(){
    string str = "{([])}";
    
    if(check(str)) cout << "True";
    else cout << "False";
    return 0;
}

