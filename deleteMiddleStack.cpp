#include <iostream>
#include <stack>
using namespace std;



int main(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    int mid = st.size() / 2;

    cout << mid << endl;

    return 0;
}
