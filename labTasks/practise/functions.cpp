//important libraries
#include <iostream>
using namespace std;


// main function every code will execute here

int hello(int a, int b){
    int sum = a+b;
    return  sum;
    }
int main(){
    int a= 10;
    int b = 12;
    int sum = hello(a,b);
    cout<<"sum: "<<sum;
    return 0;
}
