//header files
#include<iostream>
using namespace std;

// main function
int main() {

	//question number 2;
	float num1,num2;//initializing the varibles
	char optr;
	//making a condtion to run a while loop untill the user enter "n" to exit the loop
	char check = 'y';
	//executing the while loop to perform the mathematical operations
	while (check == 'y'){
	cout<<"Enter furst number, operator, second number: ";
	//getting two numbers and the operator form the user
	cin>>num1>>optr>>num2;
	float result;
	//checking the operator and perfoming the task accordingly
	switch(optr) {
		case '+':
			result = num1 + num2;
			cout<<"the sum of "<<num1<<" and "<<num2<<" is "<<result<<endl;
			break;
		case '-':
			result = num1 - num2;
			cout<<"the subtraction of "<<num1<<" and "<<num2<<" is "<<result<<endl;
			break;
		case '*':
			result = num1 * num2;
			cout<<"the multiplication of "<<num1<<" and "<<num2<<" is "<<result<<endl;
			break;
		case '/':
			result = num1 / num2;
			cout<<"the division of "<<num1<<" and "<<num2<<" is "<<result<<endl;
			break;
	}
	//asking user if he wanna calculate another calculation yes or not
	cout<<" Do you want todo another calculation (y/n): "<<endl;
	cin>>check;
	}

return 0;
}
