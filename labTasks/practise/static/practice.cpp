#include <iostream>
using namespace std;

//void staticCheck(){
//	static int var = 0;
//	cout<<"var : "<<var<<endl;
//	var++;
//}
class Account {
	public:
		int accno;
		string name;
		static float rateOfInterst;
		Account(int accno , string name){
			this->accno = accno;
			this->name = name;
		}
		void display(){
			cout<<"accno: "<<accno<<" name: "<<name<<" rateof interst: "
			<<rateOfInterst<<endl;
		}
		
};
float Account::rateOfInterst = 6.6;
int main(){
	
//	for(int i = 0;i<3;i++){
//		staticCheck();	
//	}
	Account a1(1,"sher"), a2(2,"ali");
	Account a3= Account(4,"dfafsd");
	
	a1.display();
	a2.display();
	a3.display();
}
