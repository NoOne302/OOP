#include<iostream>
using namespace std;
class human{
	protected:
		int age;
		string name;
	public:
		human(){
			age=0;
			name="No Name";
		}
		human(int age, string name){
			this->age=age;
			this->name=name;
		}
		void print(){
			cout<<name<<" "<<age<<endl;
		}
};
class student : public human{
	private:
		float gpa;
	public:
	 student(int age,string name,float gpa):human(age,name){
	 	this->gpa=gpa;

	 }	
	 student():human(){
	 	this->gpa=0.0;
	 }
	 void print(){
	 	human::print();
	 	cout<<gpa<<endl;
	 }
};
int main(){
	human h,h1(10,"A");
	h.print();
	h1.print();
	student s,s1(11,"B",3.14);
	s.print();
	s1.print();
}
