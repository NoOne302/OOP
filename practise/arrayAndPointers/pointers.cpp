//important libraries are import here
#include <iostream>
using namespace std;

//all code will run here
int main(){

    int var1 = 3;
    int var2 = 4;
    int var3 = 12;

    int* ptrvar1 = &var1;
    int * ptrvar2 = &var2;
    int *ptrvar3 = &var3;

//    *ptrvar1 =*ptrvar2;
//    int *var4 = ptrvar1;

    //cout<<ptrvar1<<" "<<ptrvar2<<" "<<ptrvar3<<endl;
    cout<< *ptrvar1<<" " << var1;




    return 0;
}
