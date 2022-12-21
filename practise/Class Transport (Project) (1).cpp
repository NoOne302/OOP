#include<iostream>
using namespace std;
class Transport{
	private:
		int kilometers;
		float cost;
		static int total_no_cars;
		static int total_no_bike;
		static int total_no_vans;
		static int total_no_buses;
	 public:	
	      int user_choice();
		  void details();	
}; 
int Transport::total_no_cars= 10;
int Transport::total_no_bike= 10;
int Transport::total_no_vans= 5;
int Transport::total_no_buses=5;

//Member functions
int Transport::user_choice(){
	start:
		int choice;
		cout<<"*****************************************\n";
		cout<<"______Welcome to booking Transport______ \n";
		cout<<" Enter 1 for booking private transport \n Enter 2 for booking public transport\n";
		cin>>choice;
		if(choice==1){
			return choice;
		}
		else if(choice==2){
			return choice;
		}
		else{
			cout<<" Invalid Input\n";
			system("cls"); 
			goto start;
		}
	
}
void Transport::details(){
	Options:  //Lable
    int option=user_choice();
	if(option==1){
		int select;
			cout<<"**************************************************\n";
			cout<<"______Welcome for booking Private Transport______ \n";
			cout<<"  Enter 1 for private cab options \n";
			cout<<"  Enter 2  for main menu \n ";
			cin>>select;
			if(select==1){
				cout<<"***************************** \n";
				cout<<" Cab options \n  1- Car \n   2-  Bike \n ";
				cout<<"Enter 1 for car details \n ";
				cout<<"Enter 2 for bike details \n ";
			} 
		if(select==2){
			system("cls");
			goto Options;
		}	
	}
	else if(option==2){
			cout<<"**************************************************\n";
			cout<<"______Welcome for booking Public Transport______ \n";
			cout<<"  Enter 1 for details \n";
			cout<<"  Enter 2  ";
			}
}

