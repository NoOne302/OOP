
#include <iostream>
using namespace std;

class Counter
{
	private:
		unsigned int count; //count
	public:
		Counter() : count(12)  //construtor
		{ }
//		Counter(){
//			count = 12;
//		}
		unsigned int getCount(){
			return count; //return count
		}
		void operator ++ (){
			
			count++; //increment (prefix)
		}
		void operator ++ (int){
			count++; //increment (postfix)
		}
		Counter operator + (Counter c){
			Counter temp;
			temp.count = this->count + c.count;
			return temp;
		}
};

int main(){
	Counter c1, c2, c4; //define and initialize
//	cout<<"\nc1 = "<< c1.getCount();
//	cout<<"\nc2 = "<< c2.getCount();
//	++c1;
//	cout<<"\nc1 = "<< c1.getCount();
//	c1++;
//	c2++;
//	cout<<"\nc1 = "<< c1.getCount();
//	cout<<"\nc2 = "<< c2.getCount();
	Counter c3;
	c3 = c1+c2 + c4;
//	c4 = c5+c6;
	cout<<c3.getCount();
}
