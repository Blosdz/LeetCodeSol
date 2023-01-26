#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution{
    public:
        bool isValid(string &s){
            vector<string> vector_string=
            { "{}", "()", "[]" };
            int pass=0;
            for(int i =0 ; i< vector_string.size(); i++){
                for(int j=0 ; j< vector_string[i].size(); j++){
                    if(s[j]==vector_string[i][j]){
                        pass=pass+1;
                    }else{
                        break;
                    }
                }

            }
            if(pass==2){return 1;}
            else{return 0;}

        }

};
// solution with STACKS CHECK OUT 

// class Solution {
// public:
//     bool isValid(string expression)
//     {
//         stack<char> s;
//         for (int i = 0; i < expression.length(); i++)
//         {
//             char ch = expression[i];
//             if (ch == '{' || ch == '(' || ch == '[')
//             {
//                 s.push(ch);
//             }
//             else
//             {
//                 if (s.empty() == true)
//                 {
//                     return false;
//                 }
//                 char top = s.top();
//                 if ((top == '{' && ch == '}') || (top == '(' && ch == ')') || (top == '[' && ch == ']'))
//                 {
//                     s.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//         }
//         if (s.empty() == true)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

int main(){
    Solution sol;
    string s="()";
    cout<<sol.isValid(s);
}