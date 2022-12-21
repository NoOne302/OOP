//important libraries are import here
#include <iostream>
using namespace std;

//all code will run here
int main(){

    string fullname;
	cout<<"enter your full name: "<<endl;
	getline(cin,fullname);

	fullname[4] = '_';//replacing the 5 character with '_'
	fullname[9] = '_';//replacing the 5 character with '_'
	cout<<fullname;



    return 0;
}
