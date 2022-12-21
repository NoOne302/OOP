#include <iostream>
using namespace std;
int main(){
	int p[4] = {};
	int c = sizeof(p) / 4;
	for(int i  = 0;i<=c;i++){
		if(3 != i){
			p[i]  = 3;
		}
		cout<<p[i];
		 
	}
}
