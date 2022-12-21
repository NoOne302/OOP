#include <iostream>
using namespace std;

class student{
	protected:
	string name , address, rollNo;
	
	public:
		student(){
			this->name = "no name";
			this->address  = "null";
			this->rollNo = "Null";
		}
		student(string name, string address, string rollNo){
			this->name = name;
			this->address  = address;
			this->rollNo = rollNo;
		}
		void printStudent(){
			cout<<"name: "<<name<<"\n address: "<<address<<"\n roll no: "<<rollNo<<endl;	
		}
};

class uniStudent : public student {
	protected:
		float cgpa;
		string dept;
		int semester;
	
	public:
		uniStudent() :student(){
			cgpa = 0.0;
			dept = "null";
			semester = 0;
		}
		
		uniStudent(string name, string address, string rollNo, float cgpa, string dept,int semester) :student(name,address,rollNo) {
			this->cgpa = cgpa;
			this->dept =  dept;
			this->semester =  semester;
		}
		
		void printStudent(){
			student::printStudent();
			cout<<"cgpa: "<<cgpa<<"\n deparment: "<<dept<<"\n semester: "<<semester<<endl;
			
		}
};

int main(){
	uniStudent s1("sdfd", "sdfds", "sdfd", 3.4, "sdfdf", 2);
	s1.printStudent();
}
