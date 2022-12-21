#include <iostream>
using namespace std;

class laptop{
	// declaring data members
		string brand,model,color;
		int serial,ram;
		float price,processorSpeed,screenSize;
		
		//declaring data functios
		public:
			//getting data from user and assigning it to data members
			void setDataMember(){
			cout<<"enter brand name: "; cin>>brand;	
			cout<<"enter model name: "; cin>>model;	
			cout<<"enter color name: "; cin>>color;	
			cout<<"enter serial number: "; cin>>serial;	
			cout<<"enter ram : "; cin>>ram;	
			cout<<"enter price : "; cin>>price;	
			cout<<"enter processor speed : "; cin>>processorSpeed;	
			cout<<"enter screenSize: "; cin>>screenSize;				
			}
			// upgrading the ram 
			void updateRam(){
				int newRam;
				cout<<"enter the upgradable(new) ram : "; cin>>newRam;
				ram+=newRam;		
			}
			//couting the information of the laptop;
			void display(){
			cout<<"============================================="<<endl;
			cout<<"brand name: "<<brand<<endl;	
			cout<<"model name: "<<model<<endl;	
			cout<<"color name: "<<color<<endl;	
			cout<<"serial number: "<<serial<<endl;	
			cout<<"ram : "<<ram<<endl;	
			cout<<"price : "<<price<<endl;	
			cout<<"processor speed : "<<processorSpeed<<endl;	
			cout<<"screenSize: "<<screenSize<<endl;	
			cout<<"============================================="<<endl;
			}
			
};
int main(){
	laptop l1;
	//calling the member functions
	l1.setDataMember();
	l1.display();
	l1.updateRam();
	l1.display();
}
