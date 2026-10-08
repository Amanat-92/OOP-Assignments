#include <iostream>
using namespace std;

class university
{ public:
    string name;
    int age;
    int contact;

 void info()
 {
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Contact No. : " << contact << "\n";
 }
};

class student: public university
{ public:
    int rollno;
    string branch;

 void specific()
 {
  cout << "Student Roll No.: " << rollno << endl;
  cout << "Branch: " << branch << endl;
 }
};

int main()
{
 student s1;
 s1.name="Nobita";
 s1.age=18;
 s1.contact=123456789;
 s1.rollno=23;
 s1.branch="SoAI";
 s1.info();
 s1.specific();
 return 0;
}

