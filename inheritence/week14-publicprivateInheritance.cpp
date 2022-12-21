//Public and private inheritance
#include<iostream>

using namespace std;

class A{
	private:
		int priData;
		void priDataFun(){
			cout<<"Private Data:"<<priData<<endl;
		}
	protected:
		int proData;
		void proDataFun(){
			cout<<"Protected Data:"<<proData<<endl;
		}
	public:
		int pubData;
		void pubDataFun(){
			cout<<"Public Data:"<<pubData<<endl;
		}
};
class B : public A{
	public:
	int a;
	void fun(){
		//a=priData;error
		a=proData;
		a=pubData;
	}
};
class C : private A{
	public:
	int a;
	void fun(){
		//a=priData;//error
		a=proData;
		a=pubData;
	}
};
int main(){
	B b;
	C c;
	//cout<<b.pubData;
	cout<<c.pubData;
	
	
}
