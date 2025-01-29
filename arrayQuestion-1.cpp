#include <iostream>
using namespace std;

int main(){

    int size = 5;

    int arr[size];

    cout << "Enter 5 elements in array: " << endl;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    

    for(int ele : arr){
        cout << ele << " ";
    }

    return 0;
}
