#include<iostream>
int count=0;
using namespace std;
class Data{
	private:
	int item;
	static int count;
	public:
	int getItem();
	Data();
	Data(int item);
	~Data();
	void print();
//	static int getCount();
	static int getCount(){
	return count;
	}
};

int Data::count =0;

int Data::getItem(){ 
	return item;
	}
Data::Data(){ //Default
		item=90;
		cout<<"Default Constructor for "<<item <<endl;
		count++;
		}
Data::Data(int item){ //parametrized 
		this->item=item;
		item=this->item;
		item=item;
		cout<<"parametrized 1 Constructor for "<<item <<endl;
		count++;
	}
void Data::print(){
		cout<<item<<endl;
	}
Data::~Data(){
		cout<<"Destructor for"<<item<<endl;
	}
//int Data:: getCount(){
//	return count;
//}
int main(){
	Data d1,d2(3),d3;
	d1.print();
	d2.print();
	d3.print();
	cout<<Data::getCount()<<endl;
}
