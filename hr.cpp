#include <iostream>
using namespace std;

class employee
{ public:
    int id;
    int exp;

 void display()
 {
  cout << "Employee ID: " << id << endl;
  cout << "Work Experience (Years): " << exp << endl;
 }

 employee(int i, int e)
 {
  id = i;
  exp = e;
  cout << "Constructor Invoked!" << endl;
 }

 ~employee()
 {
  cout << "Destructor Invoked!" << endl;
 }
};

int main()
{
 employee e1(2641, 5);
 e1.display();
 return 0;
}
