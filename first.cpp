#include <iostream>
using namespace std;

int main(){
    
    int num1, num2;

    cout << "Enter Two numbers: " << endl;

    cin >> num1 >> num2;



    char op;

    cout << "Enter the opteration: " << endl;
    cin >> op;

    switch(op){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        case '%':
            cout << num1 % num2 << endl;
            break;
        default:
            break;
    }

    return 0;
}
