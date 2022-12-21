#include<iostream>

using namespace std;
class data{
	int item;
	public:
		data(int item){
			this->item=item;
		}
		void print(){
			cout<<endl<<item<<endl;
		}
};
int main(){
//	data d1(10); // stack,  LIFO, compile time memory allocate
//	d1.print();
//	//dynamic memory allocation: new operator allocate
//	//syntax: pointer-type-variable = new datatype
//	
//	data *d2=new data(100); //heap allocate run time memory
//	d2->print(); 
//	
//	delete d2;
//	//delete d1;
//	d2->print();
	
	data d(12);
	d.print();
	data *d1 = new data(2);
	d1->print();	
	delete d1;
	d1->print();
//	delete d;
	
}
