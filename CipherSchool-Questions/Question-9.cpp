#include <iostream>
using namespace std;

class DirectAddressTable{
    public:
        int *arr;
        int size;

        DirectAddressTable(int size){
            this->size = size;
            arr = new int(size);

            for(int i = 0; i < size; i++){
                arr[i] = -1;
            }
        }

        void Insert(int key, int value){
            arr[key] = value;
        }

        int Search(int key){
            int ans = 0;
            if(key >= 0 && key < size){
                ans = arr[key];
            }else{
                cout << "Enter a valid Key!" << endl;
                return -2;
            }

            if(ans != -1){
                return ans;
            }

            return -1;
        }

        void Delete(int key){
            if(key >= 0 && key < size){
                arr[key] = -1;
            }

            cout << "Deleted" << endl;
        }
};



int main(){
    int size, queries;

    cin >> size;

    DirectAddressTable table(size);
    

    cin >> queries;

    while(queries --){
        string qStr = "";
        int key = 0, value = 0;

        cin >> qStr;

        if(qStr == "INSERT"){
            cin >> key >> value;
            table.Insert(key, value);
        }else if(qStr == "SEARCH"){
            cin >> key;
            int ans = table.Search(key);

            if(ans == -1) cout << "Not Found" << endl;
            else if(ans == -2) cout << "Not valid Key" << endl;
            else cout << ans << endl;
        }else if(qStr == "DELETE"){
            cin >> key;
            table.Delete(key);
        }else{
            cout << "Querie is not valid!" << endl;
        }
    }

    return 0;

}
