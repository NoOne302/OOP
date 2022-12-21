//header files
#include<iostream>
using namespace std;

// main function
int main() {


	//question 5
	//initializing the variables
	float salary;
	float netSalary;
	//getting salary from the user
	cout<<"Enter your salary: "<<endl;
	cin>>salary;
	//deducting according to the salary
	if (salary >= 20000) {
		netSalary = salary*0.93;
	}
	else if (salary >=10000 && salary <20000){
		netSalary = salary - 1000;
	}
	else {
		netSalary = salary;
	};
	//printing out the new salary
	cout<<"Your new salary after deduction is: "<<netSalary<<endl;

  return 0;
}
