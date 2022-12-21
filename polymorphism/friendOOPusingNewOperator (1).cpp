//Friends Function
#include<iostream>
using namespace std;

class beta;

class alpha{
	int data;
	public:
		alpha(int data){
			this->data=data;
		}
		friend int friendfun(alpha *a, beta *b);
};
class beta{
	int data;
	public:
		beta(int data){
			this->data=data;
		}
		friend int friendfun(alpha *a, beta*b);
};
int friendfun(alpha *a, beta *b){
	return (a->data+b->data);
}

int main(){
	alpha *a = new alpha(100);
	beta *b=new beta(20);
	cout<<friendfun(a,b);
}


