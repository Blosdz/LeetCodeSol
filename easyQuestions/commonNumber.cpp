#include<iostream>
#include<vector>

using namespace std;

// class Solution
// {
//     public:
//         int removeDuplicates(vector<int>& nums){
//             int next=1;
//             int k=0;
//             for(int i =0 ; i< nums.size(); i++){
//                 if(next>nums.size()){
//                     next=1;
//                 }
//                 if(nums[i]==nums[next]){
//                     cout<<nums[next]<<endl; 
//                 }else{
//                     k++;
//                 }
//                 next++;
//             }
//             return k;
//             //solution idk 
//             // for (int i = 0; i < nums.size()-1;i++)
//             // {
//             //     /* code */
//             //     for(int j = i+1; j<nums.size();j++){
//             //         if(nums[i]==nums[j]){
//             //             nums.erase(nums.begin()+j);
//             //             j--;
//             //         }
//             //     }
//             // }
            
//         }     


// };

//current lvl 

int checkfordoubles(int nums[]){
    int backuplist[5];
    int ch3=1;
    for(int i = 0; i < 5; i++)
    {
        if(nums[i]!=nums[ch3]){
            backuplist[i]=nums[i];
        }else{
            backuplist[i]= 0;
        }
        ch3++;
        /* code */
    }
    for(int i =0 ; i<10; i++){
        cout<<backuplist[i]<<" ";
    }
    
    return  0;
}

int main(){
    // Solution sol;
    // int array_int_num[3]={1,2,3};
    // vector<int> array_num={1,0,0,2,3,4,4};
    // cout<<sol.removeDuplicates(array_num);
    int nums[5]={0,1,2,2,3};
    checkfordoubles(nums);
}