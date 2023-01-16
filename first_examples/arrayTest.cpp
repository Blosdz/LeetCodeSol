#include<iostream>
#include<vector>
using namespace std;

int printArr(int arr[]){

	cout<<arr[1];
	return 0;
}

vector<int> runningSum(vector<int>&sum){
	int tamn=sum.size();
	int y=0;
	vector<int> holdSum(10);
	holdSum[0]=sum[0];
	cout<<holdSum[0];
	for (int i=1; i<tamn; i++) {		
		holdSum[i]=sum[i]+holdSum[i-1];
	}
	
	for (int i=0; i<tamn; i++) {	
		cout<<" "<<holdSum[i]<<" ";
	}
	return holdSum;
}

int main (){
	int array[3]={1,2,3};
//	printArr(array);
	vector<int> elementList	={1,2,3,4};
	vector<int> elementsecond(5,12);
/*	for (const int &i : elementsecond) {
		cout<<i<<" ";	
	}*/

/*	for (int ii : array) {	
		cout<<ii<<" ";	
	}*/
	cout<<endl;
	runningSum(elementList);
	return 0;
}

