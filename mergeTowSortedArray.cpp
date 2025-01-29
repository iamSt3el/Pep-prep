#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int size1, int size2) {
    int i = 0, j = 0, k = 0;
    int size3 = size1 + size2;
    int arr3[size3];
    
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while (i < size1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    
    while (j < size2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[4] = {1, 2, 3, 3};
    int arr2[6] = {3, 4, 5, 5, 7, 9};
    merge(arr1, arr2, 4, 6);
    return 0;
}
