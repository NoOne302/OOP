#ifndef CLASS_H
#define CLASS_H
using namespace std;

//===================================================Customer class=====================================
class Customer{
    protected:
     string First_name;
     string Last_name;
     string phone_number;
     string address;
     string Gender;
     string email;
     static int id_no;
    public:
      Customer();
      void print();
      void information();
};

//===========================================Date class===================================================
class Date{
	protected: 
		int numDays; // for total days that he will stay
		int day[100]; //date of the days
		int months[12]; //month
		int mCount; // number of the months
		int Day;
	    int month;
		
	public:
		void setDay(int Day,int Days);
		void setDate(int Day,int month, int Days );
		void setDate(int day,int month);
		void show();
		void print();
};

//==========================================================Transport class========================================
class Transport{
	protected:
		int kilometers;
		static float cost;
		int car_no;
		int bike_no;
		int no_seats;
	    static int no_seats_bus;
		static int no_seats_vans;
		static int total_no_cars;
		static int total_no_bike;
		static int total_no_vans;
		static int total_no_buses;
		Date D_Pub; // Date for public transport
		Date D_Pri; //Date for private tranport
	 public:	
	      int user_choice();
		  void details();	
		  static float getCost();
}; 
//==============================================================Hotel class=======================================================
class Hotel {
	protected:
		static int avalRoomsSerenaHotel;
		static int avalRoomsPCHotel;
		static int avalRoomsGrandHotel;
		char serenaRooms[20];
		char pcRooms[15];
		char grandRooms[10];
		Date dS[20]; //date of serena hotel
		Date dP[15];//date of pc hotel
		Date dG[10];//date of grand hotel
		static float totalBill; //to store total bill 
		
	public:
		int getChoice(); //to get hotel choice from user
		void hotelDetails(); //show  details about hotels
		static float getBill();
			
};
//=============================================================Billing Class================================================================
class Billing :public Hotel,Transport,Customer{
	private:
//		float tax;
	public:
		void printBill();
		void showBill();
};

#endif
