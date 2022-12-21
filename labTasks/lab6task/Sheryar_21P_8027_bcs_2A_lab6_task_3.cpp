#include <iostream>
using namespace std;

class factorial{
	//declaring data members
	float num;
	int result;
	
	//declaring member functions
	public:
		//setting the values of data members
		void setDataMembers(){
			cout<<"Enter the number: ";
			cin>>num;
			checkWhole();
		}
		//cout the number and its factorial
		void display(int sum){
			cout<<"================================="<<endl;
			cout<<"Number:"<<num<<endl;
			cout<<"factorial is:"<<sum<<endl;
			cout<<"================================="<<endl;
		}
		//calculating the factorial
		int fact(){
			int sum = 1;
			for(int i= 1;i<=num;i++){
			sum*=i;
			}
			return sum;
		}	
		//(cheking the required conditions of the given program)					
		//checking whether the number is postive or not
		void checkPos(){
			if(num >= 0){				
		      int Sum = fact(); // if postive then calling factorial and display function
			  display(Sum);			
			}
			else{
			cout<<"================================="<<endl;
			cout<<"Invalid Input"<<endl;
			cout<<"================================="<<endl;
			}
		}
		//checking whether the number is a whole number or not
		void checkWhole(){
			if(num / (int)num == 1){
				checkPos(); // if it is a whole number then calling the CheckPos function
			}
			else if(num == 0){
				checkPos();
			}
			else{
				cout<<"================================="<<endl;
				cout<<"Invalid Input"<<endl;
				cout<<"================================="<<endl;
			}
		};
};
int main(){
	factorial f;
	
	//running a loop untill the user decide to quit
	while(true){
		int btn;
		cout<<"press 1 to calculate Factorial / press 2 to quit: "; cin>> btn;
		if(btn == 1){
			f.setDataMembers();
		}
		else if(btn == 2){
			break;
		}
	}
	
	
	
	
}
