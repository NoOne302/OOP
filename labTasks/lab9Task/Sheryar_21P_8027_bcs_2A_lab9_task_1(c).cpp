#include <iostream>
using namespace std;

class Number{
	private:
	int num;
	
	public:
		//construtor( no args)
		Number() : num(0) {};
		
		//connsturtor (one arg)
		Number(int num) : num(num) {};
		
		//get number from user
		void getNum(){
			cout<<"Enter number: ";
			cin >> num;
		}
		
		void showNum() const {  //const function 
			cout << "number: " << this->num <<endl;
		}
		
		Number  addNum(const Number& ) const; // const funtion with const fucntion arugument
};

Number Number::addNum(const Number &n2) const
{
	Number temp; //temporay variable
	temp.num = this->num + n2.num; //add the numbers
	return temp;  // returning the temp
}

int main(){
	Number n1 , n2, result; //define three numbers
	
	n1.getNum(); // get num from user
	n2.getNum(); //get num from user
	result = n1.addNum(n2);  //adding two objects
	result.showNum(); // showing result
	
	
	
	
}
