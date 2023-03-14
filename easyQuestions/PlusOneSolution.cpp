#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        vector<int> plusOne(vector<int>& n){
            if(n.size() == 1){
                int get_number = n[0]+1;
                if(get_number>9){
                    n[0]++;
                    n.push_back(1);
                } else{
                    n[0]++;
                }
            }else{
                for (int i = n.size()-1 ; i > 0; i--)
                {
                    if(n.size()-1 ==i){
                        n[i]++;
                    }
                } 
                return n;

            }
            return n;
        }
};

int main(){
    Solution sol;
    vector<int>n={9,3};
    sol.plusOne(n);
}