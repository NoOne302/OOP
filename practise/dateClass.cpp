#include <iostream>
using namespace std;

//data class
class Date{
	protected: 
//		int numDays; // for total days that he will stay
		int day[]; //date of the days
		int months[]; //month
		int m;
	public:
		void setDay(int inDay,int outDay, int inMonth, int outMonth){
	  		int dIndex = 0;
			for(int i = inMonth;i<=outMonth;i++){
				for(int k = inDay; k <=30;k++){
					if(k == outDay and i == outMonth){
						this->day[dIndex] = k; 
//						cout<<"month: "<<i<<" day: "<<k<<endl;
						break;
					}
					else{
						this->day[dIndex] = k; 
				 }
//					cout<<"month: "<<i<<" day: "<<k<<endl;
					inDay = 1;
					dIndex++;
				}
			}
		}
		void setDate(int inMonth, int outMonth){
			int tMon = outMonth - inMonth;
			this->m = tMon;
			for(int i = 0;i<=tMon;i++){
				this->months[i] = inMonth;
				inMonth++;
			}
			
//			for(int i = 0;i<=tMon;i++){
//				cout<<months[i]<<" ";
//				inMonth++;
//			}
		}
		void print(){
			for(int i = 0;i<5;i++){
				cout<<day[i]<<" ";
			}
		}
		void mprint(){
			for(int i = 0;i<m;i++){
				cout<<months[i]<<" ";
			}
		}
};


int main(){
	Date d;
	d.setDate(4,5);
	d.setDay(29, 3, 4,5);
//	d.print();
//	d.mprint();
}
