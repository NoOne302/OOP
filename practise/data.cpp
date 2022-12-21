#include<iostream>

using namespace std;
int count=0;
class data{
	private:
		int d;
	public:
		void set(int d){
			d=this->d;
			d=d;
			this->d=d;
		}
		int get(int d){
			return this->d;
		}
		data(){
			cout<<"constructor 1 is called ;An object is created "<<d<<endl;
			count++;
		}
		data(int d){
			this->d=d;
			cout<<" constructor 2 is called; An object is created "<<d<<endl;
			count++;
		}
		~data(){
			cout<<"Object ditroyed "<<d<<endl;
			count--;
		}
};
data d;
void myfun(){
	cout<<"start of a function"<<endl;
	data d7(2.5);
	cout<<"End of a function"<<endl;
}
int main(){
	data d2(3),d3(2),d5(1);
	myfun();
	cout<<"after constructor"<<endl;
	cout<<count;
}
