#include <iostream>
using namespace std;

//defining a funtion to calculate factorial
int fact(int num){
	//checking if the number is 1 or not
	if (num == 0){
		return 1;
	}
	else {
		//defining a variable sum
		int sum = 1;
		//running a loop to calculate factorial
		for(int i = 1;i<=num;i++){
			sum = sum*i;
		}
		//returning the factorial
		return sum;
	}

}
int main(){
	int num;
	cout<<"enter the numbet to calculate factorial: ";
	cin>>num;
	int factorial = fact(num);
	cout<<"The factorial of "<<num <<" is: "<<factorial;
}
