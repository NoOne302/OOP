#include <iostream>
using namespace std;

class Employee{
	string name;
	public:
	void setData(string newName);
	string getData();

};
	void Employee::setData(string newName){
		name = newName;
	}
	string Employee::getData(){
		return name;
	}
int main(){
//	e is an instance of Employee -> for instance the type must be a class.
	Employee e[3];
	// the varible which stores the pointer of a class it is know as reference varible	
//	*E is a reference varible becuase *E is a pointer and it gives us a reference to a particular instance/it holds the pointer of a class
	Employee *E;
	string name;
	E = new Employee;
	cout<<E<<endl;
	cin>>name;
	E->setData(name);
	cout<<E->getData();
	for(int i = 0;i<3;i++){
		cin>>name;
		e[i].setData(name);
		E[i] = &e[i]; 
	}
	for(int i = 0;i<3;i++){
//		string Name = e[i].getData();
		cout<<e[i].getData()<<endl;
	}
		
	for(int i = 0;i<3;i++){
	cout<<E[i]->getData()<<endl;	
	}
}
