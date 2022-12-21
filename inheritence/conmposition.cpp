#include<iostream>
using namespace std;
class wheel{
	string make;
	int price;
	public:
	wheel(){
		cout<<"wheel constructor"<<endl;
	}
	wheel(string make,int price){
		this->make=make;
		this->price=price;
	}
	void print(){
		cout<<make<< " "<<price;
	}
};
class car{
	int num;
	wheel w;
	public:
	car(){
		cout<<"Car Constructor"<<endl;	
}
	car(int num,wheel w){
		this->w=w;
		this->num=num;	
	}
	void print(){
		w.print();
		cout<<num;
			}
};
int main(){
	
	wheel w("A",2500);
	car c(1,w);
	c.print();
	
}
