#include<iostream>

using namespace std;
class medicine{
	private:
	string n;
	string f;
	float un;
	int q;
	public:	
	medicine();
	medicine(string a, string b, float c, int d);
//	medicine(){
//		cout<<"An object created";
//	}
//	medicine(string a,string b, float c,int d)
//	{
//		n=a;
//		f=b;
//		un=c;
//		q=d;
//	}
	string getName(){
		return n;
	}
	int getQuantity(){
		return q;
	}	
	float getUN(){
		return un;
	}	string getF(){
		return f;
	}
	
	};
	medicine::medicine(){
		cout<<"an object is created; "<<endl;
	}
	medicine::medicine(string a, string b, float c, int d){
		this->n = a;
		this->f = b;
		this->un = c;
		this->q = d;
	}
int main(){
	medicine *m1 = new medicine();
	medicine *m2  = new medicine("A","B",1,3);
//	delete m2;
	cout<<endl<<"M1:"<<m1->getName()<<endl;
	cout<<"M2:"<<m2->getName()<<endl;
//	delete m1,m2;
	cout<<"Deleted"<<endl;
//	
	cout<<endl<<"M1:"<<m1->getName()<<endl;
	cout<<"Deleted"<<endl;
	cout<<"M2:"<<m2->getName()<<endl;
}
