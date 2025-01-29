#include <iostream>
using namespace std;


void reverseArray(int arr[], int size){
    int first = 0;
    int last = size - 1;

    while(first <= last){
        swap(arr[first], arr[last]);
        first ++;
        last--;
    }

    cout << "Reversed arrray: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

}

int main(){
    int arr[4] = {4, 3, 2, 1};
    
    cout << "Original Array: " << endl;

    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 4);

    return 0;
}
