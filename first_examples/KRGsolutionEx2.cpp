#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
	public:
		bool canVisitAllRooms(vector<vector<int>>&rooms){
			//crear vector para verificar si se recorre todos los cuartos
			vector<bool> visited(rooms.size(),false);
			//contenedor de indexado para el vector rooms
			queue<int> q; //contenedor de doble cola
			q.push(0); //se empieza por 0 
			while(!q.empty()){
				int size=q.size(); 
				for(int i=0; i < size ; i++){
					int room=q.front();
					q.pop();
					visited[room]=true;
					for(int ele:rooms[room]){
						if(!visited[ele]){
							q.push(ele);
						}
					}
				}
			}
			return count(visited.begin(),visited.end(),true)== rooms.size();

		}
};

int main(){
	Solution sol;
	vector<vector<int>> nxm={{1,2,3},{0,3,2},{}};
	sol.canVisitAllRooms(nxm);
}
