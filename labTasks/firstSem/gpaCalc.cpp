#include <iostream>
using namespace std;

int main(){
    //initiaizing the values that we will use later in the code
    int subjects,creditHour,counter=1,totalCreditHours=0;
    float multOfGradeHour=0,GPA=0;
    string grade;
    cout<<"Enter the number of Subjects: ";
    //getting the subjects from user
    cin>>subjects;
    //running a loop to collect information from the user
    while(subjects > 0){
    //  getting the grade of subject from the user
        cout<<"Enter the grade for subject ("<<counter<<"): ";
        cin>>grade;
    // getting credit hours
        cout<<"Enter the Credit Hour for subject ("<<counter<<"): ";
        cin>>creditHour;
        // add credithours for later use to find GPA
        totalCreditHours+=creditHour;
        //here just checking the grade and multiplying according to the value of grade
        if(grade ==  "A"){
            multOfGradeHour += 4.0*creditHour;
        }
        else if(grade == "A-"){
            multOfGradeHour += 3.67*creditHour;
        }
        else if(grade =="B+"){
            multOfGradeHour += 3.33*creditHour;
        }
        else if(grade =="B"){
            multOfGradeHour += 3.0*creditHour;
        }
        else if(grade =="B-"){
            multOfGradeHour += 2.67*creditHour;
        }
        else if(grade =="C+"){
            multOfGradeHour += 2.33*creditHour;
        }
        else if(grade =="C"){
            multOfGradeHour += 2.0*creditHour;
        }
        else if(grade =="C-"){
            multOfGradeHour += 1.67*creditHour;
        }
        else if(grade =="D+"){
            multOfGradeHour += 1.33*creditHour;
        }
        else if(grade =="D"){
            multOfGradeHour += 1.0*creditHour;
        }
        else if(grade =="F"){
            multOfGradeHour += 0*creditHour;
        }
        counter+=1;
        subjects-=1 ;
    }
    //finding gpa by dividing the total sum of grade and hours from total credit hours.
    GPA = multOfGradeHour/totalCreditHours;
    cout<<"The Grade is: "<<GPA<<endl;
    return 0;
}
