#include <iostream>
#include <stack>
#include <string>
#include <cctype> // for isdigit() and isalnum()

using namespace std;

void Eval(string str) {
    stack<int> st;

    int last = str.size() - 1;

    while (last >= 0) {
        if (isdigit(str[last])) {
            st.push(str[last] - '0');
        }
        else if (str[last] == '+' || str[last] == '-' || str[last] == '*' || str[last] == '/') {
            int num1 = st.top(); st.pop();
            int num2 = st.top(); st.pop();

            if (str[last] == '+') st.push(num1 + num2);
            else if (str[last] == '-') st.push(num1 - num2);
            else if (str[last] == '*') st.push(num1 * num2);
            else st.push(num1 / num2);
        }
        last--;
    }

    cout << st.top() << endl;
}

int main() {
    string str = "+9*26";
    
    Eval(str);
    
    return 0;
}

