#include<iostream>
#include<vector> 
using namespace std;

/*mandar un numero y buscar en el array dado dos elementos que de su suma te de ese numero */

/*pasos para resolver */
int returnSum(int *array_function,int get_this_number){
    int *type=array_function+4;
    int *master_search=array_function;
    int *first__element=array_function; //valor num 1 
    for(; master_search<type; master_search++){ 
        for(;first__element<type;first__element++){
            if(get_this_number==(*master_search+*first__element)){
                cout<<endl;
                cout<<" "<<*master_search<<" "<<*first__element;
            }else{cout<<"not found";}
        }
        first__element=array_function;

    }
    return 0;
}

int main(){
    int size_array=0;
    // cin>>size_array;

    //array
    int array[4]={1,5,6,2};
    // for(int *pointer_x=array; pointer_x<array+size_array; pointer_x++){ 
    //     cin>>*pointer_x;
    // }
    for(int i:array){
        cout<<i<<" ";
    }
    returnSum(array,8); 
    
    
}