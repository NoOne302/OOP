#include <iostream>
#include <fstream> //for file handling
//#include <iomanip> //show floating point values
#include <windows.h> //to use system functions
#include <stdlib.h>
#include <conio.h>
using namespace std;

//data class
class Date{
	protected: 
		int numDays; // for total days that he will stay
		int day[100]; //date of the days
		int months[12]; //month
		int mCount; // number of the months
		
	public:
		void setDay(int Day,int Days){ //setting up the values
			this->numDays = Days;
			for(int i = 0;i<Days;i++){
				if(Day <= 30){ //if days are less then 30 
					this->day[i] =  Day; //assigning days to array of days
				}
				else{
					Day=1; //if date is greater than 30 then day will set to 1
					this->day[i] =  Day; //day will append to days
					mCount++; //month count will increase
				}
				Day++; //each time day will increment till  num of days
			}
		}
		void setDate(int Day,int month, int Days ){
			this->mCount = 0; //month count
			setDay(Day, Days); //call setDate Fun
			int c = this->mCount+1; 
			for(int i = 0;i<c;i++){
				this->months[i] = month; //append month to months array
				month++; //incrementing months each time
			}
		}
		void print(){
			cout<<"days: ";
			for(int i = 0;i<numDays;i++){
				cout<<day[i]<<" ";
			}
			int n = this->mCount+1;
			cout<<"\nMonth: ";
			
			for(int i = 0;i<n;i++){
				cout<<months[i]<<" ";
			}
		}
};


//class Room{
//	private:
//		int room;
//	public:
//		void setRoom(int r);
//		void getRoom();
//};
//void Room::setRoom(int r){
//	this->room = r;
//}
//void Room::getRoom(){
//	cout<<this->room<<endl;
//}
class Hotel {
	private:
		static int avalRoomsSerenaHotel;
		static int avalRoomsPCHotel;
		static int avalRoomsGrandHotel;
		char serenaRooms[20];
		int pcRooms[15];
//		static int grandRooms[10];
		Date dS[20]; //date of serena hotel
		Date dP[20];//date of pc hotel
		Date dG[20];//date of grand hotel
		
	public:
		int getChoice(); //to get hotel choice from user
		void hotelDetails(); //show  details about hotels
		
		
		
};
//booked rooms of hotels
int Hotel::avalRoomsSerenaHotel = 20;
int Hotel::avalRoomsPCHotel = 15;
int Hotel::avalRoomsGrandHotel = 10;

//defining getChoice functin;
int Hotel::getChoice(){
	start:
	int choice; // user choice of hotel
	cout<<"*********************************************** \n";
	cout<<"**               WELCOME SIR/MAM             ** \n";
	cout<<"*********************************************** \n";
	cout<<"Enter the Quality of hotel you want: \n";
	cout<<"press 1 for 5 star hotel \npress 2 for 4 star hotel \npress 3 for 3 star hotel \npress 4 to exit \n"; //printing the available hotels
	cout<<"Enter your choice:";cin>>choice; // geting choice from user; 
	
	if(choice == 1){
		return choice; //return choice	
	}
	else if(choice == 2){
		return choice; //return choice	
	}
	else if(choice == 3){
		return choice; //return choice	
	}
	else if(choice == 4){
		return choice;
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
	int indS = 0; //for room indexing serena
	if(choice == 1){  		
		menu: //menu of this hotel
		cout<<"\n*********************************************** \n";
		cout<<"**         WELCOME TO SERENA HOTEL           ** \n";
		cout<<"*********************************************** \n\n";
		cout<<"press 1) for Details  \n";
		cout<<"press 2) for check Detail about Booked rooms \n";
		cout<<"press 3) for check Detail about Available rooms \n";
		cout<<"press 4) for room booking  \n";
		cout<<"press 5) for goto Main Menu \n";
		int check; //gets the choice of the user
		cout<<"Enter your choice:";cin>>check; // for user input
		
		if(check == 1){ 
			cout<<"Total rooms are: 20"<<endl; //showing the total rooms
			cout<<"Available rooms: "<<avalRoomsSerenaHotel<<endl;//showing the available rooms rooms
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
		else if(check == 2){
			cout<<"\n*********************************************** \n";
			cout<<"**         DETAIL ABOUT BOOKED ROOMS         ** \n";
			cout<<"*********************************************** \n\n";
			
			for(int i = 1;i<=20;i++){
				for(int j: serenaRooms){
					if(i == j){
						cout<<"Room"<<i<<"\t";		
						break;
					}
				}	
			}
			cout<<endl;
			int c; //to go beck;
			cout<<"\npress 1 for more detail \npress 2 to go beck: "; cin>>c;
			if(c == 1){
				int num; //room number
				cout<<"enter room number  for more details: ";cin>>num;
				cout<<"\n=======================================\n";
				dS[num].print();
				cout<<"\n=======================================\n";
				cout<<endl;
				getch();
				goto menu;
			}
			else{
				goto menu;
			}
		}
		else if(check == 3){
			cout<<"\n*********************************************** \n";
			cout<<"**        WELCOME TO AVAILABLE ROOMS         ** \n";
			cout<<"*********************************************** \n\n";
		
			for(int i = 1;i<=20;i++){
				for(int j: serenaRooms){
					if(i == j){
						break;
					}
				}
				cout<<"Room"<<i<<"\t";		
			}
			getch();
			int c; //to go beck;
			cout<<"\npress 1 to go beck: "; cin>>c;
			if(c == 1){
				goto menu;
			}
			else{
				goto menu;
			}
			
		}
		else if(check == 4){
		s: //start booking
		cout<<"*********************************************** \n";
		cout<<"**         WELCOME TO BOOKING MENU           ** \n";
		cout<<"*********************************************** \n\n";
		
		if(avalRoomsSerenaHotel > 0){
			int roomNum; //room number
			cout<<"Enter room number: "; cin>>roomNum;
			int day, month, days;
			cout<<"Enter check in date (dd-mm): "; cin>>day>>month; 			//use data class to store date 
			cout<<"Enter the number of days you will stay: "; cin>>days;
			int b; //for confirm booking
			cout<<"Do you want to confirm booking (1/0)";cin >> b;
			if(b == 1){
				this->dS[roomNum].setDate(day,month,days); //setting date
				this->serenaRooms[indS] = roomNum; //storing data of rooms
				avalRoomsSerenaHotel--;	
			indS++;
			}else{
				cout<<"Booking is cancel...";
			}	
		} else{
			 cout<<"Sorry Rooms are full..";
		};
		
		int get; //to get menu
		cout<<"press 1 for menu: "; cin>>get; //geting answer from the user
		if (get == 1){
			goto menu;
		} 
		else {
			goto menu;
		}
		}
		else if (check == 5){ 
			goto start; // if check is 2 then goto start to run again 
		}
		else{
			cout<<"valid choice.. redirecting to menu"<<endl; //if user enter wrong input
			goto menu;
			system("cls"); 
//			getch();
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
			cout<<"Total rooms are: 15"<<endl; //showing the total rooms
			cout<<"Available rooms: "<<avalRoomsSerenaHotel<<endl;//showing the available rooms rooms
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
			cout<<"Total rooms are: 10"<<endl; //showing the total rooms
			cout<<"Available rooms: "<<avalRoomsSerenaHotel<<endl;//showing the available rooms rooms
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
	else if(choice == 4){
			exit(4);	
	}
	else{
		cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
		system("cls"); //clear the console screen
		goto start; // if user enter wrong choice then goto start again	
	}
	
}

int main(){
	Hotel h,h1;
	h.hotelDetails();
	//i have use inherited class only in 5 start hotel i will use in all hotel but i have done only in 5 start till now
	
}
//int main(){
//	Date d;
//	d.getData(29, 4, 4);
//	d.print();
//}
