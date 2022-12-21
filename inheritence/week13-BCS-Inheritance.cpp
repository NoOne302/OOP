#include<iostream>

using namespace std;
class counter {
	protected:
		int count;	
	public:
	counter(){
		cout<<"counter Default COnstructor"<<endl;
	}
	void operator ++(){
		++count;
	}
	void print(){
		cout<<count<<endl;
	}
};
class countDown : public counter{
	public:
	countDown(){
		cout<<"CountDown Constructor"<<endl;
	}
	void operator -- (){
		--count;
	}
	void print(){
		cout<<"Count value in CountDown"<<count<<endl;
	}
};
int main(){
	countDown c1; //derived
	++c1;
	c1.print();
	--c1;
	c1.print();
	cout<<"=======================Base Class Object"<<endl;
	counter c;
	++c;
	c.print();
	//counter c; //base class
}
