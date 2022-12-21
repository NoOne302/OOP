//header files
#include<iostream>
using namespace std;

// main function
int main() {

	//question 1
	int num; //initializing the num variable
	cout<< "enter a number: "<<endl;
	cin>>num;//getting the value form the user
	//making a program for the calculating the table of the given number
	for (int i = 1 ;i<=100;i++) {
		if (i % 10 == 0 ){
			cout << i * num << endl;
		}
		else {
			cout<<i*num << " ";
		}
		}

return 0;
}
