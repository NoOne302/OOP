#include<iostream>
using namespace std;
//multiple inheritance
class student{
	private:
		int rn;
		float gpa;	
	public:
		student(){
			cout<<endl<<"-------student Constructor-------"<<endl;
		}
		student(int rn,float gpa){
			cout<<endl<<"-------student Parametrized Constructor-------"<<endl;
			this->rn=rn;
			this->gpa=gpa;
		}
		void print(){
			cout<<endl<<"-------student print-------"<<endl;
			cout<<rn<<" "<<gpa;
		}
};

class emp{
	private:
		int id;
		float sal;	
	public:
		emp(){
			cout<<endl<<"-------emp Constructor-------"<<endl;
		}
		emp(int id,float sal){
			cout<<endl<<"-------emp Parametrized Constructor-------"<<endl;
			this->id=id;
			this->sal=sal;
		}
		void print(){
			cout<<endl<<"-------emp print-------"<<endl;
			cout<<id<<" "<<sal;
		}
};
class scientist :  public student,public emp{
	private:
		int pub;
	public:
	scientist():emp(),student(){
			pub=0;
		}
	scientist(int rn,float gpa,int id, float sal,int pub):student(rn,gpa),emp(id,sal){
		cout<<endl<<"-------Scientist Parametrized Constructor-------"<<endl;
		this->pub=pub;
	}
	void print(){
		student::print();
		emp::print();
		cout<<endl<<"-------scientist print-------"<<endl;
		cout<<pub;
}
};
int main(){
	scientist s(1,3.14,66,2500,5);
	s.emp::print();
//	s.emp::print();
//	s.student::print();
	}
	
