#include <iostream>
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
		}
		void mprint(){
			int n = this->mCount+1;
			cout<<"\nMonth: ";
			
			for(int i = 0;i<n;i++){
				cout<<months[i]<<" ";
			}
		}
};


int main(){
	Date d1;
	d1.setDate(29,6, 33);
	d1.print();
	d1.mprint();
}
