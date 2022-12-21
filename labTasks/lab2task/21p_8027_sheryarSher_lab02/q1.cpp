//important libraries are import here
#include <iostream>
using namespace std;

//all code will run here
int main(){

    int num1, num2,sum,sub,mult,mod;//initilizing the variables
	float div;
	cout <<"enter first number: "<<endl;
	cin>>num1;//getting numbers from user
	cout <<"enter second number: "<<endl;
	cin>>num2;//getting the second number from the user
	//performing mathmatical operations on both number
	sum = num1+num2;
	sub = num1-num2;
	mult = num1 * num2;
	mod = num1 % num2;
	div = num1 / num2;
	//printing the results
	cout <<" the sum of " <<num1<<" and " <<num2<< " is " <<sum<<endl;
	cout <<" the difference of " <<num1<<" and " <<num2<< " is " <<sub<<endl;
	cout <<" the multiplication of " <<num1<<" and " <<num2<< " is " <<mult<<endl;
	cout <<" the division of " <<num1<<" and " <<num2<< " is " <<div<<endl;
	cout <<" the remainder of " <<num1<<" and " <<num2<< " is " <<mod<<endl;


    return 0;
}
