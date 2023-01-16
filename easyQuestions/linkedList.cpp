#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *link; //puntero a nodo  
};

typedef Node* nodePtr; 

void push(nodePtr* head, int dataf){
    //push forward 
    nodePtr created_node=new Node;
    created_node->data=dataf;
    created_node->link=*head;
    *head=created_node;
}

void create(nodePtr* head,int dataf){
    nodePtr created_node=new Node;
    created_node->data=dataf;
    created_node->link=nullptr;
    //change head to new node
    *head=created_node;
}

void deleteNode(nodePtr head, int dataf){ 
    nodePtr nexthead1=new Node; //puntero 1 un valor anterior al que se elimina 
    nodePtr nexthead2=new Node; //puntero 2 que cuando se elimina un nodo almacena el valor siguiente para que no se pierda la conexion 
    nexthead1=head; //empezamos igual en la lista de nodos 
    nexthead2=head->link; //valor siguiente
    int countpass1=0;
    while(head!=nullptr){

    //2 casos  
        // caso 1  apunta a nada se elimino el ultimo nodo 
        if (head->data == dataf && head->link==nullptr) //verificar si el dato en head es igual al que se require
        {
            delete head; //eliminar cabeza 
            head=nexthead1;
            nexthead1->link=nullptr; 
            break;
        }
        //caso 2 se elimina un nodo de en medio primer nodo 
        if(head->data == dataf ){
            
            delete head;
            head=nexthead1;
            nexthead1->link=nexthead2;
            break;
        }
        //w8 one passing 
        if(countpass1>0){
            nexthead1=nexthead1->link;
        }
        head=head->link; 
        nexthead2=nexthead2->link;
        countpass1++;
    }
}

void printNode(nodePtr head){
    while(head!=nullptr){
        cout<<head->data<<" --> ";
        head=head->link;
    }
    cout<<endl;
}

int main(){
    nodePtr _node_head;    
    create(&_node_head,20);
    push(&_node_head,13);
    push(&_node_head,33);
    push(&_node_head,8);
    push(&_node_head,5);
    printNode(_node_head);
    deleteNode(_node_head,20);
    deleteNode(_node_head,8);
    printNode(_node_head);
}
