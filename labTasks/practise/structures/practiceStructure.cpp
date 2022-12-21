#include <iostream>
using namespace std;

//struct Employee {
//	//members of structures
//	string name;
//	double hoursWorked;
//	double salary;
//};
//
//int main (){
//	Employee a,b;//structurs variables
//	
//	//accessing structure varibles
//	a.name = "Sheryar";
//	a.hoursWorked = 3;
//	a.salary = a.hoursWorked*60;
//	
//	b.name = "asif";
//	b.hoursWorked = 2;
//	b.salary = b.hoursWorked*60;
//	
//	//first employee
//	cout<<"employee name: "<<a.name<<endl;	
//	cout<<"employee hoursWorked: "<<a.hoursWorked<<endl;
//	cout<<"employee salary: "<<a.salary<<endl;
//	
//	//second employee
//	cout<<"employee name: "<<b.name<<endl;	
//	cout<<"employee hoursWorked: "<<b.hoursWorked<<endl;
//	cout<<"employee salary: "<<b.salary<<endl;
//	
//};
//========================="FUNCTION INSIDE STRUCTURE"====================
//struct Employee {
//	string name;
//	double hoursWorked;
//	double salary;
//	
//	//this fuction will initialize members of the structure
//	void data(double hours, string EmpName){
//		name = EmpName;
//		hoursWorked = hours;
//	}
//	void print(){
//		cout<<"Employee name: "<<name<<endl;
//		cout<<"hours worked: "<<hoursWorked<<endl;
//		salary = hoursWorked*60;
//		cout<<"salary: "<<salary<<endl;
//	}
//}; //struct body closed
//
//int main (){ 
//	Employee a[3];
//	string name;
//	double totalHours;
//	for(int i = 0;i <2;i++){ 
//	cout<<"Enter name of employee: ";
//	cin>>name;
//	cout<<"enter total working hours: ";
//	cin>>totalHours;
//	a[i].data(totalHours, name);
//	a[i].print();
//	}
//	
//	Employee a;
//	a.data(4, "sheryar");
//	a.print();
//}

//==============="STRUCTS OF ARRAY(ARAAY WITHIN STUCTURE"=================
//struct Student {
//	string name;
//	int id;
//	int testScore[3];//array within structure as member of 'stuct'
//		
//};
//
//int main (){
//	//declaring structure variable of type student 
//	Student s1;
////	access and initialize s1;
//	s1.name = "sheryar sher";
//	s1.id = 1;
//	s1.testScore[0] = 10;
//	s1.testScore[1] = 9;
//	s1.testScore[2] = 8;
////Display content of s1
//	cout<<"name of student: "<<s1.name<<endl;
//	cout<<"id: "<<s1.id<<endl;
//	cout<<"test score test1: "<<s1.testScore[0]<<endl;
//	cout<<"test score test2: "<<s1.testScore[1]<<endl;
//	cout<<"test score test3: "<<s1.testScore[2]<<endl;

//==============="structure pointer"==============================
//struct point {
//	int x,y;
//};
//
//int main (){
//	//structure variables
//	point p1;
//	point *p2;
//	p1.x = 4;
//	p1.y = 6;
//	//p2 is ponter to p1
//	p2 = &p1;
//	//accessing structure variables
//	//using structure pointers
////	cout<<p2->x<<" "<<p2->y
//======================="nesteed structures"======================
//struct address{ 
//	string houseNo;
//	string city;
//	string pinCode;
//};
//
//struct employee {
//	string name;
//	int id;
//	float salary;
//	struct address add;
//};
//
//int main() {
//	employee e[2];
//	for (int i = 0;i<2;i++){
//	
//	cout<<"enter the employee id: ";
//	cin>>e[i].id;
//	cout<<"enter employee name: ";
//	cin>>e[i].name;
//	cout<<"enter employee salary: ";
//	cin>>e[i].salary;
//	cout<<"enter employee house number: ";
//	cin>>e[i].add.houseNo;
//	cout<<"enter employee city: ";
//	cin>>e[i].add.city;
//	cout<<"enter employee pinCode: ";
//	cin>>e[i].add.pinCode;
//}
//    for(int i = 0;i<2;i++){
//	
//	cout<<"Details of employee"<<endl;
//	cout<<"Employee id: "<<e[i].id<<endl;
//	cout<<"Employee name: "<<e[i].name<<endl;
//	cout<<"Employee salary: "<<e[i].salary<<endl;
//	cout<<"Employee house number: "<<e[i].add.houseNo<<endl;
//	cout<<"Employee city: "<<e[i].add.city<<endl;
//	cout<<"Employee pinCode: "<<e[i].add.pinCode<<endl;
//	}	
//
//	return 0;
//};

//========" example 2 " ==============
//struct Distance {
//	int feet;
//	float inches;
//};
//struct Room {
//	Distance length;
//	Distance width;
//};
//int main () {
//	Room dining; // define a room
//	dining.length.feet = 13; //assign values to room
//	dining.length.inches = 6.5;
//	dining.width.feet = 10;
//	dining.width.inches = 0.0;
//	
//	//alternative : room dining = { {13,6.5}, {10, 0.0} };
//	//convert length and width
//	float lengthh =  dining.length.feet + dining.length.inches/12;
	float widthh = dining.width.feet + dining.length.inches/12;
//	//find area and display it
	cout<< "Dining room area is: "<<lengthh * widthh<<" square feet\n";
//	system("pause");
//	
//	
//	
//}

//=========="Example 3"============
//struct Address{ 
//	string houseNo;
//	string city;
//	string pinCode;
//};
//
//struct Employee {
//	string name;
//	int id;
//	float salary;
//	Address address;
//};
//
//int main() {
//	Employee e[2];
//	for (int i = 0;i<2;i++){
//	
//	cout<<"enter the employee id: ";
//	cin>>e[i].id;
//	cout<<"enter employee name: ";
//	cin>>e[i].name;
//	cout<<"enter employee salary: ";
//	cin>>e[i].salary;
//	cout<<"enter employee house number: ";
//	cin>>e[i].address.houseNo;
//	cout<<"enter employee city: ";
//	cin>>e[i].address.city;
//	cout<<"enter employee pinCode: ";
//	cin>>e[i].address.pinCode;
//}
//    for(int i = 0;i<2;i++){
//	
//	cout<<"Details of employee"<<endl;
//	cout<<"Employee id: "<<e[i].id<<endl;
//	cout<<"Employee name: "<<e[i].name<<endl;
//	cout<<"Employee salary: "<<e[i].salary<<endl;
//	cout<<"Employee house number: "<<e[i].address.houseNo<<endl;
//	cout<<"Employee city: "<<e[i].address.city<<endl;
//	cout<<"Employee pinCode: "<<e[i].address.pinCode<<endl;
//	}	
//
//	return 0;
//};

//================"passing structure by value"================
//struct Employee {
//	int id;
//	string name;
//	int age;
//	long salary;
//};
//	void display(Employee e); //function declare
//	
//	int main () {
//		Employee e[2];
//		for(int i = 0;i<2;i++){
//		cout<<"enter the employee id: ";
//		cin>>e[i].id;
//		cout<<"enter employee name: ";
//		cin>>e[i].name;
//		cout<<"enter employee salary: ";
//		cin>>e[i].salary;
//		
//		
//		}
////		e.id = 1;
////		e.name = "sheryar";
////		e.age = 19;
////		e.salary = 20000;
////		
//		
//			
//	}
//	
//void display(Employee e){
//	cout<<"employee name: "<<e.name<<endl;
//	cout<<"employee id: "<<e.id;
//}

//============="Return structure"===================
//struct Employee {
//	int id;
//	string name;
//};
//
//Employee input();
//int main (){
//	Employee Emp;
//	Emp = input();
//	cout<<"id: "<<Emp.id<<endl;
//	cout<<"name: "<<Emp.name<<endl;
//}
//Employee input(){
//	Employee e; //declaring structure variable
//	cout<<"enter id: ";
//	cin>>e.id;
//	cout<<"enter Name: ";
//	cin>>e.name;
//	return e; //returning structure varible
//}
//================="POINTERS AND ARRRAYS"===================
//void temp(int *x);
//int main () {
//	int *p;
//	int a;
//	p = &a;
//	cout<<"enter data value: ";
//	cin >> *p;
//	cout<<"value of variable = "<<a<<endl;
//	cout<<"memory addrss is: "<<p<<endl;
////	
//	char a;
//	char *b;
//	char **c;
//	char ***d;
//	a = 'z';
//	b = &a;
//	c = &b;
//	d = &c;
//cout<<"The Address of the Vairiable a is: "<<b<<endl;
//cout<<"The Address of the Vairiable b is: "<<c<<endl;
//cout<<"The Address of the Vairiable d is: "<<d<<endl;

//	char arr[5];
//	char *pp;
//	pp = arr;
//	cout <<"Enter the values into an array"<<endl;
//	for (int i = 0;i<5;i++){
//		cin>>arr[i];
//		
//	}
//	cout<<"Values from array using pointers"<<endl;
//	for (int i = 0;i<5;i++){
//		cout<<*pp++<<"\t";
//	}
//}

//=============="pointers as arguments to function"==============
//
//	int a,b;
//	a = 20;
//	b = 10;
//	int *c,*d;
//	c = &a;
//	d = &b;
//	
//	temp(c,d);
//	cout<<"value of a = "<<a<<" value of b = "<<b;
//	
//}
//void temp(int *x, int *y){
//	*x = *x+100;	
//	*y = *y+500;

//}
//int x= 3;
//int *y = &x;
//temp(y);
//cout<<"value of p is changed by the fuction passed as parameter: "<<*y<<endl;
//}

//void temp (int *t){
// *t = *t * *t;	
//}

//int* abc(int &x){
//	int  *p;
//	p = &x;
//	*p = *p * *p;
//	return p;
//	
//	
//	
//}
//int* abc(int *p){
//	*p = *p * *p;
//	return p;
//	
//	
//	
//}
//int main (){
//	int a = 4;
//	int *p = &a;
//	cout<<"a: "<<a<<endl;
//	p =abc(p);
//	cout<<"a: "<<*p;
//}

