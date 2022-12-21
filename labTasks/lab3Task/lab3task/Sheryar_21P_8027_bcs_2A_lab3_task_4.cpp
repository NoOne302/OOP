#include <iostream>
using namespace std;

int main() {
	//question number 4;
	int x = 10;
	int y = 15;
	int z = 20;
	//performing simple mathematical equation and return answers in bool value (0/1)
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
    return 0;
}


