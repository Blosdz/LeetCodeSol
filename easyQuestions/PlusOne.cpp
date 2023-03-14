#include<iostream>
#include<vector>
#include<cmath>


using namespace std; 

class Solution{
    public:
        vector<int> Plusone(vector<int>&values){
            int long tens = pow(10,(values.size() - 1));
            int long numis = 0;
            
            //divides the size of the array in parts to sum in a normal number
            for(auto i : values){
                numis += i*tens;
                tens = tens /10;               
            }
            //set size plus one 
            numis+=1; 

            //values howlong  
            int howlong= values.size();
            vector<int> valuesPlus(howlong); //how many spaces of the array does it have 
            tens = pow(10,(values.size()-1));

            for(int i = 0 ; i < howlong ; i++){
                valuesPlus[i] = numis / tens;    
                numis= numis % tens;
                tens = tens /10;
            }

            for(int i = 0 ; i < valuesPlus.size() ; i++){
                cout<<valuesPlus[i]<<" ";
            }
            cout<<endl;
            return valuesPlus;
        }

};

int main(){
    vector<int>values={1,2,4,5};
    Solution sol;
    sol.Plusone(values);
}