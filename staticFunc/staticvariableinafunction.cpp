#include <iostream>
using namespace std;
class d{
	private:
		static int num;
		static int m[3];
	public:
		static void p();
		void func() {
   cout <<"Value of num: "<< d::m <<"\n";
   num++;
	}
	void func1() {
//   int num = 1;
//	d::m[0] = 2;
//	d::p();
   cout <<"Value of num: "<< m[0] <<"\n";
   num++;
}
};
void d::p(){
//	m[0] = 2;
}
int d::num = 90;
int main() {
//	d *f = new d;
//	d *g = new d;
//	f->func();
//	d::p();
//	g->func();
//   f->func();
//   f->func1();
//   func(;
	d d1;
//	::p();
	cout<<"d : " << d::p();
//   func1();
//   func();
//   func1();
   return 0;
}
