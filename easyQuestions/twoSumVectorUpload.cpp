#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> holdSolution(2,NULL);
            for(int i=0;i< nums.size();i++){
                for(int j=0;j<nums.size();j++){
                    if((target==(nums[i]+nums[j]))&& i!=j){
                            holdSolution[0]=i;
                            holdSolution[1]=j;
                            cout<<i<<" "<<j<<endl;
                            break;
                        }
                    }
    
                }
            return holdSolution;
        }
};

int main(){
    vector<int>nums={1,3,4,5,2};
    Solution obj;
    obj.twoSum(nums,4);
}
