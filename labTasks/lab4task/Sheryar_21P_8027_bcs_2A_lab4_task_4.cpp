#include <iostream>
using namespace std;

int main(){
	//initializing the matrices
	int arr1[2][2] = {{1,2},{3,4}};
	int arr2[2][2] = {{4,6}, {8,7}};
	int result[2][2];

	for (int i=0;i<2;i++){
		for (int j = 0;j<2;j++){
			int sum;
			sum = arr1[i][j]+arr2[i][j];
			result[i][j] = sum;
		}
	}
	//  	First Array
		cout<<"arr1"<<endl;
	for(int i=0;i<2;i++){
		cout<<"[ ";
		for (int j = 0;j<2;j++){
			cout<<arr1[i][j]<< " ";
		}
		cout<<"]"<<endl;
	}
		//  Second Array
		cout<<"arr2: "<<endl;
		for(int i=0;i<2;i++){
				cout<<"[ ";
		for (int j = 0;j<2;j++){
			cout<<arr1[i][j]<< " ";
		}
		cout<<"]"<<endl;
	}
//		`Result
		cout<<"Result"<<endl;
		for(int i=0;i<2;i++){
		cout<<"[ ";
		for (int j = 0;j<2;j++){
			cout<<arr1[i][j]<< "  ";
		}
		cout<<"]"<<endl;
	}
}
