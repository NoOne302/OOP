/*
Virtual: appear  but physically does not exist
virtual function:  appears to be calling one function
 but actuall it is calling another function 
*/
#include<iostream>
using namespace std;
class base{
	public:
		virtual void show()=0;//pure virtual function: a virtual function with no defination & =0;};
};

class der1:public base{
	public:
		void show(){
			cout<<"der1"<<endl;
		}
		
};
class der2:public base{
	public:
		void show(){
			cout<<"der2"<<endl;
		}
};
int main(){
	//base b;
	base *p;
	der1 d1;
	der2 d2;
	p=&d1;// legal
			/*But wait—how can we get away with this? Doesn’t the compiler complain that we’re assigning
an address of one type (Derv1) to a pointer of another (Base)? On the contrary, the compiler is
perfectly happy, because type checking has been relaxed in this situation, for reasons that will
become apparent soon. The rule is that pointers to objects of a derived class are typecompatible
with pointers to objects of the base class.*/
	p->show();
	p=&d2;
	p->show();

	
	}
	
	
