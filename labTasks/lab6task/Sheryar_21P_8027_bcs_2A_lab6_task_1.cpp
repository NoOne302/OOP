#include <iostream>
using namespace std;

//declare a class name tollBooth
class tollBooth{
	// creating data members
	unsigned int cars;
	double money;
	
	//data functions
	public:
		void setDataMembers(){ //assigning values to data member
			cars = 0;
			money = 0;
		}
		void payingCar(){//collecting money and incrementing cars
			cars++;
			money+=50;
		}
		void noPayCar(){//incrementing cars
			cars++;
		}
		//cout the collected record
		void display(){
			cout<<"============================================="<<endl;
			cout<<"Total number of cars that cross toll booth:"<<cars<<endl;
			cout<<"number of cars that paid toll:"<<money/50<<endl;
			cout<<"number of cars that didn't pay toll:"<<cars-(money/50)<<endl;
			cout<<"total toll collected:"<<money<<endl;
			cout<<"============================================="<<endl;
		}
};

int main(){
	tollBooth car;
	car.setDataMembers();
	//running a loop to collect the data of toll Booth
	while(true){
		int btn;
		cout<<"press 1 for cout paying car/press 2 for not paying car/press 3 for display record/press 4 to quit: ";
		cin>>btn;
		if (btn == 1){
			car.payingCar();
		}
		else if(btn == 2){
			car.noPayCar();
		}
		else if(btn == 3){
			car.display();
		}else if(btn == 4){
			break;
		}
	}
}
