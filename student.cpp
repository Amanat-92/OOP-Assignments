
#include <iostream>
using namespace std;

class student
{
public:
    int studentID;
    int year;
    string branch;
    string studentName;

    void input()
    {
        cout << "Enter student ID Number: ";
        cin >> studentID;

        cout << "Student Name: ";
        cin >> studentName;

        cout << "Enter Academic year: ";
        cin >> year;

        cout << "Branch & Specialization: ";
        cin >> branch;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Student ID Number: " << studentID << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Academic Year: " << year << endl;
        cout << "Branch/Specialization: " << branch << endl;
        
    }
};

int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}