//important libraries are import here
#include <iostream>
using namespace std;

//all code will run here
//int is_divisible(int a, int b);
int smallest(int a[6]);
int main(){
    /*
    int a = 18;
    int b=4;
    int x = is_divisible(a,b);
    if (is_divisible(a,b)){
        cout<<"yes "<<x;
    }
    else{
        cout<<"not "<<x; }*/
    int a[6] = {1,2,5,3,6,7};
    /*for (int i =0;i<6;i++){
        cout<<a[i]<<endl;
    }*/
    int *x = smallest(a[6]);
    return 0;
}

int smallest(int a[6]){
        int x = 1;
        while (true){
        for(int y=0;y<6;y++){
            if (x != a[y]){
                return x;
            }
            else{
                x++;
            }
        }
    }
    }
/*
int is_divisible(int a,int b){
    if (a % b == 0){
        return true;
    }
    else
    {
        return false;
    }
}*/
