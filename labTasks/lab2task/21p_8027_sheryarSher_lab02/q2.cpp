//important libraries are import here
#include <iostream>
using namespace std;

//all code will run here
int main(){

	int rad,volume;
	cout<<"enter the radius of sphere : ";
	cin>>rad; //getting the radius from user
	float n =  4.0/3.0; //calculting the 'n'
	volume =(3.14*pow(rad,3)) *n; //calculting the volume of the sphere
	cout << "the volume of the sphere is : "<<volume<<endl; //printing the volume of the sphere


    return 0;
}
