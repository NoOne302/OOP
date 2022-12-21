#include <iostream>
using namespace std;

//base class
class Employee{
	protected:
		string empName; //protected data members of the base class
		long empNumber;
		
	public:
		//member function of the class
		Employee(){
			this->empName = "noName";
			this->empNumber = 0;
		}
		Employee(string name, long num){
			this->empName = name;
			this->empNumber = num;
		}
		void print(){
			cout<<"Name of the employee: "<<this->empName<<endl;
			cout<<"Number of the employee: "<<this->empNumber<<endl;
		}
};

class Manager : public Employee{
	private: 
		string title; //data members
		double clubDues;
	
	public:
		//constructor for assignmeing values 
		Manager(): Employee(){
			this->title = "no title";
			this->clubDues = 0.0;
		}
		Manager(string name, int num, string title, double clubDues): Employee(name, num){
			this->clubDues = clubDues;
			this->title = title;
		}
		//for printing the values
		void print(){
			Employee::print();
			cout<<"Title of the Employee is: "<<this->title<<endl;
			cout<<"Club Dues: "<<this->clubDues<<endl;
			
		}
};
class Scientist : public Employee{
	private: 
		int publication; //data member
	
	public:
		//assigning the values
		Scientist(): Employee(){
			this->publication = 0;
		}
		Scientist(string name, int num, int pub): Employee(name, num){
			this->publication = pub;
		}
		//printing the values
		void print(){
			Employee::print();
			cout<<"Total Publications: "<<this->publication<<endl;
		}
};
class Programmer : public Employee{
	private: 
		double salary;
		string expertise;
	
	public:
		Programmer(): Employee(){
			this->salary = 0.0;
			this->expertise = "no expertise";
		}
		Programmer(string name, int num, double sal, string expertise): Employee(name, num){
			this->salary = sal;
			this->expertise = expertise;
		}
		void print(){
			Employee::print();
			cout<<"Salary of the Programmer: "<<this->salary<<endl;
			cout<<"Expertise of the Programmer is: "<<this->expertise<<endl;
		}
};

int main(){
	//conditon for the classes
	//and printing values of the each class.
	cout<<"-------------------------------------------------\n";
	Scientist s("sheryar",12345678, 12);
	s.print();
	cout<<"-------------------------------------------------\n";
	Manager m("sheryar", 23432434, "CEO", 4);
	m.print();
	cout<<"-------------------------------------------------\n";
	Programmer p("sheryar", 33333333, 23000.0, "python");
	p.print();
}



