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
	~Data();
	void print();
	static int count;
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
		cout<<"parametrized 1 Constructor for "<<item <<endl;
		count++;
	}
void Data::print(){
		cout<<item<<endl;
	}
Data::~Data(){
		cout<<"Destructor for"<<item<<endl;
	}


int main(){
	cout<<Data::count<<endl;
	Data d1,d2(30),d3(40);
	d1.print();
	d2.print();
	d3.print();
}
