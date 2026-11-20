#include <iostream>
using namespace std;

template <typename T>
void add(T a, T b)
{
    cout << "Addition is: " << a+b << endl;
}

int main()
{
 add(10, 30);
 add(5.2, 3.6);
 return 0;
}
