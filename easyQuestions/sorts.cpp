#include<iostream>

using namespace std;

int firstSort(int arrayFunt[8]){
    for(int i=0; i<8;i++){
        for(int j = i+1 ; j< 8 ;j++){
            if(arrayFunt[j]<arrayFunt[i]){
                int temp=arrayFunt[j];
                arrayFunt[j]=arrayFunt[i];
                arrayFunt[i]=temp;
            }
        }
    }
    return 0;
}

int printArr(int arrayfunt[8]){
    int i =0;
    while(i<=8){
        cout<<arrayfunt[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}

int main(){
    int kindaofarray[8]={9,4,5,6,1,2,3,0};
    printArr(kindaofarray);
    firstSort(kindaofarray);
    printArr(kindaofarray);

/*  swap works in c++ no worries 
    int a=10;
    int b=20;
    cout<<a<<endl<<b<<endl<<"swap";    
    swap(a,b);
    cout<<a<<endl<<b<<endl;
*/
}
