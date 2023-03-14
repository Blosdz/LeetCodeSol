#include<iostream>

using namespace std;

int main(){
    char this_value[999]="Han notado un detalle? Clyde teme que Bebe se entere de la IA porque dice que ella lo querrá matar, Stan  q ";
    char look_for[5]="Stan";
    char *pointer_2=look_for;
    char *pointer=this_value;
    while(*pointer!='\0'){
        if(*pointer_2==*pointer){
            char **dummypointer=&pointer;
            int count=0 ;
            for(dummypointer=&pointer_2; **dummypointer!='\0'; dummypointer++){
                if(*pointer==**dummypointer){
                    count++;
                    pointer++;
                }
            } 
            if(count==3){
                for(pointer_2=look_for; *pointer_2!='\0'; pointer_2++){
                    *pointer = 'p';
                    pointer++;
                }
            }
        }
        cout<<*pointer;
        pointer++;
    }
}