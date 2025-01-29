#include <iostream>
using namespace std;


void selectionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int mimIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[mimIndex]){
                mimIndex = j;
            }
        }
        swap(arr[mimIndex], arr[i]);
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


    selectionSort(arr, size);

    return 0;
}
