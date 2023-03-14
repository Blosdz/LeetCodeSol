#include<iostream>

using namespace std; 

int print_out(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 1;    
}

int sort(int arr[], int size){
    for(int *i = arr ; i< arr+(size); i++){
        for(int *jj = arr; jj<i; ++jj){
            if(*jj > *i){
                int data= *i;
                *i=*jj;
                *jj=data;
            }
        }
    }
    return 0;

}

int binarySearch(int arr[], float size){
    float midle= size / 2; 
    cout<<midle<<" ";
    return 0;
}

int main(){

    int arry_numbers[]={1,3,4,5,1,2,10,6,7,8};
    print_out(arry_numbers,10);
    sort(arry_numbers,10);
    print_out(arry_numbers,10);
    binarySearch(arry_numbers,9);
}
