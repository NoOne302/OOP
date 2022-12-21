#include <iostream>
using namespace std;

class Employee{
	string name;
	public:
	void setData(string newName);
	string getData();

};
	void Employee::setData(string name){
		this->name = name;
	}
	string Employee::getData(){
		return name;
	}
int main(){
	Employee e[3];
//	e1.setData("Ayyan");
//	cout<<e1.getData();
	string name;
	
	for(int i = 0;i<3;i++){
		cin>>name;
		e[i].setData(name);
	}
	for(int i = 0;i<3;i++){
//		string Name = e[i].getData();
		cout<<e[i].getData()<<endl;
	}
}
//int var  = 4
//int* ptr = &var;
