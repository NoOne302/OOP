#include <iostream>
using namespace std;
//shape class
class shape{
	public:
		shape(){
			cout<<"constutor called\n";
		}
		virtual void area()=0;
		virtual ~shape(){
			cout<<"distrutor called\n";
		}
};
//2 D shape class
class twoD :public shape{
		public:
		twoD(){
			cout<<"constutor called\n";
		}
		virtual ~twoD(){
			cout<<"distrutor called\n";
		}
};
//3 D class
class threeD :public shape{
	public:
		threeD(){
			cout<<"constutor called\n";
		}
		virtual void volume() = 0;
		~threeD(){
			cout<<"distrutor called\n";
		}
};
//circle class
class circle : public twoD{
	private:
		float rad;
	public:
		circle();
		circle(float rad);
		void area();
		~circle();
};

//sqare clas
class square : public twoD{
	private:
		float side;
	public:
		square();
		square(float side);
		void area();
		~square();
};

//cube class
class cube :public threeD{
	private:
		double len, wid, hight;
	public:
		cube();
		cube(double len, double wid, double hight);
		void area();
		void volume();
		~cube();
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
		~pyramid();
		
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
circle::~circle(){	
};
//member function of square
square::square(){
	this->side = 0;
}
square::square(float side){
	this->side = side;
}
void square::area(){
	cout<<"area of square: "<<this->side*this->side<<endl;
}
square::~square(){
};


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
cube::~cube(){
	
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
pyramid::~pyramid(){
}


int main(){
	twoD *d[2];
	circle c(2);
	square s(3);
	d[1] = &c;
	d[0] = &s;
	d[0]->area();
	d[1]->area();
	
//	------------------
	threeD *D[2];
	cube cu(4, 5, 3);
	pyramid p(4,5);
	D[0] = &cu;
	D[1] = &p;
	D[0]->area();
	D[0]->volume();
	D[1]->area();
	D[1]->volume();
}
 
