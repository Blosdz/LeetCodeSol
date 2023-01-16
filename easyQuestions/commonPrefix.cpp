#include<iostream>

using namespace std;

class Solution{
    public:
        char getEquals(const char **arrayu, int array_size){
            int equals=0;  //verificar si hay palabras iguales 
            for(int i =0 ; i < array_size; i++){
                cout<<*arrayu<<" ";
                **arrayu++;
            }
            return 0;

        }
};

int main(){
    Solution sol;
    const char* this_arr[]={"here","home","him"};
    int size=sizeof(this_arr)/sizeof(this_arr[0]);
    cout<<endl;
    sol.getEquals(this_arr,size);
}