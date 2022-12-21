#include <iostream>
using namespace std;

//initilizing the members of struct
struct laptop{
	string brand;
	float screenSize;
	int ramSize;
	float batteryLife;
};

//declaring functons
void printData(laptop l[], int n);
void brandName(laptop l[], int n);

int main(){
	int n = 2;
	laptop l[n];
	
//	colling data
	for(int i = 0;i<n;i++){
		cout<<"enter name of laptop: ";
		cin>>l[i].brand;
		cout<<"enter screen size: ";
		cin>>l[i].screenSize;
		int temp;
//		giving a check that ram should be between 2-16
		while(true){
			cout<<"enter ramSize: ";
			cin>>temp;
			if(temp > 2 and temp < 16){
				l[i].ramSize = temp;
				break;
			}
			else{
				cout<<"Ram size should be  between 2-16: ";
			}
		}
		cout<<"enter battery life: ";
		cin>>l[i].batteryLife;
	}
	printData(l,n);
	brandName(l,n);
}
//initializing the functions for printing data whole screen size is greater than 14
void printData(laptop l[], int n){
	for(int i = 0;i<n;i++){
		if (l[i].screenSize > 14){
			cout<<"================================================="<<endl;
			cout<<"brand: "<<l[i].brand<<endl;
			cout<<"screen size: "<<l[i].screenSize<<endl;
			cout<<"ram size: "<<l[i].ramSize<<endl;
			cout<<"batter life: "<<l[i].batteryLife<<endl;
			cout<<"================================================="<<endl;
		}
	}
}
//initializing the functions for printing data whole brand name is HP
void brandName(laptop l[], int n){
	for(int i = 0;i<n;i++){
		if (l[i].brand ==  "HP"){
			cout<<"================================================="<<endl;
			cout<<"brand: "<<l[i].brand<<endl;
			cout<<"screen size: "<<l[i].screenSize<<endl;
			cout<<"ram size: "<<l[i].ramSize<<endl;
			cout<<"batter life: "<<l[i].batteryLife<<endl;
			cout<<"================================================="<<endl;
		}
	}
}
