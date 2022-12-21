#include <iostream>
using namespace std;


int main () {
	int value;
	cout<<"enter the number of data values: ";
	cin>>value;
	int data[value];
	
	for(int j,i= 0;i<value;i++,j++){
		cout<<"enter the value for #"<<j+1<<endl;
		cin>>data[i];
		
	}
	int max = data[value];
	int maxIndex;
	for(int i=0;i<value;i++){
		if(max<data[i]){
			max=data[i];
			maxIndex = i;
		}
	}
	int *ptrMax = &max;
	int maxInd = data[maxIndex];
	int *ptrIndMax = &data[maxIndex];
	cout<<"the maximum number is: "<<*ptrIndMax<<" and the address of maximum number is: "<<ptrMax<<endl;
	cout<<"the maximum number is: "<<*ptrIndMax<<" and the address of maximum number is: "<<ptrIndMax;
}
