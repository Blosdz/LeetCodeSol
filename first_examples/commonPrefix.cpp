#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*?   look for the most repeated continous letters in each string  ? */
class Solution{
    public:
        // string longestCommonPrefix(vector<string>& strs){ //pass by reference 
        //     string nextArray=strs[1];
        //     string equals;
        //     cout<<nextArray.size();
            
        //     for (int i = 0; i < 1; i++)
        //     {
        //         for(int j = 0; j < nextArray.size() ; j++ ){

        //         }
        //     }
        //     int i =0;
        //     while(nextArray[i]!='\0'){ 
        //         for(int j=0 ;j < strs[0].size(); j++){
        //             if(strs[0][j]==nextArray[i]){
        //                 equals[j]=nextArray[i];
        //                 cout<<equals[j]<<" ";
        //             }
        //         }
        //         i++;
        //     }

            
        //     cout<<endl;
        //     return "cad";
        // }
        string longestCommonPrefix(vector<string>& strs) {
            string s="";
            int i=0;
            for(auto it:strs[0]){
                for(auto it2:strs){
                    if(it2[i]!=it){
                        return s;
                    }
                }
                s=s+it;
                ++i;
            }
            for(auto sr:s){
                cout<<s[sr]<<" ";
            }
            return s;
            
        }

};
/* juntar primer array y comprar con segundo array almacenar las palabras en comun en 1 array siendo o^n iteraciones 
    comparar el array en comun con todas las otras cadenas y verificar si tienen ese mismo numero de comparaciones si los hay es seguro decir que se encontro 
    la comparacion correcta 
*/
int main (){
    Solution objectSOl;
    vector<string> strs= {"thiscad","anothercas","lookingth"};
    objectSOl.longestCommonPrefix(strs);
}