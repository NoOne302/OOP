#include <iostream>
using namespace std;

struct time{
	int hour;
	int minute;
	int second;
};
int calcSec(time t1);
int main () {
	time t1;
	cout<<"enter the number of hours: ";
	cin>>t1.hour;
	cout<<"enter the number of minutes: ";
	cin>>t1.minute;
	cout<<"enter the number of seconds: ";
	cin>>t1.second;
	
	int totalSec = calcSec(t1);
	cout<<"total seconds are: "<<totalSec<<endl;
	
}

int calcSec(time t1){
	int totalSec;
	totalSec = (t1.hour*60*60)+(t1.minute*60)+(t1.second);
	return totalSec;
}
