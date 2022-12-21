#include <iostream>
using namespace std;


int maxInt(int arr[]);
int main(){
	//initializing array
	int arr[10];
	//getting element from user
	cout<<"enter 10 number"<<endl;
	for (int i = 0;i<10;i++){
	//appending values into the arr
	cin>>arr[i];		
	}
	
//	calling the maxInt function
	int max = maxInt(arr);
	cout<<"max integer is: "<<max<<endl;
	}
	
//calculting the maximum of arr
int maxInt(int arr[]){
	int max = arr[0];
	for (int i = 0;i < 10;i++){
		if (max<arr[i]){
			max = arr[i];
		}
	}
	//returning the maximum value
	return max;
}
