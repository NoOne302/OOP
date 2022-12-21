#include<iostream>
using namespace std;
class counter{
	int count;
	int item;
	public:
	int inc_count(){
		count++;
	}
	int printCount(){
		cout<<count<<endl;
	}
	void operator ++ (){
		++count;
		++item;
	}
};
int main(){
	counter c1,c2;
	int i=0;
	c1.printCount();
	c2.printCount();
	++i;
	++c1;
	++c1;
	++c2;
	cout<<i<<endl;
	c1.printCount();
	c2.printCount();	
}
