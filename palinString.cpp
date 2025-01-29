#include <iostream>
using namespace std;

bool isPal(string str){
    int s = 0;
    int l = str.size() - 1;

    while(s < l){
        if(str[s] != str[l]){
            return false;
        }
        s++;
        l--;
    }

    return true;

}

int main(){
    string str;

    cin >> str;
    
    bool pal = isPal(str);

    if(pal) cout << "Yes";
    else cout << "No";

    return 0;
    
}
