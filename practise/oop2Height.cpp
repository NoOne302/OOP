#include<iostream>

using namespace std;

class height{
	private:
		int feet;
		int inches;
	public:
		height():feet(3),inches(7){		
		}
		height(int f,int i){
			this->feet=f;
			this->inches=i;
		}
		
		void add_heights(height a,height b){
			this->feet=a.feet+b.feet;//8
			this->inches=a.inches+b.inches;//18
			
			if(this->inches>12){
				this->inches=this->inches-12;
				this->feet++;
			}
			cout<<this->feet<<" "<<this->inches;
		}
};
int main(){
	height h1,h2(5,11);//h1= 3 7 , h2 =5 11
	height h3; // h3= 9 6
	h3.add_heights(h1,h2);
}
