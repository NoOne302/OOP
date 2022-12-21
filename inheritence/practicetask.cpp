#include<iostream>

using namespace std;

int main(){
	
	float po,s,pe;
	cout <<" pound:"; cin>>po;
	cout <<" sterling:";cin>>s;
	cout <<" penny:";cin>>pe;
	
	float ns= po + (s/20.0 )+ (pe/240.0);
	cout<<ns;
}
