#include <iostream>
using namespace std;

int main(){
	int a,b;//initializing two variables
	int* ptrA;//initializing two pointers for two varibles
	int* ptrB;
	//getting values of a and b from user
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	//declaring the values to the respective pointers
	ptrA = &a;
	ptrB = &b;
	//couting the values of a and b by using pointers
	cout<<"the values of a and b is : "<<*ptrA<<" , "<<*ptrB;	
}
