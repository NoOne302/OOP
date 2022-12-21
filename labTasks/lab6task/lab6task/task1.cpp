#include <iostream>
using namespace std;
	class employee{
		private:
			string name;
			double basicPay, houseRent, medAlw, grossPay;
			
		public:
			void setData(){
				cout<<"Enter Name of the Employee: "; 
				cin.ignore();	
				getline(cin,name);
				cout<<"Enter the basic pay of Employee: ";
				cin>>basicPay;
				
			}
			void allowence(){
				houseRent = (basicPay*60)/100;
				medAlw = (basicPay*20) / 100;
				grossPay =basicPay+ houseRent + medAlw;
			}
			void displeyRecord(){
				cout<<"Name of Employee:"<<name<<endl;
				cout<<"basic pay of Employee:"<<basicPay<<endl;
				cout<<"house rent of Employee:"<<houseRent<<endl;
				cout<<"medical allowance of Employee:"<<medAlw<<endl;
				cout<<"Gross pay of Employee:"<<grossPay<<endl;
				
			}
	};
	
	

int main(){
	employee e[3];
	for(int i = 0;i<3;i++){
		
	e[i].setData();
	e[i].allowence();
	e[i].displeyRecord();	
	}
				
				
	return 0;
}

