#include <iostream>
using namespace std;

struct point {
	int x;
	int y;
	
};
point newPoint(point p1,point p2, point p3);
int main (){
	point p1,p2,p3;
	cout<<"enter the coordinates for P1(x,y): ";
	cin>>p1.x>>p1.y;
	cout<<"enter the coordinates for P2(x,y): ";
	cin>>p2.x>>p2.y;
	p3 = newPoint(p1,p2,p3);
	cout<<"coordinates of p1 + p3 are: "<<p3.x<<" , "<<p3.y; 
//	cout<<"coordinates of p1 + p3 are: "<<p1.x+p2.x<<" , "<<p1.y+p2.y; 
	
}

point newPoint(point p1,point p2, point p3){

	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
////	cout<<p3.x<<" , "<<p3.y;
	return p3;
}
//int xCor(point p1, point p2) {
//	int x = p1.x + p2.x;
//	return x;
//}
//int yCor(point p1, point p2) {
//	int y = p1.y + p2.y;
//	return y;
//}
