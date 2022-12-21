#include<iostream>
using namespace std;

int main() {

	//question 1
	int num;
	cout<< "enter a number: "<<endl;
	cin>>num;
	for (int i = 1 ;i<=100;i++) {
		if (i % 10 == 0 ){
			cout << i * num << endl;
		}
		else {
			cout<<i*num << " ";
		}
		}
	/*
	}
	//question number 2;
	float num1,num2;
	char optr;
	char check = 'y';
	while (check == 'y'){
	cout<<"Enter furst number, operator, second number: ";
	cin>>num1>>optr>>num2;
	float result;
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
	cout<<" Do you want todo another calculation (y/n): "<<endl;
	cin>>check;
	}



	//question number 3;
	for (int i = 5;i>=1;i--){
		for(int j = i;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}

	//question number 4;
	int x = 10;
	int y = 15;
	int z = 20;
	bool result1 = !(x > 10);
	bool result2 = x <= 5 || y < 15;
	bool result3 = (x != 5) && (y != z);
	bool result4 = x >= z || (x + y >= z);
	bool result5 = (x <= y - 2) && (y >= z) || (z - 2 != 20);
	cout<<" the result of the expression '!(x > 10)' is: "<<result1<<endl;
	cout<<" the result of the expression 'x <= 5 || y < 15' is: "<< result2 << endl;
	cout<<" the result of the expression '(x != 5) && (y != z)' is: "<< result3 <<endl;
	cout<<" the result of the expression 'x >= z || (x + y >= z)' is: "<< result4 << endl;
	cout<<" the result of the expression '(x <= y - 2) && (y >= z) || (z - 2 != 20)' is: "<< result5 <<endl;


	//question 5
	float salary;
	float netSalary;
	cout<<"Enter your salary: "<<endl;
	cin>>salary;
	if (salary >= 20000) {
		netSalary = salary*0.93;
	}
	else if (salary >=10000 && salary <20000){
		netSalary = salary - 1000;
	}
	else {
		netSalary = salary;
	};
	cout<<"Your new salary after deduction is: "<<netSalary<<endl;
	*/

}
