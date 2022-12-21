#include <iostream>
using namespace std;

//main class
class Chef{
	protected:
		string dishes; //data members
		
	public:
		Chef(){ //construtor function
			dishes = "chicken, salad and a special dish";
		}
		
		void printDish(){ //print function
			cout<<dishes<<endl;
		}
};

//derive class for Italian chef
class ItalianChef : Chef{
	protected:
		string dish; //data members
	public:
		ItalianChef() :Chef(){
			dish = "Pizza, pasta ,"; //setting data members
		}
		void printDish(){
			cout<<"the dishes Chef can make are: "<<dish; //printing data
			Chef::printDish(); //calling print of base class
		}
};
//derived class for chinese chief
class ChineseChef : Chef{
	protected:
		string dish; //data members
	public:
		ChineseChef() :Chef(){
			dish = "Fried rice, ";  //setting data through contructor
		}
		void printDish(){
			cout<<"the dishes Chef can make are: "<<dish; //printing data
			Chef::printDish(); //calling base print ftn
		}
};

int main(){
	ItalianChef i; //creating obj
	i.printDish(); //printing fuction calling
	ChineseChef c; //creating object for chinese class
	c.printDish(); //calling print functio to print data
}
