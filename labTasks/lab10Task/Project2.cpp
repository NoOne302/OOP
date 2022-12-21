#include <iostream>
#include <fstream> //for file handling
#include <iomanip> //show floating point values
#include <windows.h> //to use system functions
using namespace std;

class Hotel{
	private:
		static int totalRoomsSerenaHotel;
		static int totalRoomsPCHotel;
		static int totalRoomsGrandHotel;
		static int bookRoomsSerenaHotel;
		static int bookRoomsPCHotel;
		static int bookRoomsGrandHotel;
		static int serenaRooms[20];
		static int pcRooms[15];
		static int grandRooms[10];
		static int serenaRoomsBook[20];
		static int pcRoomsBook[15];
		static int grandRoomsBook[10];
		
	public:
		Hotel(); //defalult construtor of class
		int getChoice(); //to get hotel choice from user
		void hotelDetails(); //show  details about hotels
		
		
		
};
//constructor of the class
Hotel::Hotel(){
	for(int i = 0; i < 20; i++){
		this->serenaRooms[i] = i+1; //setting the rooms
	}
	for(int j = 0; j < 15; j++){
		this->pcRooms[j] = j+1; //setting the rooms
	}
	for(int i = 0; i < 10; i++){
		this->grandRooms[i] = i+1; //setting the rooms
	}
}
//setting the total rooms of hotels
int Hotel::totalRoomsSerenaHotel = 20;
int Hotel::totalRoomsPCHotel = 15;
int Hotel::totalRoomsGrandHotel = 10;
//booked rooms of hotels
int Hotel::bookRoomsSerenaHotel = 0;
int Hotel::bookRoomsPCHotel = 0;
int Hotel::bookRoomsGrandHotel = 0;

//defining getChoice functin;
int Hotel::getChoice(){
	start:
	int choice; // user choice of hotel
	cout<<"*********************************************** \n";
	cout<<"**               WELCOME SIR/MAM             ** \n";
	cout<<"*********************************************** \n";
	cout<<"Enter the Quality of hotel you want: \n";
	cout<<"press 1 for 5 star hotel \npress 2 for 4 star hotel \npress 3 for 3 star hotel \n"; //printing the available hotels
	cin>>choice; // geting choice from user; 
	
	if(choice == 1){
		return choice; //return choice	
	}
	else if(choice == 2){
		return choice; //return choice	
	}
	else if(choice == 3){
		return choice; //return choice	
	}
	else{
		cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
		system("cls"); //clear the console screen
		goto start; // if user enter wrong choice then goto start again	
		
	}
	
}

//defining hotelDetails function'
void Hotel::hotelDetails(){
	start:
	int choice = getChoice();
	if(choice == 1){  		
		menu: //menu of this hotel
		cout<<"*********************************************** \n";
		cout<<"**         WELCOME TO SERENA HOTEL           ** \n";
		cout<<"*********************************************** \n\n";
		cout<<"press 1) for Details  \n";
		cout<<"press 2) for book room \n";
		cout<<"press 3) for goto Main Menu \n";
		int check; //gets the choice of the user
		cin>>check; // for user input
		
		if(check == 1){ 
			int avalRooms = totalRoomsSerenaHotel-bookRoomsSerenaHotel; 
			cout<<"Total rooms are: "<<totalRoomsSerenaHotel<<endl; //showing the total rooms
			for(int i = 0;i<20;i++){
				cout<<i+1<<") Room"<<i+1<<" ";
			}
			cout<<"Rooms available: "<<avalRooms<<endl; //showing the booked rooms
			cout<<"Per night charges 30,000PKR \n"; 
			cout<<"press 1 to go back: ";
			int press; //to go back
			cin>>press; //getin input from user
			if(press == 1){ 
				goto menu; //goto menu
			}
			else{
				goto menu; //getting menu
			}	
		}
		else if (check == 3){ 
			goto start; // if check is 2 then goto start to run again 
		}
		else{
			cout<<"valid choice.. redirecting to menu"<<endl; //if user enter wrong input
			goto menu;
			system("cls"); 
		}
		
	}
	if(choice == 2){
		
		menu2: //menu
		cout<<"*********************************************** \n";
		cout<<"**           WELCOME TO PC HOTEL             ** \n";
		cout<<"*********************************************** \n\n";
		cout<<"press 1) for Details  \n";
		cout<<"press 2) for book room \n";
		cout<<"press 3) for goto Main Menu \n";
		int check; //gets the choice of the user
		cin>>check; // for user input
		
		if(check == 1){ 
			int avalRooms = totalRoomsPCHotel-bookRoomsPCHotel; 
			cout<<"Total rooms are: "<<totalRoomsPCHotel<<endl; //showing the total rooms
			cout<<"Rooms available: "<<avalRooms<<endl; //showing the booked rooms
			cout<<"Per night charges 20,000PKR \n"; 
			cout<<"press 1 to go back: ";
			int press; //to go back
			cin>>press; //getin input from user
			if(press == 1){ 
				goto menu2; //goto menu
			}
			else{
				goto menu2; //getting menu
			}	
		}
		else if (check == 3){ 
			goto start; // if check is 2 then goto start to run again 
		}
		else{
			cout<<"valid choice.. redirecting to menu"<<endl; //if user enter wrong input
			goto menu2;
			system("cls"); 
		}
		
	}
	else if(choice == 3){
		
		menu3: //menu
		cout<<"*********************************************** \n";
		cout<<"**         WELCOME TO GRAND HOTEL           ** \n";
		cout<<"*********************************************** \n\n";
		cout<<"press 1) for Details  \n";
		cout<<"press 2) for book room \n";
		cout<<"press 3) for goto Main Menu \n";
		int check; //gets the choice of the user
		cin>>check; // for user input
		
		if(check == 1){ 
			int avalRooms = totalRoomsGrandHotel-bookRoomsGrandHotel; 
			cout<<"Total rooms are: "<<totalRoomsGrandHotel<<endl; //showing the total rooms
			cout<<"Rooms available: "<<avalRooms<<endl; //showing the booked rooms
			cout<<"Per night charges 10,000PKR \n"; 
			cout<<"press 1 to go back: ";
			int press; //to go back
			cin>>press; //getin input from user
			if(press == 1){ 
				goto menu3; //goto menu
			}
			else{
				goto menu3; //getting menu
			}	
		}
		else if (check == 3){ 
			goto start; // if check is 2 then goto start to run again 
		}
		else{
			cout<<"valid choice.. redirecting to menu"<<endl; //if user enter wrong input
			goto menu3;
			system("cls"); 
		}
		
	}
	else{
		cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
		system("cls"); //clear the console screen
		goto start; // if user enter wrong choice then goto start again	
	}


}

int main(){
	Hotel h1;
	h1.hotelDetails();
	
	
	return 0;
}
