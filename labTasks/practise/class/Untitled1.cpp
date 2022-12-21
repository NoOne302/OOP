#include <iostream>
using namespace std;
class time{
	private:
	int hour,min,sec;
	public:
		//constructors
		//declaration of default values
		time(){
			this-> hour=0;
			this-> min=0;
			this-> sec=0;
		}
		//declaration of fixed value
		time(int x,int y,int z){
			this-> hour=x;
			this-> min=y;
			this-> sec=z;
		}
		//for get hours mins and sec
		int geth(){
			return this->hour;
		}
		int getm(){
			return this->min;
		}
		int gets(){
			return this->sec;
		}
		//for display the final time
		void displaytime(){
			cout<<hour<<":"<<min<<":"<<sec;
		}
		//for adding the time of t1 and t2 and store in t3
		int addtime(time t1,time t2){
			this->hour=t1.geth()+t2.geth();
			this-> min=t1.getm()+t2.getm();
			this->sec=t1.gets()+t2.gets();
			//conditions for if hours>23 or min>59 or sec>59
			if(hour>=24){
				hour=hour-24;
				}
			if(min>=60){
				min=min-60;
				hour++;
			}
			if(sec>=60){
				sec=sec-60;
				min++;
			}
		}
			//declaration for t3 by t1+t2
		
};

int main(){
	//creating objects
	time t1(2,3,4),t2(4,35,32),t3;
	t3.addtime(t1,t2);
	t3.displaytime();

	return 0;

}
