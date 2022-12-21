#include <iostream>
using namespace std;

//class for brain 
class Brain {
	protected:
		string brainCondition; //data members
	
	public:
		//assining the values
		Brain(){
			this->brainCondition = "Unknown";
		}	
		Brain(string cond){
			this->brainCondition = cond; //setting the condtion
		}
		printing the vlues
		void print(){
			cout<<"Brain Condition is: "<<this->brainCondition<<endl;
		}
};
class Heart {
	protected:
		string heartCondition;  //data members
	public:
		Heart(){
			this->heartCondition = "Unknown";
		};		
		Heart(string cond){
			this->heartCondition = cond; //setting condition
		}
		//printing the values
		void print(){
			cout<<"Heart Condition is: "<<this->heartCondition<<endl;
		}
};
class Leg {
	protected:
		string legCondition; //data member
	
	public:
		Leg(){
			this->legCondition = "Unknown";
		}		
		Leg(string cond){
			this->legCondition = cond; //setting condition
		}
		//printing the values
		void print(){
			cout<<"Legs Condition are: "<<this->legCondition<<endl;
		}
};

class Person {
	private:
		string name; //data members
		int age;
		Brain b; //creating object of brain class and using as data member of the Person class
		Heart h; // same thing 
		Leg l; // same thing here too
	public:
		//assignging the all values to the respective variables
		Person(string name, int age, Brain b, Heart h, Leg l){
			this->name = name;
			this->age = age;
			this->b = b;
			this->h = h;
			this->l = l;
		}
		//printing each value
		void print(){
			cout<<"Name of the person: "<<this->name<<endl;
			cout<<"Age of the person: "<<this->age<<endl;
			b.print(); //calling print of the brain class
			h.print();
			l.print();			
		}
};
int main(){
	Brain b("perfect"); //creating the object of brain
	Heart h("moderate"); //same
	Leg l("fit"); //same
	Person p("sheryar", 20,b, h, l ); //creating object of person and giving the objects as arguments 
	p.print(); //printing p
}
