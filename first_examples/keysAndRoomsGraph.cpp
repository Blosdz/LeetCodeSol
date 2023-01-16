#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;

int main(){
	vector<bool> check(4,false);
	//genera array de 4 con el valor 0 de false 
	int room[3]={1,2,3};
	for(int i =0 ;i<3;i++){
		cout<<&room[i]<<" " ;
	}
	cout<<endl;

	for(int &j : room){
		if(j==2){
			room[1]=8;
		}
		cout<<j<<endl;
	}
	for(int &j : room){
		if(j==2){
			room[1]=8;
		}
		cout<<&j<<endl;
	}
	for(int i  : check){
		cout<<i<<endl;
	}

	cout<<room[1]<<endl;

	//queque	
	//objeto de contenedor este contenedor es una copia del argumento ctnr pasado por el constructor
	//si acaso de otra manera es un contenedor vacio 
	queue<int>g;
	//

	g.push(20);	
	g.push(2);
	g.push(12);
	cout<<endl;
//	cout<<g.front()<<endl;
	deque<int> dequee(3,10);
	deque<int>::iterator it; //iterator operator in c++ points to memory address of stl containers 

	for(it=dequee.begin(); it!=dequee.end();++it){
		cout<<"\t"<<*it;
	}	
	cout<<endl;
	dequee.push_front(8);
	dequee.push_back(7);
	for(auto&i:dequee){
		cout<<i<<endl;
	}
}

