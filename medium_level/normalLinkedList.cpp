#include<iostream>

using namespace std;

struct Node{
    struct Node * next;
    int a;
    
};

int main(){

    Node nod;
    nod.a=3;
    new Node;

    Node* pointer= new Node();
    pointer->a=12;
}