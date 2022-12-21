#include<iostream>

using namespace std;

class counter{
	private:
		int count;
		string name;
	public:
		/*counter(){
			cout<<"1"<<endl;
			this->count=50;
			this->name="No name";
		}*/
		counter():count(50),name("no name"){
			cout<<"2"<<endl;
			cout<<"I am a constructor";
		}
		counter(int count){
			cout<<"3"<<endl;
			this->count=count;
		}
		int getCount(){
			return count;
		}
};
int main(){
	counter c1(11),c2(12);
	counter c3;
	cout<<c1.getCount()<<endl;
	cout<<c2.getCount()<<endl;
	cout<<c3.getCount()<<endl;
	
	
}
