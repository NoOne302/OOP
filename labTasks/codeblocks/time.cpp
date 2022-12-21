#include <iostream>
#include <ctime>

using namespace std;

int main(){
//    time_t t;
//    t = time(NULL);
////    cout<<t;
//    char *c = ctime(&t);
//    cout<<c<<endl;
//    cout<<asctime(localtime(&t));
//    asctime(gmtime(&t));
    tm *local, *gm;
    time_t  t;
    t = time(NULL);
    cout<<asctime(local->tm_hour));
//    cout<<t;
//    cin>>local->tm_year;

//    cout<<local->tm_year;
}
