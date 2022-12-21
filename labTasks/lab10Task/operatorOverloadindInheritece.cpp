#include <iostream>
using namespace std;

class innt{
	protected:
	int a;
	int b;
	
	public:
	innt (){
		a = 4;
		b = 5;
	}	
	
	void operator + (){
		a+1;
	}
};

class derive : public innt{
	protected:
		int c;
	
	public:
		derive() : innt(){
			c = 9;
		}
		derive operator + (derive d1){
//			innt::operator +();
			this->c + d1.c ;
			cout<<this->c <<"\n"<<this->a;
		}
};
int main(){
	derive d,d1;
	
}

