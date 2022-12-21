#include <iostream>
using namespace std;
int main(){
	int x,y; // declaring two varibles
	cin >>x; // getting the value of both varibles
	cin >>y;
	cout <<"the value of x is " <<x<<endl;// printing the values of the variables
	cout <<"the value of y is" <<y<<endl;
	x=x+y;// performing mathematical operation
	y=x-y;
	x=x-y;
	cout << "AFTER THE SWAP THE VALUE OF VARIABLE ARE"<< endl;

	cout <<"the value of x is " <<x<<endl;
	cout <<"the value of y is" <<y<<endl;
}



