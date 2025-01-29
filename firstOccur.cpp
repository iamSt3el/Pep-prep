#include <iostream>
using namespace std;

void fun(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    while(start <= end){
        if(arr[end] == 0) end--;
        else if(arr[start] == 0){
            for(int i = start; i < end; i++){
                swap(arr[i], arr[i+1]);
            }
            if(arr[start] != 0) {start ++;}
            end --;
        }
        else{
            start ++;
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    //1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
    int size = 7;
    int arr[7] = {1, 0, 0, 3, 4,5,1};
        
    fun(arr, size, 3);

    return 0;

}
