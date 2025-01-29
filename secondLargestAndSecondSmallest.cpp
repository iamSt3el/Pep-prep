#include <iostream>
#include <climits>
using namespace std;


void fun(int arr[], int size){
    int small = INT_MAX;
    int large = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > large){
            large = arr[i];
        }
        if(arr[i] < small){
            small = arr[i];
        }
    }

    int secondSmall = INT_MAX;
    int secondLarge = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] != large && arr[i] > secondLarge){
            secondLarge = arr[i];
        }
        if(arr[i] != small && arr[i] < secondSmall){
            secondSmall = arr[i];
        }
    }

    if(secondLarge == INT_MIN || secondSmall == INT_MAX) {cout << -1 << endl; return; }

    cout << "Second Smallest: " << secondSmall << endl;
    cout << "Second Largest: " << secondLarge << endl;
}


int main(){
    int size = 5;

    int arr[5] = {1, 2, 3, 5, 5};

    fun(arr, size);

    return 0;
}
