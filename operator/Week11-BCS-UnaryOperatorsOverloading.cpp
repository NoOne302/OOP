#include<iostream>

using namespace std;
class data{
	int item;
	int count;
	public:
	data(){
		item=10;
		count=100;
	}
	data(int i, int c){
		item=i;
		count=c;
	}
	void preincrement(){
		++item;
	} 
	void print(){
		cout<<item<<endl;
		cout<<count<<endl;
	}

	void operator ++ (int){ //post increment
		cout<<"PostFix"<<endl;
		count++;
		item++;
	}
	
	data operator ++ (){ //pre increment
		cout<<"Prefix"<<endl;
		//data temp;
		++count;
		++item;
		//temp.count=count;
		//temp.item=item;
		return data(count,item);
		//return *this;
	}
};
int main(){
	data d1,d2;
	d2;
	d2.print();
	d1.print();
	d2=++d1;
	d1++;
	//++d2;
	d1.print();
}
