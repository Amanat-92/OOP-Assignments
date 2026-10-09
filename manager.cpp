#include <iostream>
using namespace std;

class person
{ public:
    string name;
    int contact;

};

class employee: public person
{ public:
    int id;
    string dept; 
};

class manager: public employee
{ public:
    float salary;
    int exp;

 void display()
 {
    cout << "Name: " << name << endl;
    cout << "Contact No.: " << contact << endl;
    cout << "Employee ID: " << id << endl;
    cout << "Department name: " << dept << endl;
    cout << "Salary: " << salary << endl;
    cout << "Work Experience (years): " << exp << endl;
 }
};


int main()
{
    manager m1;
    m1.name="Doraemon";
    m1.contact=12345678;
    m1.id=2641;
    m1.dept="AI";
    m1.salary=50000.00;
    m1.exp=5;
    m1.display();
    return 0;
}
