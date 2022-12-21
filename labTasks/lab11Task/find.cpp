#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
char *p;
			int i;
			int count = 1;
			int cp = 1;
		 	p = serenaRooms;
			for(int j = 1;j<=20;j++){
				/* loop until null is found */
		  		for(i = 0; p[ i ]; i++){
		  			if(j == p[i]){
						count++;
						break;
					}
		  		}
		  		if(count == 1){
		  			if(cp % 5 == 0){
		  				cout<<endl;
					}
					cout<<"Room"<<i<<"\t";					
		  			cp++;
		  			cout<<"cp: "<<cp;
				}		
			}
//  char str[] = "Pointers are fun and hard";
//  char *p;
//  int i;
//
//  p = str;
//
//  /* loop until null is found */
//  for(i = 0; p[ i ]; i++){
//  	cout <<p[ i ];
//  }
//    

	 // using std::find with array and pointer:
//  int myints[] = { 10, 20, 30, 40 };
//  int * p;
//
//  p = find (myints, myints+4, 30);
//  if (p != myints+4)
//    cout << "Element found in myints: " << *p << '\n';
//  else
//    cout << "Element not found in myints\n";
//    int arr[] = {5, 3, 7, 6, 8, 2};
//    int target = 7;
// 	for (int i: arr){
// 		cout<<i;
//	 }
//char arr[4];
//arr[2] = 'd';
//arr[0] = '34';
//	 	for (char i: arr){
// 		cout<<int(i) <<" ";
//	 }
//char s[2] = {'4','5'};
//cout<<int(s[1] - 48);
//    bool exists = false;
//    for (int i: arr){
//        if (i == target) {
//            exists = true;
//            break;
//        }
//    }
// 
//    if (exists) {
//        cout << "Element found";
//    } else {
//        cout << "Element not found";
//    }
 
    return 0;
}
