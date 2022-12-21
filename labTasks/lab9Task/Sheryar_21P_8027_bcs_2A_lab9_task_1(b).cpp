#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Data{
	//declaring the members
 	string serialNumber;
	public:
	//declaring the static data members
	static int counter;
	Data();
	string display() const; //const member function
};

//initialize the static data member
int Data::counter = 0;

//constructor function;
Data::Data(){
	//incrementing counter
	counter++;
	//type casting
	//changing the int counter into string counter
	stringstream count;
	count << counter;	
	string number;
	count >> number;
	this->serialNumber ="2022FAST0" + number + "OOP";	 
	
}
//member function
string Data::display() const{  //const member function
	return serialNumber;
}

int main(){
//	Data  const d1, const d2,const d3, const d4,const d5; //const objects
	const Data   d1, d2, d3, d4, d5; //const objects
	cout<<"I'm object with Serial Number:"<<d1.display()<<endl;
	cout<<"I'm object with Serial Number:"<<d3.display()<<endl;
	cout<<"I'm object with Serial Number:"<<d4.display()<<endl;
	cout<<"I'm object with Serial Number:"<<d5.display()<<endl;
	
}

