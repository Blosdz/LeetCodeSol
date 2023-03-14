#include<iostream>
#include<string>

using namespace std;

class Solution{
    public:
        int lengthOfLastWord(string s){
            int count=0;
            int j = s.size() -1;
            string notFoundable={" "};
            while(s[j]==notFoundable[0]){
              j--;  
            }
            while(j>=0){
                if(s[j]!=notFoundable[0]){
                    count=count+1;
                    cout<<count<<" ";
                }else{
                    break;
                }
                j--;
            } 
            return count;
        }
};

int main(){
    Solution sol;
    cout<<sol.lengthOfLastWord("fly me to the moon");
}