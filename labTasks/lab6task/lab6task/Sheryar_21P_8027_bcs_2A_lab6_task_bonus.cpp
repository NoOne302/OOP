#include <iostream> 
using namespace std;

class complexAddSub{
	//declaring data members
	float real, imaginary;
	
	public:
		//setting values to data members
		void setData(float num1, float num2){
			real = num1;
			imaginary = num2;
		}
		//returning the values of real and imaginary
		float getReal(){
			return real;
		}
		float getImag(){
			return imaginary;
		}
		
};

int main(){
	complexAddSub n1,n2,n3;
	float x,y;
	
	// getting data from user
	cout<<"enter x and y for first number where x is real and y is imaginary: "; cin>>x>>y;
	n1.setData(x,y);
	cout<<"enter x and y for second where x is real and y is imaginary: "; cin>>x>>y;
	
	n2.setData(x,y);
	
	//calculating the sum of two complex numbers
	n3.setData((n1.getReal() + n2.getReal()) , (n1.getImag() + n2.getImag()));	
	
	//	displaying the sum   
	if ( n3.getImag() >= 0 )
      cout << "Sum of two complex numbers = " << n3.getReal() << " + " << n3.getImag() << "i"<<endl;
   	else
      cout << "Sum of two complex numbers = " << n3.getReal() << " - " << -(n3.getImag()) << "i"<<endl;
      
      
	//calculating the difference of two complex numbers
	n3.setData((n1.getReal() - n2.getReal()) , (n1.getImag() - n2.getImag()));	
	
	//	displaying the difference   
	if ( n3.getImag() >= 0 )
      cout << "Sum of two complex numbers = " << n3.getReal() << " + " << n3.getImag() << "i"<<endl;
   	else
      cout << "Sum of two complex numbers = " << n3.getReal() << " - " << -(n3.getImag()) << "i"<<endl;
	

	
}
