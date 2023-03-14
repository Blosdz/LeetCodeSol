#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

class Solution{
    public:
        vector<int> plusOne(vector<int>&values){

            int long tens = pow(10,(values.size() - 1));
            int long numis = 0;
            
            //divides the size of the array in parts to sum in a normal number
            for(auto i : values){
                numis += i*tens;
                tens = tens /10;               
            }
            //set size plus one 
            numis+=1; 
			
			if(numis>9 && numis < 19){
				vector<int> valuesPlus(2);
				for (int i = 0; i < 2; i++)
				{
					/* code */
					valuesPlus[i] = int(numis / 10);
					numis =  numis % 10;
				}
				for(int i = 0 ; i < 2 ; i++){
					cout<<valuesPlus[i]<<" ";
				}			
				return valuesPlus;

			}

            //values howlong 
            // if((values.size()) == 1){
            //     int howlong = 2; 
            //     vector<int> valuesPlus (2);
            //     tens = 10;
            //     for(int i = 0 ; i < howlong ; i++){
            //         valuesPlus[i] = numis / tens;    
            //         numis= numis % tens;
            //         tens = tens /10;
            //     }
			// 	for(int i=0 ; i  < values.size() ; i++){
			// 		cout<<valuesPlus[i]<<" ";
			// 	}
            //     return valuesPlus;                    
            // }


            else{
                int howlong= values.size();
                vector<int> valuesPlus(howlong); //how many spaces of the array does it have 
                tens = pow(10,(values.size()-1));

                for(int i = 0 ; i < howlong ; i++){
                    valuesPlus[i] = numis / tens;    
                    numis= numis % tens;
                    tens = tens /10;
                }
				//print function 
				for(int i=0 ; i  < values.size() ; i++){
					cout<<valuesPlus[i]<<" ";
				}
                cout<<endl;
                return valuesPlus;
            }

        }

};

int main(){
	vector<int> sum_this_arr={9};	

	Solution sol;

	sol.plusOne(sum_this_arr);

}

