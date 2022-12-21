#include <iostream>
using namespace std;

int main (){
	int var;
	cout<<"Enter the variable: ";
	cin>>var;
	int *ptrVar = &var;
	cout<<"the variable is: " <<*ptrVar<<" and the memory address of varible is: "<<ptrVar;
}
