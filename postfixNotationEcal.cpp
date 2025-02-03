#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

void Eval(string str) {
    stack<int> st;

    for(int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            st.push(str[i] - '0');
        }
        else{
            int num1 = st.top(); st.pop();
            int num2 = st.top(); st.pop();

            if (str[i] == '+') st.push(num1 + num2);
            else if (str[i] == '-') st.push(num1 - num2);
            else if (str[i] == '*') st.push(num1 * num2);
            else st.push(num1 / num2);
        }
        
    }

    cout << st.top() << endl;
}

int main() {
    string str = "26*9+";
    
    Eval(str);
    
    return 0;
}

