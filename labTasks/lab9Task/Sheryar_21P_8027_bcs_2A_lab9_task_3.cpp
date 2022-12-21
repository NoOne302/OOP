#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

//declaring a class named Time
class Time{
	int hour;
	int minute;
	int second;
	
	public://declaring construtor functions
		Time(); // constructor (no args)
		Time(int hour, int minute, int second); //constructor (3 args)
		Time operator + (const Time& t); //+ operator fucnction
		Time operator ++ (); // preincrement operator 
		Time operator ++ (int); //post increment operator
		Time operator --  (); //predecriment operator
		Time operator -- (int); //post decripent operator
		
		//declaring member funtions
		void display(); //display time
};
//initilizing consturtor fuctions
Time::Time(){
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
}
Time::Time(int hour, int minute, int second){
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

//initializing member functions
void Time::display(){
	cout<<"time: "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
}
//add two time objects and returns the value
Time Time::operator + (const Time& t){
	Time temp; //temp variable to store and return values
	int totalTimeX = ((this->hour*3600)+(this->minute*60) + this->second);
	int totalTimeY =  ((t.hour*3600)+(t.minute*60) + t.second);
	int totalTime = totalTimeX + totalTimeY;
	temp.hour = totalTime / 3600;
	temp.minute = (totalTime % 3600) / 60;
	temp.second = (totalTime % 3600)%60; 
	return temp; // returning the value
}
Time Time::operator ++ (){
	//this is for pre increment 
	Time temp; //temp variable to store and return values
	temp.hour = this->hour++;
	if (this->minute < 59){ // if minute is <59 then increment 
		temp.minute = this->minute++; 
	}
	else{
		temp.hour = this->hour++; //if not then increment in hours
		this->minute = 0;
		temp.minute = this->minute;
	}
	if(this->second < 59){ // if second is less then 59 then increment
		temp.second = this->second++;
	}
	else{
		temp.minute = this->minute++; //if not then increment in minutes
		this->second = 0;
		temp.second = this->second;
	}
	return temp; //returning the values
}

Time Time::operator ++ (int){
	//this is for post increment 
	Time temp; //temp variable to store and return values
	temp.hour = this->hour++;
	if (this->minute < 59){ // if minute is <59 then increment 
		temp.minute = this->minute++; 
	}
	else{
		temp.hour = this->hour++; //if not then increment in hours
		this->minute = 0;
		temp.minute = this->minute;
	}
	if(this->second < 59){ // if second is less then 59 then increment
		temp.second = this->second++;
	}
	else{
		temp.minute = this->minute++; //if not then increment in minutes
		this->second = 0;
		temp.second = this->second;
	}
	return temp; //returning the values
}

Time Time::operator -- (){
	//this is for pre decriment 
	Time temp; //temp variable to store and return values
	if (this->hour >0){ //if hour is > 0 then decriment 1 hour
		temp.hour = this->hour--;
	}
	
	if (this->minute > 0){ // if minute is >0 then decriment 
		temp.minute = this->minute--; 
	}
	else{
		temp.hour = this->hour--; //if not then decriment 1 in hours and min = 59
		this->minute = 59;
		temp.minute = this->minute;
	}
	if(this->second > 0){ // if second >0 then decriment in second
		temp.second = this->second--;
	}
	else{
		temp.minute = this->minute--; //if not then decriment in min in sec = 59
		this->second = 59;
		temp.second = this->second;
	}
	return temp; //returning the values
}

Time Time::operator -- (int){
	//this is for post decriment 
	Time temp; //temp variable to store and return values
	if (this->hour >0){ //if hour is > 0 then decriment 1 hour
		temp.minute = this->hour--;
	}
	
	if (this->minute > 0){ // if minute is >0 then decriment 
		temp.minute = this->minute--; 
	}
	else{
		temp.hour = this->hour--; //if not then decriment 1 in hours and min = 59
		this->minute = 59;
		temp.minute = this->minute;
	}
	if(this->second > 0){ // if second >0 then decriment in second
		temp.second = this->second--;
	}
	else{
		temp.minute = this->minute--; //if not then decriment in min in sec = 59
		this->second = 59;
		temp.second = this->second;
	}
	return temp; //returning the values
}

int main(){
	//declaring time objects
	Time t1(5,34,29),t2(2,61,70),t3;
//	t1++;
//	cout<<"post increment";
//	t1.display();
//	++t1;
//	cout<<"pre increment";
//	t1.display();
	t1--;
	cout<<"post decrement";
	t1.display();
	--t1;
	cout<<"pre decrement";
	t1.display();
	t3 = t1 + t2;
	t3.display();
	
}
