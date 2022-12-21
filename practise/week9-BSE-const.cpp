#include<iostream>
using namespace std;
class height{
	private:
	int f;
	int i;
	static int count;	
	public:
	height();
	height(int f, int i);
	void print() const;
	static int getCount();	
	void addHeight(const height h1, const height h2);	
};
int height::count=0;



height::height(){
count++;	
}
height::height(int f , int i){
	this->i=i;
	this->f=f;
	count++;
}
void height::print() const{
	//this->f=45;
	//this->i=56;
	cout<<f<<" "<< i<<endl;
}
int height::getCount(){
	return count;
}

void height::addHeight(const height h1, const height h2){
	h1.f=10;
	h2.f=20;
}
int main(){
	const float pi =3.14;
	cout<<height::getCount()<<endl;
	height h1,h2(2,3),h3(3,4);
	const height h4(3,4);
	h1.print();
	h2.print();
	h3.print();
	cout<<height::getCount()<<endl;
	//cout<<h3.getCount();
	//cout<<height::count;
	
	
}
