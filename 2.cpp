#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    
    int larg = 0;
    if(num1 > num2 && num1 > num3){
        larg = num1;
    }else if(num2 > num3 && num2 > num1){
        larg = num1;
    }else{
        larg = num3;
    }

    cout << larg << endl;
    return 0;
}


