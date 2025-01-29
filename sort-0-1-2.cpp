#include <iostream>
#include <vector>
using namespace std;

void sort_0_1_2(vector<int> &arr){
    
    int i = 0;
    int j = 0;
    int k = arr.size() - 1;

    while(j <= k){
        if(arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }else if(arr[j] == 1){
            j++;
        }else{
            swap(arr[j], arr[k]);
            k --;
        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){

    vector<int> arr = {0, 1, 2, 0, 1, 2};
        
    sort_0_1_2(arr);

    return 0;

    
}
