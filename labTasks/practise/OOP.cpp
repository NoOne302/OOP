//important libraries are import here
#include <iostream>
using namespace std;
/*
class Employee {
  public:
      string name;
      int salary;
      Employee(string name, int salary, int secretPassword)
      {
          this->name = name;
          this->salary = salary;
          this->secretPassword = secretPassword;

      }
      void printDetails()
      {
          cout<<"The name of our first employee is "<<this->name<<" and his monthly salary is "<<this->salary<<"$"<<endl;
      }

     void getSPassword()
     {
         cout<<"the secretPassword is"<<this->secretPassword<<endl;
     }
  private:
     int secretPassword;

    };
    */
//all code will run here
class student{
public:
    int rollNum;
    string name;

    student (int rollNumber, string fullName, int phoneNumber){
    this->rollNum = rollNumber;
    this->name = fullName;
    this->phoneNumber = phoneNumber;
    }
    void getStudentInfo()
    {
        cout<<"The name of student is "<<this->name<<" and his roll number is "<<this->rollNum<<" his phone Number is "<<this->phoneNumber<<endl;
    }

private:
    int phoneNumber;

};

int main(){
    student ali (003,"Alisher",023434234);
    ali.getStudentInfo();

    /*
    Employee ali("AliSher",100000,345534);
    Employee sher("SheryarSher",100,23444);
    ali.printDetails();
    ali.getSPassword();
    sher.printDetails();
    sher.getSPassword();
*/

    return 0;
}
