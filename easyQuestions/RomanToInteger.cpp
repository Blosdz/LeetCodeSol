#include<iostream>
using namespace std;

struct hashTable{
    char val;
    int num;
    int* next_node;

};


class Solution{
    public:
        int romanToInt(string s){

            for(int i=0 ; i< s.size();i++)
            {

                cout<<s[i]<<endl;
            }
            return 0;
        }
};

int main(){
    Solution sol;
    sol.romanToInt("VXII");
}