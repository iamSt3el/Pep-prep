#include <iostream>
using namespace std;

// Function to print a array
void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to reverse a array
void reverse(int arr[], int size){
    int temp[size];

    for(int i = 0; i < size; i++){
        temp[i] = arr[i];
    }

    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(temp[start], temp[end]);
        start++;
        end --;
    }
    
    print(temp, size);

}

// Function to check if a array is sorted or not
bool isSorted(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            return false;
        }
    }

    return true;
}

// Function to find min and max
void minAndMax(int arr[], int size){
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Max number in array: " << max << endl;
    cout << "Min number in array: " << min << endl;
}

int main(){
    int size = 10;

    int arr[size];

    cout << "Enter 10 elements: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Reverse Array: " << endl;
    reverse(arr, size);

    if(isSorted(arr, size)){
        cout << "The array is sorted" << endl;
    }else{
        cout << "The array is not sorted" << endl;
    }

    minAndMax(arr, size);

    int input = 0;

    cout << "Input 1 if want to see original array: " << endl;
    cin >> input;

    if(input == 1){
        print(arr, size);
    }

    return 0;
}
