#include <iostream>
using namespace std;

class Sum{
	int x;
	int y;
	public:
		Sum();
		Sum(int x);
		Sum(int x, int y);	
	
};
		Sum::Sum(){
			cout<<"default constractor called.............."<<endl;
		}
		Sum::Sum(int x){	
			cout<<"x: "<<x<<endl;
		}
		Sum::Sum(int x, int y){
			cout<<"sum of x and y is:  "<<x+y<<endl;
		}
int main(){
	Sum s1,s2(5),s3(5,6);
	
}
