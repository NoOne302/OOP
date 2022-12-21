#include <iostream>
using namespace std;

//data class
class Date{
	protected: 
//		int numDays; // for total days that he will stay
		int day[]; //date of the days
		int months[]; //month
		int tMonth;
	public:
		void setDate(int inDay,int outDay, int inMonth, int outMonth){
			int tMonths = outMonth - inMonth;
			int dIndex = 0;	
			this->tMonth = tMonths;
			cout<<this->tMonth;
			for(int i = 0; i<=tMonths;i++){
//				this->months[i] = inMonth;
				cout<<"month: "<<tMonth;
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
//				cout<<"month: "<<tMonth;
				inMonth++;
			}
		}
		void print(){
			for(int i = 0;i<5;i++){
				cout<<day[i]<<" ";
			}
		}
		void mprint(){
			cout<<"month: "<<tMonth;
//			for(int i = 0;i<=tMonth;i++){
//				cout<<months[i]<<" ";
//			}
		}
};


int main(){
	Date d;
	d.setDate(29, 3, 4,5);
//	d.print();
//	d.mprint();
}
