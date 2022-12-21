#include <iostream>
using namespace std;

class Medicine{
	//initilizing the require data members of the class
	private:
		string name;
		string formula;
		float unitPrice;
		int quantity;
		
		//declaring the data fuctions of the class
	public:
		void setData(string n, string f, float uP, int q);
		string getName();
		string getFormula();
		float getPrice();
		int getQuantity();
		float applyDiscount(float price, int num);
};
	//setting data to data members
	void Medicine::setData(string n, string f, float uP, int q){
		name = n;
		formula = f;
		unitPrice = uP;
		quantity = q;
	}
	//returning data members
	string Medicine::getName(){
		return name;
	}
	
	string Medicine::getFormula(){
		return formula;
	}
	
	float Medicine::getPrice(){
		return unitPrice;
	}
	
	int Medicine::getQuantity(){
		return quantity;
	}
	//calculating the the discount
	float Medicine::applyDiscount(float price , int num){
		if(num > 0 && num<100){
			price = price - ((price/100) * num);
		}
		return price;
	}
	
int main(){
	//creating objects of the class
	Medicine m1,m2,m3;
	//calling member functions
	m1.setData("Paracetamol", "C8H9NO2",45.50,30);
	m2.setData("Amoxicillin", "C16H19N3O5S",170.83,45);
	m3.setData("Claritin", "C22H23C1N2O2",100,100);
	cout<<"The price is: "<<m3.getPrice()<<endl;
	//or you can apply the discout like this
//	m3.applyDiscount(m3.getPrice(),10);
	//or you can also call it like this
	m3.setData("Claritin", "C22H23C1N2O2",m3.applyDiscount(m3.getPrice(),10),100);
	cout<<"The price after dicount is: "<<m3.getPrice()<<endl;
}
