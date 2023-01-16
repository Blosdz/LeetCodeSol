#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Solution{
    public:
        string longestCommonPrefix(vector<string>& strs){
            // string s= strs[0];// primera palabra
            int check_equals;
            for(int i =0 ; i < strs.size(); i++){
                for(int j =0 ; j < strs[i].size();j++){
                    cout<<strs[i][j];
                }
                cout<<"--";
            }
            
            return "string";
        }
};

int main(){
    //declarar strings
    vector<string> strs={"flowr","flow","flight"};
    Solution sol;
    sol.longestCommonPrefix(strs);   


}