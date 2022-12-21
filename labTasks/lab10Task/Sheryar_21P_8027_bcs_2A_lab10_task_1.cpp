#include <iostream>
using namespace std;

//main class for student
class student{
	protected:
	string name , address, rollNo; ///data members 
	
	public:
		void getStudent(string name, string address, string rollNo){ //fuction to set data
			this->name = name;
			this->address  = address;
			this->rollNo = rollNo;
		}
		void printStudent(){
			cout<<"name: "<<name<<"\naddress: "<<address<<"\nroll no: "<<rollNo<<endl;	//printing data
		}
};

//derived class from main class
class uniStudent : public student {
	protected: //protected data members
		float cgpa; 
		string dept;
		int semester;
	
	public: //function to set data
		void getUniStudent(string name, string address, string rollNo, float cgpa, string dept,int semester){
			student::getStudent(name, address, rollNo); //calling getStudent fuction of the base class
			this->cgpa = cgpa;
			this->dept =  dept;
			this->semester =  semester;
		}
		
		void printStudent(){
			student::printStudent(); //printing the data of the main class
			cout<<"cgpa: "<<cgpa<<"\ndeparment: "<<dept<<"\nsemester: "<<semester<<endl; //printing the data
			
		}
};

int main(){
	uniStudent s1; //creating an object of the derived classs
	s1.getUniStudent("sheryar", "gilgit", "21p8027",3.0, "cs", 2); //setting data to data function
	s1.printStudent(); //printing data
}
