#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

/*escoger un index random en ese index de la lista de rocas se realiza pilarocas[i]/2  y se aloja en su posicion origina k veces que se envie
  y se suma el array se devuelve el valor de suma */
class Solution {
    public:
        int minStoneSum(vector<int>& piles, int k) {
            
            int sumn_array=0;
            float floor=0;
            int index_changeable=2;
            while(k!=0){
                for(int i =0;i<piles.size();i++){
                    if(index_changeable==i){
                        cout<<"----"<<float(piles[i]/2)<<"---";
                        floor=roundf(float(piles[i]/2));
                        piles[i]=floor;
                    }
                    cout<<piles[i]<<" ";
                }
                k-=1;
                cout<<endl;
            }
            cout<<endl;
            for(int i : piles){
                sumn_array+=i;
            }
            return (sumn_array);
        }
};

int main(){
    Solution obj_rocks;
    vector<int> piles={1,2,3,4};
    cout<<obj_rocks.minStoneSum(piles, 2);
}