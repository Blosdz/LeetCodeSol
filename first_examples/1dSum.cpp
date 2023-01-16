#include<iostream>
using namespace std;

class Solution{
	public: 
		int runningSum(){
			return 0;
		}

};
void lessComplexity(int *arr,int lenghtofArray){
	cout<<*arr<<" ";
	for(int i =1 ;i < lenghtofArray ;i++){
	//	*arr=*(arr--)+*(arr);
//		cout<<*arr<<" ";
		*(arr+i) += *(arr - i);
		cout<<*arr<<" ";
	}		
}

int main(){
	/* summar array 1d por index valores example
	* [1,2,3,4]
	* output [1,1+2,1+2+3,1+2+3+4]
	1 3 5 7 9              	* */

	int array_int[5]={1,2,3,4,5};
	int al=sizeof(array_int)/sizeof(array_int[0]);
	//int arraySumas[al];
	//arraySumas[0]=array_int[0];
	//int y=0;
	//for(int i =1 ; i < al ; i++){
	//	y=i-1;
	//	arraySumas[i]=arraySumas[y]+array_int[i];
	//}
	/*
	for(int i =0 ; i < al ; i++){
		cout<<arraySumas[i]<<" ";
	}
	//big o(n) por los fors y la complejidad es mayor 
	int *arr=array_int;*/
	
//	lessComplexity(array_int, al);
	int y=0;

	for (int *i =array_int+1;i<array_int+al;i++){
		*i=array_int[y]+(*i);
		cout<<*i<<endl;
		y++;
	};
	
	
	return 0;
}
