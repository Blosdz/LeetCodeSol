#include<iostream>
#include<vector>

using namespace std;
 
class Solution {
public:
	bool canVisitAllRooms(vector<vector<int>>& rooms){
		int weVisitedAll=0;
		int key=0;
		int nextdoor=0;
		for(int i=0;i<rooms.size();i++){	
			nextdoor++;
	                weVisitedAll++;
			for(int j=0;j<rooms[i].size();j++){
				if(rooms[i][j]==nextdoor && nextdoor<=(rooms.size())+1){
					cout<<"we enter door: "<<i;
					key=rooms[i][j];
				}
				else{
					cout<<"we can not enter this room: "<<i<< " "<<j;
				}
				cout<<endl;
			}
			cout<<endl;
		}
		cout<<"rooms visited: "<<weVisitedAll<<endl;
		cout<<rooms.size()<<endl;
		if(weVisitedAll== rooms.size()){
			return true;
		}else{
			return false;
		}
	}

	bool visitTwo(vector<vector<int>>&room){
		int keyk=0;
		int doornext=1;
		int check_movement=0;
		for(int i = 0; i < room.size(); i++){
			cout<<"room "<<i<<endl;
			for(int j = 0; j < room[i].size(); j++){
				keyk=room[i][j];		
				if(keyk==doornext){
					cout<<"key is "<<keyk<<endl;
					check_movement++;
					break;	
				}
			}
			if(doornext<=room.size()){
				doornext++;
			}else{
				doornext=0;
			}
		}
		if(check_movement==room.size()){
			return true;
		}
		else{
			return false;
		}
	}
};
int main(){
	Solution sol;
	vector<vector<int>>room={{1,2},
				{2,1},
				{1}};
//	cout<<sol.canVisitAllRooms(room);
//	cout<<sol.visitTwo(room);
	vector<vector<int>> checkNull={{NULL},{1,2}};
	cout<<checkNull[0][0]<<endl;
}
