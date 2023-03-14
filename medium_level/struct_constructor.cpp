#include<iostream>

using namespace std; 

struct Node{
    int vlue;

    Node(): vlue(4){} //constructor 

};

int main(){
    Node nod;
    
    cout<< nod.vlue<<endl;
}