//important libraries are import here
#include <iostream>
#include <math.h>
using namespace std;

//all code will run here
int main(){
	int num,mod,mod2,mod3,div,div1;
	cout<<"enter a five digit number : ";
	cin>>num;//getting number from user
	mod = num % 10;	//finding the last digit of number
	div = num / 10;//reducing the number into 4 digits
	mod2 = div % 10;//findding the last digit
	div1 = div / 10;//again reducint the number into 3 digits
	mod3 = div1 % 10;//find the last digit of the 3 digit number
	cout<<mod<<mod2<<mod3;//print all the digit that we find earlier


    return 0;
}
