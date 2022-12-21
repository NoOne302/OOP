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
class TA : public student{
	private:
		string sub;
	public:
		TA():student(){
			sub="No sub";
			
		}
		TA(int age,string name,float gpa,string sub):student(age,name,gpa){
			this->sub=sub;
		}
		void print(){
			student::print();
			cout<<sub;		}
};
int main(){
	human h,h1(10,"A");
	h.print();
	h1.print();
	student s,s1(11,"B",3.14);
	TA t,t1(12,"C",6.4,"OOP");
	s.print();
	s1.print();
	t.print();
	t1.print();
}
