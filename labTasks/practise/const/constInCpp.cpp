#include <iostream>
using namespace std;

//class num{
//	public:
//	const int a;
//	num (int y) : a(y)
//	{
//		cout <<"the value of y:" <<y <<endl;
////		this->a = a+4;
//	}
//};

//int main(){
//	const num n1(4);
//	cout<<"the value of const data member is: "<<n1.a<<endl;
//	
//	
//}

class Distance {
	private:
		int feet;
		float inches;
	public:
		//constutor (no args)
		Distance() : feet(0) , inches(0) {}
		
		//constuctor (with args)
		Distance(int ft, float in) : feet(ft), inches(in){} 
		
		//get length from user
		void getDist(){
			cout<<"\n Enter feet: "; cin>>feet;
			cout<<"\n Enter inches: ";cin>>inches;
		}
	
		//display Distance
		void showDist() const {
			cout<<feet <<"\'-'" << inches << '\"';
		}
		
		Distance addDist(const Distance &d) const; //const member function with 
		//const function argument 
};
Distance Distance::addDist(const Distance &d) const {
	Distance temp;
	temp.feet = this->feet + d.feet;
	temp.inches = this->inches + d.inches;
	if (temp.inches >= 12.0)
	{
		//then decrease inches
		temp.inches -= 12.0;
		temp.feet +=1;
	}
	
	return temp;
}

int main() {
	Distance d1(11,6.25), d2 , d3;
//	d1.getDist();
//	d2.getDist();
//	d3 = d1.addDist(d2);
	const Distance football(300,0);
	
	
	//display all lenght
//	cout << "\nd1 = "; d1.showDist();
//	cout << "\nd2 = "; d2.showDist();
//	cout << "\nd3 = "; d3.showDist();
//	cout<<endl;
	return 0;
}
