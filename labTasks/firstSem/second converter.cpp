#include <iostream>

using namespace std;
int main(){
	int hour,minute,second,seconds;
	cout<<"enter seconds /n";
	cin>>second;
	hour = second/3600;
	minute = (second % 3600) / 60;
	seconds = (second%3600)%60;
	
	cout<<hour<<"Hour "<<minute<<"minutes "<<second<<"seconds";
	
	return 0;
	
	
	
}
