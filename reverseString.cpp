#include <iostream>
#include <stack>
using namespace std;

void reverseString(string str){
    stack<string> st;
    
    string word = "";
    for(char ch : str){
        if(ch != ' ') word += ch;
        else{
            st.push(word);
            word = "";
        };
    }

    st.push(word);


    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main(){
    string str = "Hello, how are you?";
    
    reverseString(str);

    return 0;

}
