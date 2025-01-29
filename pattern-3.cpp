#include <iostream>
using namespace std;

int main(){
    int input;

    cin >> input;

    int middle = input / 2;
    for(int i = 0; i <= input; i++){
        for(int j = 1; j <= input - i; j++){
            cout << " ";
        }
        for(int k = 0; k <= i; k++){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}


