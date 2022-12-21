#include <iostream>
using namespace std;
int main(){
	int days,hours,minutes,seconds;
	cout<<"enter days: ";
	cin>>days;
	cout<<"enter hours:";
	cin>>hours;
	cout<<"enter minutes:";
	cin>>hours;
	seconds = (days*86400) + (hours*3600) + (minutes * 60);
	cout<<"seconds= "<<seconds;

	return 0;

}
