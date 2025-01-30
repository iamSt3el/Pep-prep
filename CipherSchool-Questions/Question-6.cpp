#include <iostream>
using namespace std;


int isPalidrome(int number, int num){
    if(number == 0) return num;

    num = num * 10 + (number % 10);

    return isPalidrome(number / 10, num);
}

int main(){
    int number = 0;

    cout << "Enter a number: " << endl;

    cin >> number;

    int ans = isPalidrome(number, 0);

    if(ans == number) cout << "Palindrome: " << ans;
    else cout << "Not Palindrome: " << ans;

    return 0;

}
