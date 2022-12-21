#include <iostream>
using namespace std;

int main(){
    // showing the items to choose
    cout<<"Choose your favourite beverage from the following list"<<endl;
    cout<<"1:coffee    2:Tea      3:Coke      4:Orange Juice"<<endl;
//initializing the variables that we will use in the programme
    int bev = 0,coff=0,tea=0,coke=0,orangeJuice = 0;
//set counter to 1 first
    int counter=1;
    //this loop will run user enter "-1"
    while(bev != -1){
        // asking user to choose their favorite beverage until he or she enter -1
        cout<<"Please input the favourite beverage of Person #"<<counter<<" Choose 1,2,3 or 4 from above menu or -1 to exit the programe"<<endl;
//  cheking the value that user enter and increasing a vote in the correct beverage
        cin>>bev;
        if(bev==1){
            coff+=1;
        }
        else if(bev==2){
            tea+=1;
        }
        else if(bev==3){
            coke+=1;
        }
        else if(bev ==4){
            orangeJuice+=1;
        }
        counter+=1;
        }
        // showing the user the total number of votes
    cout<<"Beverage                  Number of Votes"<<endl;
    cout<<"*****************************************"<<endl;
    cout<<"Coffee                      "<<coff<<endl;
    cout<<"Tea                         "<<tea<<endl;
    cout<<"Coke                        "<<coke<<endl;
    cout<<"Orange Juice                "<<orangeJuice<<endl;



    return 0;
}
