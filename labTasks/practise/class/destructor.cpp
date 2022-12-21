#include <iostream>
using namespace std;

class Prog{
	public:
		Prog(){
			cout<<"This is a constuctor function........"<<endl;
		}
		~Prog(){
			cout<<"this is destructor function........"<<endl;
		}
		
};

int  main(){
	Prog x;
	
}
