#include <iostream>
using namespace std;


class queue{
    public:
        int front;
        int back;
        int *arr;
        int size;

        queue(int size){
            this->size = size;
            arr = new int[size];
            back = -1;
            front = -1;
        }


        void front(int val){

        }


};


int main(){
    
    return 0;

}
