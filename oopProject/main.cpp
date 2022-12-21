#include <iostream>
#include <fstream> //for file handling
#include <iomanip> //show floating point values
#include <windows.h> //to use system functions
#include <stdlib.h>
#include <conio.h>
#include "class.h"

using namespace std;
//==================================================Main Class====================================================
void menu(){
	int mainChoice;
	int inChoice;
	int Menu;
	start:
	cout<<"=================================================== " <<endl;
	cout<<"|             *  Tiny Coders Travels   *          |" <<endl;
	cout<<"\n|----------------------Main Menu------------------|" <<endl;
	cout<<"|                                                 |" <<endl;
	cout<<"|  Customer Management -> 1                       |" <<endl;
	cout<<"|  Cabs Management     -> 2                       |"<<endl;
	cout<<"|  Hotel Management    -> 3                       |" <<endl;
	cout<<"|  Charges & Bill      -> 4                       |" <<endl;
	cout<<"|  Exit                -> 5                       |" <<endl;
	cout<<"|                                                 |" <<endl;
	cout<<"=================================================== " <<endl;
	
	cout<<"\nEnter your Choice: "; cin>>mainChoice;
	system("cls");
	Customer a1;
	Transport a2;
	Hotel a3;
	Billing a4;
	if(mainChoice == 1){
		a1.information();
		int chc; // user choice
		
		cout<<"Press 1 to show Information or press other key to go menu: " ;cin>>chc;
		if (chc ==1){
			a1.print();
			system("cls");
			goto start;
			
		}
		else{
			goto start;
		}
		system("cls");
		goto start;
	}
	else if(mainChoice ==2){
		a2.details();
		system("cls");
		goto start;
	}
	else if(mainChoice == 3){
		a3.hotelDetails();
		system("cls");
		goto start;
	}
	else if(mainChoice == 4){
		cout<<"----->Get you receipt <------" <<endl;
		a4.printBill();
		cout<<"Your receipt is already printed you can get it from file path\n" <<endl;
		cout<<"to display the you receipt in the screen, enter 1: or Enter another key to back main menu: "<<endl;
		
		cin>>Menu;
		if(Menu == 1){
			system("cls");
			a4.showBill();
			cout<<"\npress 1 to redirect main menu: ";
			getch();
			system("cls");
			menu();
		}
		else{
			system("cls");	
			menu();
		}
	}
	else if(mainChoice == 5){
		cout <<"----GOOD-BYE----" <<endl;
		Sleep(999);
		system("cls");
	}
	else{
		cout<<"Invalid input! Redirecting to previoius Menu \n Please wait! "<<endl;
		Sleep(1100);
		system("cls");
		menu();
	}

}
int main(){
	menu();

}
