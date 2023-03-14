#include<iostream>

using namespace std;

int main(){
    //change all the vowels to numbers that are simil to the one vowels
    char string_of_characters[100];
    int vowals_simil[4]={4,3,1,0};
    std::cin>>string_of_characters;

    for (char* i = string_of_characters; *i!='\0' ; i++)
    {
        if(*i == 'a' || *i == 'A'){
            *i='4';
        }if(*i == 'e' || *i == 'E'){
            *i='3';
        }if(*i == 'i' || *i == 'I'){
            *i = '1';
        }if(*i == 'o' || *i == 'O'){
            *i = '0';
        }
    }
    for (char* i = string_of_characters; *i!='\0' ; i++){
        std::cout<<*i;
    }
    
}