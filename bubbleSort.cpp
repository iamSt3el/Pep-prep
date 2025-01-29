#include <iostream>
using namespace std;


void bubbleSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }

    }
    cout << "Sorted Array: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int size = 5;

    int arr[5] = {5, 4, 3, 2, 1};

    cout << "Original Array: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    bubbleSort(arr, size);

    return 0;
}

