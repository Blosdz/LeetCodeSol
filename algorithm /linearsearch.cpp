#include<iostream>

using namespace std ; 

//devolver el elemento buscado en el array 

int linear_search(int value,int size, int* index_array){
    for (int *i = index_array; i < index_array+(size-1); i++)
    {
        if(value==*i){
            return *i;
        }
    }
    return 0;

}

int main(){
    int array_of_elements[]={10,2,3,4,5,6,11,23,99};
    int size=sizeof(array_of_elements)/sizeof(array_of_elements[0]);
    cout<<linear_search(11,size,array_of_elements);
}