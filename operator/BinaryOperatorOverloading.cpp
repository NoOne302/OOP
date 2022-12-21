#include<iostream>

using namespace std;
class data{
	int item;
	public:
	data(){
		item=10;
	}
	data(int d){
		item=d;
	}

	void print(){
		cout<<item<<endl;
	}

	data operator + (data d2){ //post increment
		cout<<"This"<<this->item<<endl;
		cout<<"Argument"<<d2.item<<endl;;
		data temp;
		temp.item=this->item+d2.item;
		return temp;
	}

};
int main(){
data d1(11),d2(22),d3;
d3=d1+d2+d3;
d3.print();
}
