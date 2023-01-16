#include<iostream>

using namespace std;

class Solution{
    public: 
        bool isPalindrome(int x){
            int remainder;
            int holdx=x;
            int reversed_number=0;
            while(x != 0) {
                if(x<0){
                    break;
                }
                remainder = x % 10;
                reversed_number = reversed_number * 10 + remainder;
                x /= 10;
                
            }
            cout<<reversed_number<<endl;
            if(reversed_number==holdx){
                return true;
            }
            else{return false;}
        }
};

int main (){
    Solution sol;
    cout<<sol.isPalindrome(-3663);
}