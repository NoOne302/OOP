#include<iostream>

using namespace std;
class data{
	private:
		int item;
		
	public:
		data(int item){
			this->item=item;
		}
		void print(){
			cout<<item<<endl;
		}
		
		data operator +(data a){
			cout<<"this"<<this->item<<endl;
			cout<<"argument"<<a.item<<endl;
			//data temp(0);
			//temp.item=this->item+a.item;
			//return temp;
			return data(this->item+a.item);
		}
		data operator -(data a){
			cout<<"this"<<this->item<<endl;
			cout<<"argument"<<a.item<<endl;
			//data temp(0);
			//temp.item=this->item+a.item;
			//return temp;
			return data(this->item-a.item);
		}
		data operator == (data a){
			if(this->item==a.item){
				return true;
			}
		else{
			return false;
		}
		}
		//d3+=d1
		data operator +=(data a){
			cout<<"this"<<this->item<<endl;
			cout<<"argument"<<a.item<<endl;
			//data temp(0);
			//temp.item=this->item+a.item;
			//return temp;
			return data(this->item+
			a.item);
		}
};
int main(){
	data d1(10),d2(10),d3(0);
	d3=d1+d2;//1st operand: calling object, 2nd operand : argument
	data d4=d3-d1;
	d3.print();
	d4.print();
	
	if (d1==d2){
		cout<<"True"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	d3+=d1;//d3=d3+d1;
	d3.print();
	
}
