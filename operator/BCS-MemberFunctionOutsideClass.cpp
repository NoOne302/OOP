#include<iostream>
int count=0;
using namespace std;
class Data{
	private:
	int item;
	public:
	int getItem();
	Data();
	Data(int item);
	Data(int i,int j, int k);
	~Data();
	void print();
};
int Data::getItem(){ 
	return item;
	}
Data::Data(){ //Default
		item=90;
		cout<<"Default Constructor for "<<item <<endl;
		}
Data::Data(int item){ //parametrized 
		this->item=item;
		item=this->item;
		item=item;
		cout<<"parametrized 1 Constructor for "<<item <<endl;
	}
void Data::print(){
		cout<<item<<endl;
	}
Data::~Data(){
		cout<<"Destructor for"<<item<<endl;
	}
Data::Data(int i,int j, int k){ //parametrized 
		this->item=i;
		cout<<"Parametrized 2 Constructor for "<<item <<endl;
	}
void myFun(){
	Data d4(76);
}
Data d6(33,44,550);
int main(){
	Data d1,d2(30),d3(40,2,3);
	myFun();
	Data d5(122);
	d1.print();
	d2.print();
	d3.print(); 
	d1.getItem();
}
