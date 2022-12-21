#include <iostream>
using namespace std;
//shape class
class shape{
	public:
		virtual void area()=0;
};
//2 D shape class
class twoD :public shape{
	
};
//3 D class
class threeD :public shape{
	public:
		virtual void volume() = 0;
};
//circle class
class circle : public twoD{
	private:
		float rad;
	public:
		circle();
		circle(float rad);
		void area();
//		~circle();
};

//sqare class
class square : public twoD{
	private:
		float side;
	public:
		square();
		square(float side);
		void area();
};
W//member function of square
square::square(){
	this->side = 0;
}
square::square(float side){
	this->side = side;
}
//cube class
class cube :public threeD{
	private:
		double len, wid, hight;
	public:
		cube();
		cube(double len, double wid, double hight);
		void area();
		void volume();
};

//pyramid class
class pyramid :public threeD{
	private:
		double base, height;
	public:
		pyramid();
		pyramid(double base, double height);
		void area();
		void volume();	
};
//member function of circle
circle::circle(){
	this->rad = 0;
}
circle::circle(float rad){
	this->rad = rad;
}
void circle::area(){
	float pi = 3.14;
	cout<<"area of circle: "<<pi*this->rad*this->rad<<endl;
}

//member function of cube
cube::cube(){
	this->len = 0;
	this->wid = 0;
	this->hight = 0;
}
cube::cube(double len, double wid, double hight){
	this->len = len;
	this->wid = wid;
	this->hight = hight;
}
void cube::area(){
	cout<<"area of cube: "<<6*(len*len)<<endl;
}
void cube::volume(){
	cout<<"volume of cube: "<<len*len*len<<endl;
}
//member function of cube
pyramid::pyramid(){
	this->base = 0;
	this->height = 0;
}
pyramid::pyramid(double base, double height){
	this->base = base;
	this->height = height;
}
void pyramid::area(){
	cout<<"area of pyramid: "<<(this->height * this->base)<<endl;
}
void pyramid::volume(){
	cout<<"volume of pyramid: "<<(this->height * this->base)/2<<endl;
}


int main(){
	twoD *d[2];
	circle c(2);
	d[1] = &c;
	d[1]->area(); 
}

