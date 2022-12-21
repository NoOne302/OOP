#include <iostream>
using namespace  std;

int main(){
    int n = 5;
  /*  for(int i = 0;i<n;i++){
        for (int j = 0;j<i;j++){
            cout<<" ";
        };

        for (int k = i;k<n;k++){
            cout<<"*";
        }

      cout<<endl;


     }
     for (int i = n;i>0;i--){
        for (int j = 1;j<i;j++){
            cout<<" ";
        }
       for (int j = i;j<=n;j++){
        cout<<"*" ;
        }
        cout<<endl;
     }
    for (int i = n;i>=1;i--){
            for (int j=1;j<=i;j++){
                cout<<"*";
            }
        cout<<endl;
        }
    for (int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }*/
    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            cout<<" ";
        };
        for(int k=i;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=0;i<n-1;i++){
        for(int j=0;j<i;j++ ){
            cout<<" ";
        }
        for(int k=i;k<n-1;k++){
            cout<<" *";
        }
        cout<<endl;
    }






    return 0;

}
