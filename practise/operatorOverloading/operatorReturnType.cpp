#include <iostream>
using namespace std;

class Counter{
	private:
		unsigned int count; //count
	private:
		Counter() : count(0) { // constrctorr
		}
		unsigned int getCount(){
			return count; //return count
		}
		Counter operator ++ (){
			++count;
			 =this->count;
			return *temp;
			
		}
};
