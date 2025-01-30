#include <iostream>
#include <climits>
using namespace std;

int maxProfit(int size, int arr[]){
    if(size == 0) return 0;

    int Max = INT_MIN;

    for(int i = 1; i <= size; i++){
        Max = max(Max, arr[i - 1]+ maxProfit(size - i, arr));
    }

    return Max;
}

int main(){

    int arr[8] = {1, 5, 8, 9, 10, 17, 17, 20};

    int ans =  maxProfit(8, arr);

    cout << ans << endl;
    
    return 0;
}
