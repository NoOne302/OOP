#include <iostream>
using namespace std;

void calcSum(int *arr1, int *arr2, int n);

int main(){
	int n = 5;
	int arr1[n] = {21, 34, 24, 23, 5234};
	int arr2[n] = {32, 43, 14, 4, 5};
	calcSum(arr1, arr2, n);
	return 0;
}
void calcSum(int *arr1, int *arr2, int n){
	int sumArr[n];
	int *sum = sumArr;
	
	for(int i = 0; i<n;i++){
		*sum = *arr1 + *arr2;
		sum++;
		arr1++;
		arr2++;
	}	
	for(int i = 0; i<n;i++){
		cout<<sumArr[i]<<" ";	
	}
	
}
