#include <iostream>
using namespace std;

int sum(int arr[], int i, int size){
    if(i >= size) return 0;

    return arr[i] + sum(arr, i + 1, size);
}


int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    cout << sum(arr, 0, 5);

    return 0;
}
