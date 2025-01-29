#include <iostream>
using namespace std;

int main(){
    int input;

    cin >> input;


    for(int i = 1; i <= input; i++){
        int temp = input + 1 - i;
        for(int j = 1; j <= input; j++){
            if(temp > 0){
                cout << j ;
            }
                temp --;
        }
        cout << endl;
    }

    return 0;
}

