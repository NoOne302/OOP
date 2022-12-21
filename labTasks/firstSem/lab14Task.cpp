#include <iostream>
#include <cmath>
using namespace std;

int main(){
/*
    //first we will initialize value that we need
    int num,mod,sum=0;
    int duplicate;
    cout<<"enter the number that you want to check: ";
    //we will get number from user
    cin>>num;
//  store original number in a duplicate so that we can it for checking
    duplicate = num;
    int Duplicate = num;
    // perform calculation
    int numOfDigit = 0;
    while(num>0){
        num/=10;
        numOfDigit++;
    }
    while(Duplicate >0){
     mod =  Duplicate % 10;
     sum+=pow(mod,numOfDigit);
     Duplicate/=10 ;
    }
    // checking whether the sum is equal to original number or not8
    if( duplicate == sum){
        cout<<"this is  an Armstrong number";
    else{
        cout<<"this not an Armstrong number";
    }
    return 0;
}    }
    else{
        cout<<"this not an Armstrong number";
    }

*/
/*
    // here we will check whether this number is palindrome

    int num,mod,sum=0;
    int duplicate;
    cout<<"enter the number that you want to check: ";
    //we will get number from user
    cin>>num;
    duplicate = num;
    //get the number in reverse order
    while(num >0){
    mod =  num % 10;
    sum =(sum*10+mod);
    num/=10 ;
    }
    // checking whether the sum is equal to original number or note
    if( duplicate == sum){
        cout<<"this is  a Palindrome number";
    }
    else{
        cout<<"this not a Palindrome number";
    }
*/

    int number;
    cout<<"enter the number: ";
    cin>>number;
    for(int i = 1;i<=10;i++){
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
    }
    return 0;

    }
