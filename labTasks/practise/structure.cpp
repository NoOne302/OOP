#include <iostream>
using namespace std;
struct studentData {
    int id;
    float gpa;
    string name;
};

int main (){
    studentData student[1];
    for(int i=0;i<1;i++){
    	cout<<"enter student name: ";
    	cin>>student[i].name;
    	cout<<"enter student id: ";
    	cin>>student[i].id;
    	cout<<"enter student gpa: ";
    	cin>>student[i].gpa;
	}
	for (int i = 0;i<1;i++){
		cout<<"student name: "<<student[i].name<<endl;
		cout<<"student id: "<<student[i].id<<endl;
		cout<<"student gpa: "<<student[i].gpa<<endl;	}
    

        return 0;
}
