#include <iostream>
#include <fstream> //for file handling
#include <iomanip> //show floating point values
#include <windows.h> //to use system functions
#include <stdlib.h>
#include <conio.h>
#include "class.h"
using namespace std;
//========================customer clASS======================
Customer::Customer(){
          id_no++;
//        cout<<"Customer id  "<<id_no<<endl;
}  
void Customer::information(){
	    
        cout<<"Enter First name \n";
        cin>>First_name;
         cout<<"Enter Last name \n";
        cin>>Last_name;
        cout<<"Enter phone no \n";
        cin>>phone_number;
        cout<<"Enter address \n";
        cin.ignore();
        getline(cin,address);   
        cout<<"Enter Gender  \n ";
        cin>>Gender;
        cout<<"Enter email \n";
        cin>>email;     
        cout<<"press any key to continue: ";
        getch();
        system("cls");
		}
void Customer::print(){
     	 cout<<id_no<<endl;
         cout<<"Full name: "<<First_name<<" "<<Last_name<<endl;
         cout<<"Phone number: "<<phone_number <<endl;
         cout<<"Address: "<<address <<endl;
         cout<<"Gender: "<<Gender <<endl;
         cout<<"Email: "<<email <<endl; 
         cout<<"Press any key to go beck: \n";
         getch();
         
	}
int Customer::id_no=0;
//========================================Date=====================================
	void Date::setDay(int Day,int Days){ //setting up the values
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
void Date::setDate(int Day,int month, int Days ){
			this->mCount = 0; //month count
			setDay(Day, Days); //call setDate Fun
			int c = this->mCount+1; 
			for(int i = 0;i<c;i++){
				this->months[i] = month; //append month to months array
				month++; //incrementing months each time
			}
		}
		
void Date::setDate(int day,int month){
	this->Day=day;
	this->month=month;
}

void Date::show(){
	cout<<"date  : "<<Day<<endl;
	cout<<"Month : "<<month<<endl;
}	
		
void Date::print(){
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

//==========================================================Transport Class======================================================

int Transport::total_no_cars= 10;
int Transport::total_no_bike= 10;
int Transport::total_no_vans= 5;
int Transport::total_no_buses=5;
int Transport::no_seats_bus=75;
int Transport::no_seats_vans=40;

float Transport::cost = 0;
//Member functions
//float Transport::getCost(){
//	return cost;
//}
float Transport::getCost(){
	return cost;
}
int Transport::user_choice(){
	start:
		int choice;
		cout<<" *************** \n";
		cout<<" ___Welcome to booking Transport___  \n";
		cout<<" Enter 1 for booking private transport \n Enter 2 for booking public transport\n Enter 3 to goto Menu: \n";
		cout<<"Enter your Choice: ";
		cin>>choice;
		if(choice==1){
			return choice;
		}
		else if(choice==2){
			return choice;
		}
		else if(choice==3){
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
		Main_menu1:
		    int select;
			cout<<"******************\n";
			cout<<"___Welcome for booking Private Transport___ \n";
			cout<<"  Enter 1 for private cab options \n";
			cout<<"  Enter 2  for main menu \n ";
			cin>>select;
			system("cls");
			
			if(select==1){
				Private_menu1:
				int press;
				cout<<"*********** \n";
				cout<<" Cab options \n  1- Car \n  2-  Bike \n ";
				cout<<"Enter 1 for car details \n ";
				cout<<"Enter 2 for bike details \n ";
				cin>>press;
				system("cls");
				
					
					if(press==1){
					     int enter;
				         cout<<"*********** \n";
					     cout<<"Car details  \n";
					     cout<<"Total number of cars = "<<total_no_cars<<" \n";
					     cout<<"Total number of cars avaliable = "<<total_no_cars<<" \n" ;
					     cout<<"Rent a car for 1000-RS per 1Km \n";
					     cout<<"Enter 1 for booking \n";
					     cout<<"Enter 2 for private cab details \n ";
					     cout<<"Enter 3 for go back to main menu  \n ";
					     cin>>enter;
					     system("cls");
					     
					    if(enter==1){
						       cout<<"Enter number of cars you want ? \n";
					           cin>> car_no;
						    if(car_no<=total_no_cars){ 
					        	int day, month;
			                    cout<<"Enter  date and month (dd mm): "; cin>>day>>month; 			//use data class
			                    int b; 
			                    cout<<"Do you want to  book (1/0)";cin >> b;     
					            if(b == 1){
					            	cout<<"Enter kilometers \n ";
					                cin>>kilometers;
								   	this->D_Pri.setDate(day,month); 
								   	this->D_Pri.show();
								   	cost=kilometers*1000;
					                cout<<"expected cost = "<<cost<<endl;
					                total_no_cars=total_no_cars-car_no; 
					                cout<<"press any key to go to main menu: ";
					                getch();
					                system("cls");
					                goto Options;
					                
									}
					                
					            else{
					            	cout<<"No booking  \n";
					            	goto Main_menu1;
								}
					}
						
						    else  if(car_no>total_no_cars){
						 	      cout<<"Sorry  too many cars not avaliable \n ";
						 	       goto Private_menu1;
						 }
			
					}
					
					 else if(enter==2){
						  goto Private_menu1;
					}
					
					 else {
						 goto Options;
					}
					
	 			}
	 			
				else if(press==2){
					Private_menu2:
					cout<<"*********** \n";
					cout<<"Bike details  \n";
					cout<<"Total number of bike = "<<total_no_bike<<" \n";
					cout<<"Total number of bike avaliable \n";
					cout<<"Rent a bike for 500-RS per 1Km \n";
					cout<<"Enter 1 for booking \n ";
					cout<<"Enter 2 for private cab details \n";
					cout<<"Enter 3 for go back to main menu \n ";
					int enter;
					cin>>enter;	
					system("cls");
					
					if(enter==1){
						  cout<<"Enter number of bike you want ? \n";
					      cin>> bike_no;
					   if(bike_no<=total_no_bike){   
					        int day, month;
			                cout<<"Enter date and month (dd mm): "; cin>>day>>month; 			//use data class
			                int b; 
			                cout<<"Do you want to book (1/0)";cin >> b;     
					        if(b == 1){
					            cout<<"Enter kilometers \n ";
					            cin>>kilometers;
								this->D_Pri.setDate(day,month); 	
						        cout<<"Enter kilometers \n ";
	                            cost=kilometers*500;
						        cout<<"expected cost = "<<cost<<" \n";
					            total_no_bike=total_no_bike-bike_no; 
								cout<<"press any key to go to main menu: ";
				                getch();
				                system("cls");
				                goto Options;
				                }
					        else{
					        	cout<<"no booking \n ";
					        	system("cls");
					        	goto Main_menu1;
							}
					}
					   else if(bike_no>total_no_bike){
					         cout<<" Sorry too many bikes not avaliable    \n ";
						     goto Private_menu2;
					}
				}
				
				    else if(enter==2){
					    goto Private_menu1;
				}
				
				    else{
				    	system("cls");
					    goto Options;
				}
			} 

			}
			else if(select==2){
				goto Options;
			}
}
	if(option==2){
		    Main_menu2:
		    int select;
			 cout<<"******************\n";
			 cout<<"___Welcome for booking Public Transport___ \n";
			 cout<<"  Enter 1 for public cab options \n";
			 cout<<"  Enter 2  for main menu \n ";
			 cin>>select;
			 system("cls");
			if(select==1){
				Public_menu1:
				int press;
				cout<<"*********** \n";
				cout<<" Cab options \n  1- Bus \n  2-  Vans \n ";
				cout<<"Enter 1 for Bus details \n ";
				cout<<"Enter 2 for Vans details \n ";
				cin>>press;
				system("cls");
				
				if(press==1){
					int count=0;
					int enter;
					cout<<"*********** \n";
					cout<<"Bus detals  \n";
					cout<<"Total number of Bus = "<<total_no_buses<<" \n";
					cout<<"Total number of Bus avaliable = "<<total_no_buses<<" \n" ;
					cout<<"Total number of seats in one Bus = 15 \n";
					cout<<"Total number of seats avaliable in Bus "<<no_seats_bus<<" \n";
					cout<<"Rent a Bus for 1500-RS per person \n";
					cout<<"Enter 1 for booking \n";
					cout<<"Enter 2 for public cab details \n ";
					cout<<"Enter 3 for go back to main menu \n ";
					cin>>enter;
					system("cls");
					
					if(enter==1){
					cout<<"Enter number of seats in bus you want ? \n";
					cin>> no_seats;
					
					     int day, month;
			                    cout<<"Enter  date and month (dd mm): "; cin>>day>>month; 			//use data class
			                    int b; 
			                    cout<<"Do you want to  book (1/0)";cin >> b;     
					            if(b == 1){
								   	this->D_Pub.setDate(day,month); 
								   	this->D_Pub.show(); }
					            else{
					            	cout<<"No booking  \n";
					            	system("cls");
									goto Main_menu2;
									}
					
					    if(no_seats==15){
					   	     no_seats_bus=no_seats_bus-no_seats;  
					   	     total_no_buses=total_no_buses-1;
					   	     cost = no_seats*1500;
						 		cout<<"expected cost = "<<cost<<" \n";
					   	     count++;
					   	     cout<<count<<" bus is full \n";
					   	     cout<<"press any key to go to main menu: ";
			                getch();
			                system("cls");
			                goto Options;
				                
					      }
					      
					    else if(no_seats<15){
					   	     no_seats_bus=no_seats_bus-no_seats;  
					   	     total_no_buses=total_no_buses-1;
					   	     cost = no_seats*1500;
						 		cout<<"expected cost = "<<cost<<" \n";
					   	     cout<<"press any key to go to main menu: ";
			                getch();
			                system("cls");
			                goto Options;
			                
					      }
					        
					   	  
					    else if(no_seats<no_seats_bus){
					 	    no_seats_bus=no_seats_bus-no_seats;
					 	    int temp=no_seats-15;
					        int variable=no_seats-temp;
					        
					        if(variable==15){
					     	total_no_buses=total_no_buses-1;
					     	count++;
					     	//cout<<"bus is fulled \n";
						 }
						 
					 	    while(temp>=15){
					 	      temp=temp-15;
					 	      total_no_buses=total_no_buses-1;
					 	      count++;
					 	      //cout<<"bus is fulled \n";
					    	}
					 	      if(temp<15){
						 	  //cout<<"temp is less than 15 "<<temp;  }
						      cost = no_seats*1500;
						 		cout<<"expected cost = "<<cost<<" \n";
						      cout<<"press any key to go to main menu: ";
			                getch();
			                system("cls");
			                goto Options;
			                
					          cout<<count<<" bus is full \n";
					      }
				}
					      
			            else if(no_seats==no_seats_bus){
			                   no_seats_bus=no_seats_bus-no_seats;
			                   total_no_buses=total_no_buses-total_no_buses;
			                   count++;
			                   cout<<count<<" bus is full \n";
			                   cost = no_seats*1500;
						 		cout<<"expected cost = "<<cost<<" \n";
			                   cout<<"press any key to go to main menu: ";
				                getch();
				                system("cls");
				                goto Options;
				                
			                }
  
				        else {
					   	   cout<<" Sorry no bus avaliable \n";
					   	   goto Public_menu1; }
					
					
			
			}
				    else if(enter==2){
				    	system("cls");
					    goto Public_menu1; }
					      
				    else {
				    	system("cls");
						 goto Options;	}
					
	 	}
				else if(press==2){
					Public_menu2:
					cout<<"*********** \n";
					cout<<"Vans details  \n";
					cout<<"Total number of Vans = "<<total_no_vans<<" \n";
					cout<<"Total number of Vans avaliable "<<total_no_vans<<" \n";
					cout<<"Total number of seats in one van = 8 \n";
					cout<<"Total number of seats avaliable in Vans "<<no_seats_vans<<" \n";
					cout<<"Rent a Van for 1000-RS per person \n";
					cout<<"Enter 1 for booking \n ";
					cout<<"Enter 2 for public cab details \n";
					cout<<"Enter 3 for  go back to main menu \n ";
					int enter;
					
					int count=0;
					cin>>enter;
					system("cls");
						
					if(enter==1){
					   cout<<"Enter number of seats in van you want ? \n";
					   cin>> no_seats;
					   
					          int day, month;
			                    cout<<"Enter  date and month (dd mm): "; cin>>day>>month; 			//use data class
			                    int b; 
			                    cout<<"Do you want to  book (1/0)";cin >> b;     
					            if(b == 1){
								   	this->D_Pub.setDate(day,month); 
								   	this->D_Pub.show(); }
					            else{
					            	cout<<"No booking  \n";
					            	system("cls");
								    goto Main_menu2;
									}
					   
					   if(no_seats==8){
					   	     no_seats_vans=no_seats_vans-no_seats;
					   	     total_no_vans=total_no_vans-1;
					   	     cost = no_seats*1000;
						 	cout<<"expected cost = "<<cost<<" \n";
					   	     count++;
					   	     cout<<count<<" Van is full \n";
					   	     cout<<"press any key to go to main menu: ";
			                getch();
			                system("cls");
			                goto Options;
					   }
					   else if(no_seats<8){
					   	     no_seats_vans=no_seats_vans-no_seats;
					   	     total_no_vans=total_no_vans-1;
					   	     cost = no_seats*1000;
						 	cout<<"expected cost = "<<cost<<" \n";
					   	     cout<<"press any key to go to main menu: ";
			                getch();
			                system("cls");
			                goto Options;
					   	  }
					   	      
					    else if(no_seats<no_seats_vans){
					   		no_seats_vans=no_seats_vans-no_seats;
					 	    int temp=no_seats-8;
					        int variable=no_seats-temp;
					        
					          if(variable==8){
					     	    total_no_vans=total_no_vans-1;
					     	    count++;
					     	    //cout<<"Van is fulled \n";
					     	    
						 }
					 	      while(temp>=8){
					 	          temp=temp-8;
					 	          total_no_vans=total_no_vans-1;
					 	          count++;
					 	          //cout<<"Van is fulled \n";
					 	}
					 	          if(temp<8){
						 	          cost = no_seats*1000;
						 			cout<<"expected cost = "<<cost<<" \n";
					        cout<<count<<" Van is full \n";
					        cout<<"press any key to go to main menu: ";
				                getch();
				                system("cls");
				                goto Options;
					   }
				}
			            else if(no_seats==no_seats_vans){
			                  no_seats_vans=no_seats_vans-no_seats;
			                  cout<<total_no_vans<<" van are fulled \n";
			}
					   
					    else {
					   	   
					   	   cout<<" Sorry no van avaliable \n";
					   	   system("cls");
					   	   goto Public_menu1;
					   }
				 
					
				 }
				
				else if(enter==2){
					system("cls");
					 goto Public_menu1;
					 
				}
				
				else{
					system("cls");
				    goto Options ;
				}
			 

			}
			
	}
			else if(select==2){
				system("cls");
				goto Options;

	}		
} 
	else if(option == 3){
		cout<<"redirecting to menu please wait....." <<endl;
		Sleep(1100);	
		system("cls");
	}
 }

//==================================Hotel Class===============================================	

//booked rooms of hotels
int Hotel::avalRoomsSerenaHotel = 20;
int Hotel::avalRoomsPCHotel = 15;
int Hotel::avalRoomsGrandHotel = 10;
float Hotel::totalBill = 0;
int Hotel::getChoice(){
	start:
	int choice; // user choice of hotel
	cout<<"*********************************************** \n";
	cout<<"**               WELCOME SIR/MAM             ** \n";
	cout<<"*********************************************** \n";
	cout<<"Enter the Quality of hotel you want: \n";
	cout<<"press 1 for 5 star hotel \npress 2 for 4 star hotel \npress 3 for 3 star hotel \npress 4 to exit \n"; //printing the available hotels
	cout<<"Enter your choice:";cin>>choice; // geting choice from user; 
	system("cls");
	
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
	int indP = 0; //for room indexing pc
	int indG = 0; //for room indexing grand
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
		system("cls");
		
		if(check == 1){ 
			cout<<"\n*********************************************** \n";
			cout<<"**             DETAIL ABOUT ROOMS            ** \n";
			cout<<"*********************************************** \n\n";
			
			cout<<"Total rooms are: 20"<<endl; //showing the total rooms
			cout<<"Available rooms: "<<avalRoomsSerenaHotel<<endl;//showing the available rooms rooms
			cout<<"Per night charges 30,000PKR \n"; 
			cout<<"press 1 to go back: ";
			int press; //to go back
			cin>>press; //getin input from user
			system("cls");
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
				system("cls");
				goto menu;
			}
			else{
				system("cls");
				goto menu;
			}
		}
		else if(check == 3){
			cout<<"\n*********************************************** \n";
			cout<<"**        WELCOME TO AVAILABLE ROOMS         ** \n";
			cout<<"*********************************************** \n\n";
			
			char *p; //pointer 
			int i; //index for pointer
			int cp = 0; 
		 	p = serenaRooms; //assigning values to pointer
			for(int j = 1;j<=20;j++){
				int count = 1; //to count number of room is present
				/* loop until null is found */
		  		for(i = 0; p[ i ]; i++){
		  			if(j == p[i]){
						count++;
						break;
					}
		  		}
		  		if(count == 1){
		  			if(cp % 5 == 0){
		  				cout<<endl;
					}
					cout<<"Room"<<j<<"\t";					
		  			cp++;
				}		
			}
			getch();
			int c; //to go beck;
			cout<<"\npress 1 to go beck: "; cin>>c;
			if(c == 1){
				system("cls");
				goto menu;
			}
			else{
				system("cls");
				goto menu;
			}
		}
		else if(check == 4){
		s: //start booking
		cout<<"*********************************************** \n";
		cout<<"**         WELCOME TO BOOKING MENU           ** \n";
		cout<<"*********************************************** \n\n";
		
		if(avalRoomsSerenaHotel > 0){
			RNS:
			char *p; //pointer 
			p = serenaRooms;
			int i; //index for pointer
			int roomNum; //room number
			cout<<"Enter room number: "; cin>>roomNum;
			if(roomNum > 0 and roomNum <=20){
				/* loop until null is found */
		  		for(i = 0; p[ i ]; i++){
		  			if(roomNum == p[i]){
						cout<<"Sorry room is already Booked. \npress any key to try again\n";
						getch();
						goto RNS;
//						break;
					}
//					else{
//					}
		  		}
			}else{
				cout<<"\nPlease enter room Number between (1-20) \nPress any key to try again \n";
				getch();
				goto RNS;
			}
			
			
			int day, month, days;
			cout<<"Enter check in date (dd mm): "; cin>>day>>month; 			//use data class to store date 
			cout<<"Enter the number of days you will stay: "; cin>>days;
			int b; //for confirm booking
			cout<<"Do you want to confirm booking (1/0)";cin >> b;
			if(b == 1){
				this->dS[roomNum].setDate(day,month,days); //setting date
				this->serenaRooms[indS] = roomNum; //storing data of rooms
				this->totalBill += (30000*days);
				avalRoomsSerenaHotel--;	
				cout<<"bill: "<<this->totalBill<<endl;
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
			system("cls");
			goto menu;
		} 
		else {
			system("cls");
			goto menu;
		}
		}
		else if (check == 5){ 
		system("cls");
			goto start; // if check is 2 then goto start to run again 
		}
		else{
			cout<<"valid choice.. redirecting to menu"<<endl; //if user enter wrong input
			goto menu;
			system("cls"); 
//			getch();
		}
		
	}
//	======================================================PC HOTEL===============================================================
	if(choice == 2){
		
		menu2: //menu
		cout<<"*********************************************** \n";
		cout<<"**           WELCOME TO PC HOTEL             ** \n";
		cout<<"*********************************************** \n\n";
		cout<<"press 1) for Details  \n";
		cout<<"press 2) for check Detail about Booked rooms \n";
		cout<<"press 3) for check Detail about Available rooms \n";
		cout<<"press 4) for room booking  \n";
		cout<<"press 5) for goto Main Menu \n";
		int check; //gets the choice of the user
		cin>>check; // for user input
		
		if(check == 1){ 
			cout<<"\n*********************************************** \n";
			cout<<"**             DETAIL ABOUT ROOMS            ** \n";
			cout<<"*********************************************** \n\n";
			cout<<"Total rooms are: 15"<<endl; //showing the total rooms
			cout<<"Available rooms: "<<avalRoomsSerenaHotel<<endl;//showing the available rooms rooms
			cout<<"Per night charges 20,000PKR \n"; 
			cout<<"press 1 to go back: ";
			int press; //to go back
			cin>>press; //getin input from user
			system("cls");
			if(press == 1){ 
				goto menu2; //goto menu
			}
			else{
				goto menu2; //getting menu
			}	
		}
		
		else if(check == 2){
			cout<<"\n*********************************************** \n";
			cout<<"**         DETAIL ABOUT BOOKED ROOMS         ** \n";
			cout<<"*********************************************** \n\n";
			
			for(int i = 1;i<=15;i++){
				for(int j: pcRooms){
					if(i == j){
						cout<<"Room"<<i<<"\t";		
						break;
					}
				}	
			}
			cout<<endl;
			int d; //to go beck;
			cout<<"\npress 1 for more detail \npress 2 to go beck: "; cin>>d;
			if(d == 1){
				int num; //room number
				cout<<"enter room number  for more details: ";cin>>num;
				cout<<"\n=======================================\n";
				dP[num].print();
				cout<<"\n=======================================\n";
				cout<<endl;
				getch();
				system("cls");
				goto menu2;
			}
			else{
				system("cls");
				goto menu2;
			}
		}
		else if(check == 3){
			cout<<"\n*********************************************** \n";
			cout<<"**        WELCOME TO AVAILABLE ROOMS         ** \n";
			cout<<"*********************************************** \n\n";
			
			char *p; //pointer 
			int i; //index for pointer
			int cp = 0; 
		 	p = pcRooms; //assigning values to pointer
			for(int j = 1;j<=15;j++){
				int count = 1; //to count number of room is present
				/* loop until null is found */
		  		for(i = 0; p[ i ]; i++){
		  			if(j == p[i]){
						count++;
						break;
					}
		  		}
		  		if(count == 1){
		  			if(cp % 5 == 0){
		  				cout<<endl;
					}
					cout<<"Room"<<j<<"\t";					
		  			cp++;
				}		
			}
			getch();
			int c; //to go beck;
			cout<<"\npress 1 to go beck: "; cin>>c;
			system("cls");
			if(c == 1){
				goto menu2;
			}
			else{
				goto menu2;
			}
		}
		else if(check == 4){
//		sp: //start booking
		cout<<"*********************************************** \n";
		cout<<"**         WELCOME TO BOOKING MENU           ** \n";
		cout<<"*********************************************** \n\n";
		
		if(avalRoomsPCHotel > 0){
			RNP:
			char *p; //pointer 
			p = pcRooms;
			int i; //index for pointer
			int roomNum; //room number
			cout<<"Enter room number: "; cin>>roomNum;
			if(roomNum > 0 and roomNum <=15){
				/* loop until null is found */
		  		for(i = 0; p[ i ]; i++){
		  			if(roomNum == p[i]){
						cout<<"Sorry room is already Booked. \npress any key to try again\n";
						getch();
						goto RNP;
					}
		  		}
			}else{
				cout<<"\nPlease enter room Number between (1-15) \nPress any key to try again \n";
				getch();
				goto RNP;
			}
			
			
			int day, month, days;
			cout<<"Enter check in date (dd-mm): "; cin>>day>>month; 			//use data class to store date 
			cout<<"Enter the number of days you will stay: "; cin>>days;
			int b; //for confirm booking
			cout<<"Do you want to confirm booking (1/0)";cin >> b;
			if(b == 1){
				this->dP[roomNum].setDate(day,month,days); //setting date
				this->pcRooms[indS] = roomNum; //storing data of rooms
				this->totalBill += (20000*days);
				avalRoomsPCHotel--;	
			indP++;
			}else{
				cout<<"Booking is cancel...";
			}	
		} else{
			 cout<<"Sorry Rooms are full..";
		};
		
		int get; //to get menu
		cout<<"press 1 for menu: "; cin>>get; //geting answer from the user
		system("cls");
		if (get == 1){
			goto menu2;
		} 
		else {
			goto menu2;
		}
		}
		else if (check == 5){ 
			system("cls");
			goto start; // if check is 2 then goto start to run again 
		}
		else{
			cout<<"valid choice.. redirecting to menu"<<endl; //if user enter wrong input
			goto menu2;
			system("cls"); 
//			getch();
		}
		
	}
	//	======================================================Grand HOTEL===============================================================
	else if(choice == 3){
		
		menu3: //menu
		cout<<"*********************************************** \n";
		cout<<"**         WELCOME TO GRAND HOTEL           ** \n";
		cout<<"*********************************************** \n\n";
		cout<<"press 1) for Details  \n";
		cout<<"press 2) for check Detail about Booked rooms \n";
		cout<<"press 3) for check Detail about Available rooms \n";
		cout<<"press 4) for room booking  \n";
		cout<<"press 5) for goto Main Menu \n";
		int check; //gets the choice of the user
		cin>>check; // for user input
		
		if(check == 1){ 
			cout<<"\n*********************************************** \n";
			cout<<"**             DETAIL ABOUT ROOMS            ** \n";
			cout<<"*********************************************** \n\n";
			cout<<"Total rooms are: 10"<<endl; //showing the total rooms
			cout<<"Available rooms: "<<avalRoomsSerenaHotel<<endl;//showing the available rooms rooms
			cout<<"Per night charges 10,000PKR \n"; 
			cout<<"press 1 to go back: ";
			int press; //to go back
			cin>>press; //getin input from user
			system("cls");
			if(press == 1){ 
				goto menu3; //goto menu
			}
			else{
				goto menu3; //getting menu
			}	
		}
		else if(check == 2){
			cout<<"\n*********************************************** \n";
			cout<<"**         DETAIL ABOUT BOOKED ROOMS         ** \n";
			cout<<"*********************************************** \n\n";
			
			for(int i = 1;i<=10;i++){
				for(int j: grandRooms){
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
				dG[num].print();
				cout<<"\n=======================================\n";
				cout<<endl;
				getch();
				system("cls");
				goto menu3;
			}
			else{
				system("cls");
				goto menu3;
			}
		}
		else if(check == 3){
			cout<<"\n*********************************************** \n";
			cout<<"**        WELCOME TO AVAILABLE ROOMS         ** \n";
			cout<<"*********************************************** \n\n";
			
			char *p; //pointer 
			int i; //index for pointer
			int cp = 0; 
		 	p = grandRooms; //assigning values to pointer
			for(int j = 1;j<=10;j++){
				int count = 1; //to count number of room is present
				/* loop until null is found */
		  		for(i = 0; p[ i ]; i++){
		  			if(j == p[i]){
						count++;
						break;
					}
		  		}
		  		if(count == 1){
		  			if(cp % 5 == 0){
		  				cout<<endl;
					}
					cout<<"Room"<<j<<"\t";					
		  			cp++;
				}		
			}
			getch();
			int c; //to go beck;
			cout<<"\npress 1 to go beck: "; cin>>c;
			system("cls");
			if(c == 1){
				goto menu3;
			}
			else{
				goto menu3;
			}
		}
		else if(check == 4){
//		sp: //start booking
		cout<<"*********************************************** \n";
		cout<<"**         WELCOME TO BOOKING MENU           ** \n";
		cout<<"*********************************************** \n\n";
		
		if(avalRoomsPCHotel > 0){
			RNG:
			char *p; //pointer 
			p = grandRooms;
			int i; //index for pointer
			int roomNum; //room number
			cout<<"Enter room number: "; cin>>roomNum;
			if(roomNum > 0 and roomNum <=10){
				/* loop until null is found */
		  		for(i = 0; p[ i ]; i++){
		  			if(roomNum == p[i]){
						cout<<"Sorry room is already Booked. \npress any key to try again\n";
						getch();
						goto RNG;
					}
		  		}
			}else{
				cout<<"\nPlease enter room Number between (1-10) \nPress any key to try again \n";
				getch();
				goto RNG;
			}
			
			
			int day, month, days;
			cout<<"Enter check in date (dd mm): "; cin>>day>>month; 			//use data class to store date 
			cout<<"Enter the number of days you will stay: "; cin>>days;
			int b; //for confirm booking
			cout<<"Do you want to confirm booking (1/0)";cin >> b;
			if(b == 1){
				this->dG[roomNum].setDate(day,month,days); //setting date
				this->grandRooms[indG] = roomNum; //storing data of rooms
				this->totalBill += (10000*days);
				avalRoomsGrandHotel--;	
			indG++;
			}else{
				cout<<"Booking is cancel...";
			}	
		} else{
			 cout<<"Sorry Rooms are full..";
		};
		
		int get; //to get menu
		cout<<"press 1 for menu: "; cin>>get; //geting answer from the user
		system("cls");
		if (get == 1){
			goto menu3;
		} 
		else {
			goto menu3;
		}
		}	
		else if (check == 5){ 
			system("cls");
			goto start; // if check is 2 then goto start to run again 
		}
		else{
			cout<<"invalid choice.. redirecting to menu"<<endl; //if user enter wrong input
			goto menu3;
			system("cls"); 
		}
	}
	else if(choice == 4){
		cout<<"redirecting to menu please wait....." <<endl;
		Sleep(1100);	
		system("cls");
	}
	else{
		cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
		system("cls"); //clear the console screen
		goto start; // if user enter wrong choice then goto start again	
	}
	
}
//=============================================================Billing Class================================================================
void Billing::printBill(){
			ofstream outf("receipt.txt");
			{
				outf <<"----------------------Tiny Coders Travel Agency------------------"<<endl;
				outf <<"--------------------------------Receipt--------------------------"<<endl;
				outf <<"_________________________________________________________________"<<endl;
				
				outf<<"Customer ID: " <<this->id_no <<endl <<endl;
				outf<<"Description\t\t Total" <<endl;
				outf<<"Travel Cost:\t\t" <<fixed <<setprecision(2) <<this->cost <<"PKR"<<endl;
				outf<<"Hotel Cost:\t\t" <<fixed <<setprecision(2) <<this->totalBill <<"PKR"<<endl;
				
				outf <<"__________________________________________________________________" <<endl;
				outf <<"Total Charge:\t\t "<<fixed <<setprecision(2) <<this->cost + this->totalBill <<"PKR" <<endl;
				outf <<"__________________________________________________________________" << endl;
				outf <<"----------------------------THANK YOU-----------------------------" <<endl;
			}
			outf.close();
	}
void Billing::showBill(){
			char all[999];
			ifstream inf("receipt.txt");
			{
				if(!inf){
					cout<<"File Opening Error! \n";
				}
				while(!(inf.eof())){
					inf.getline(all, 999);
					cout<<all <<endl;
				}
			}
			inf.close();
			
	}

