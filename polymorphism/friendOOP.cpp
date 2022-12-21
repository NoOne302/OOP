//Friends Function
#include<iostream>
using namespace std;
//class beta;

//class alpha{
//	int data;
//	public:
//		alpha(int data){
//			this->data=data;
//		}
//		friend int friendfun(alpha , beta );
//};
//class beta{
//	int data;
//	public:
//		beta(int data){
//			this->data=data;
//		}
//		friend int friendfun(alpha, beta);
//};
class b;
class a{
	int data;
	public:
		a(int data){
			this->data = data;
		}
		friend int f(a, b);
};
class b{
	int da;
	public:
		b(int da){
			this->da = da;
		}
		friend f(a,b);
};
int f(a c, b d){
	return (c.data - d.da);
}

int main(){
	a a1(10);
	b b1(20);
	cout<<f(a1,b1);
}


