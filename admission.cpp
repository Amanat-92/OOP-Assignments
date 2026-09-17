#include <iostream>
using namespace std;

class student
{ public:
	string name;
	float per;
	int year;

student(string name, float per, int year)
{
 this->name=name;
 this->per=per;
 this->year=year;
}

void display()
{
 cout << "Student Name: " << name << "\n";
 cout << "12th Percentage: " << per << "%" << "\n";
 cout << "Year of Admission: " << year << "\n";
 cout << " " << "\n";
}
};

int main()
{
 cout << "=====STUDENT DETAILS=====" << "\n";
 student s1("Doraemon", 98.56, 2026);
 s1.display();

 return 0;
}
