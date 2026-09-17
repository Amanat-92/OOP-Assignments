#include <iostream>
using namespace std;

class employee
{ public: 
   int id_num;
   string name;
   float salary;
   int exp;

 void display()
 {
  cout<<"-----EMPLOYEE DETAILS-----"<<"\n";
  cout<<"Employee ID Number: "<<id_num<<"\n";
  cout<<"Employee Name: "<<name<<"\n";
  cout<<"Employee Salary: "<<salary<<"\n";
  cout<<"Employee Experience in years: "<<exp<<"\n";
 }
};

int main()
{
 employee e1;
 e1.id_num=1234;
 e1.name="Doraemon";
 e1.salary=20000.00;
 e1.exp=5;
 e1.display();

 return 0;
}
