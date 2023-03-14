#include<iostream>
#include<vector>
using namespace std;

class Solution{

    public: 
        int position(vector<int> &solk, int targetj){
            //buscar el lugar donde podria el numero que quieres buscar en la lista si esta ordenada
            //lo que haria es verificar toda la linea si existe el numero si no lanzar un else que lo ubique con el numero mayor entonces
            int jj ;
            if(jj==true){
                for(int i = 0 ; i < solk.size() ; i++){
                    if(targetj == solk[i]){
                        jj==true;
                        return i;
                   }else{
                     jj=false;
                   }
                }
            }else{
                for(int i = 0 ; i < solk.size();i++){
                    if(solk[i]<targetj){
                        return i+1;
                    }
                }
            }
            return 0;
        }
};

int main(){
    Solution sol;
    vector <int> arry={1,2,3,4,5};
    sol.position(arry,3);
}