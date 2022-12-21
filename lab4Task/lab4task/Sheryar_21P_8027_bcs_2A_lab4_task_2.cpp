#include <iostream>
using namespace std;

//declaring the names of the function the we will create later
int passByValue(int x);
int passByReference(int &y);
int main(){
//  initialinzing two variables
	int x,y;
	cout<<"enter first num: "<<endl;
	cin>>x;// getting date from user
	cout<<"enter second num: "<<endl;
	cin>>y;//geting number two from the user
	int num1 = passByValue(x);//giving values to funciton
	int num2 = passByReference(y);
	cout<<"Pass by Value Result: "<<num1<<endl;//printint the values
    cout<<"Pass by Reference Result: "<<num2<<endl;
	cout<<"num1: "<<x<<endl;
	cout<<"num2: "<<y<<endl;
}//making fuction for pass by value
int passByValue(int x){
	x = x*x*x;//calculating the value of x
	return x;//returning the value of
}
//making function for pass by reference
int passByReference(int &y){
	y = y*y*y;//calculating
	return y;//returning the value of y
}
