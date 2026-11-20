#include <iostream>
using namespace std;

class billing
{ public:
        void calculateBill(float a, float b)
        {
	 float bill_2=a+b;
         cout << "\nTotal Bill for 2 products is: " << bill_2 << endl;
	 if (bill_2>100)
	 {
	  cout << "10% DISCOUNT APPLIED!!!" << endl;
	  float dis = bill_2 * 0.10;
	  float new_bill = bill_2 - dis;
	  cout << "Your bill after discount is: " << new_bill << endl;
	 }
	 else
	 {
	  cout << "No Discount, Shop for at least 100$" << endl;
	 }
        }

        void calculateBill(float a, float b, float c)
        {
	 float bill_3=a+b+c;
         cout << "\nTotal Bill for 3 products is: " << bill_3 << endl;
	 if (bill_3>100)
         {
          cout << "10% DISCOUNT APPLIED!!!" << endl;
          float dis = bill_3 * 0.10;
          float new_bill = bill_3 - dis;
          cout << "Your bill after discount is: " << new_bill << endl;
         }
         else
         {
          cout << "No Discount, Shop for at least 100$" << endl;
         }
        }

        void calculateBill(float a, float b, float c, float d)
        {
	 float bill_4=a+b+c+d;
         cout << "\nTotal Bill for 4 products is: " << bill_4 << endl;
	 if (bill_4>100)
         {
          cout << "10% DISCOUNT APPLIED!!!" << endl;
          float dis = bill_4 * 0.10;
          float new_bill = bill_4 - dis;
          cout << "Your bill after discount is: " << new_bill << endl;
         }
         else
         {
          cout << "No Discount, Shop for at least 100$" << endl;
         }

        }

};

int main()
{
 cout << "\n===== SHOPPING MALL BILLING =====" << endl;
 billing b1;
 b1.calculateBill(44, 66);
 b1.calculateBill(63, 12, 3);
 b1.calculateBill(55, 33, 23, 18);
 return 0;
}

