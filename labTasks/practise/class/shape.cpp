#include <iostream>
using namespace std;
int main(){
	int size = 4;
	for (int i = 1;i < size + 1; i++){
		if(i<= (size / 2)) {
			for (int j = 0; j< (size / 2);j++){
				cout<<" ";
			}
			for (int j = 0; j < (i * 2); j++){
				if (j < i) { 
				cout<< "\\";
				} else{
					cout<<"/";
				} 
			}
		}
		
	}
}
