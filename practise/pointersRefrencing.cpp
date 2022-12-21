//header files 
#include<iostream>
using namespace std;

// main function
int main() {
/*
  int arr[5] = {34,5356,734534,75645,2};
  int *p = arr;
  int maxx = *arr;
  int minn = *arr;
  for (int i =0;i<5;i++){
        if(maxx<*p){
        maxx = *p;
  //cout<<*p<<endl;
    //cout<<maxx<<endl;
        }else if(minn>*p){
            minn = *p;
        }
   p++;
  }
    cout <<maxx<<" "<<minn<<endl;
*/
    int var = 5;
    int *ptr =&var;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<*++ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*ptr++<<endl;
    cout<<*ptr+1;


  return 0;
=
}
