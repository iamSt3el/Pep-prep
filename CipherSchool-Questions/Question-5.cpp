#include <iostream>
using namespace std;

int sum(int number){
    if(number == 0){
        return 0;
    }

    return number % 10 + sum(number / 10);
}



int main(){
    int number = 0;

    cout << "Enter a number: " << endl;
    cin >> number;

    int ans = sum(number);

    cout << ans << endl;

    return 0;
}
