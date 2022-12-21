#include<iostream>

using namespace std;
class sterling{
	private:
		float po;
		float s;
		float pen;
	public:
		sterling(){
			po=0;
			s=0;
			pen=0;
		}
		
		sterling(float po, float s, float pen){
			this->po=po;
			this->s=s;
			this->pen=pen;
		}
		sterling(double value){//new system	
		//Value (5.13) extract pound(5),shillings(2),peeny(8)
		float v = value*240.0;
		po = int(v/240);
		int temp=int(v)%240;
		s=temp/12;
		pen=temp%12;
		cout<< po<<" "<<s<<" "<<pen<<endl;
				}
};
int main(){
	sterling s(5.1333333333);
	
}
