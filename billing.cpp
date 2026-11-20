#include <iostream>
using namespace std;

class billing
{ public:
	void calculateBill(float a, float b)
	{
	 cout << "Total Bill for 2 products is: " << a+b << endl;
	}

	void calculateBill(float a, float b, float c)
        {
         cout << "Total Bill for 3 products is: " << a+b+c << endl;
        }

	void calculateBill(float a, float b, float c, float d)
        {
         cout << "Total Bill for 4 products is: " << a+b+c+d << endl;
        }

};

int main()
{
 cout << "\n===== SHOPPING MALL BILLING =====" << endl;
 billing b1;
 b1.calculateBill(44, 16);
 b1.calculateBill(63, 12, 3);
 b1.calculateBill(55, 33, 23, 18);
 return 0;
}
