#include <iostream>
using namespace std;

class result
{ public:

    void calculateAvg(int a, int b)
    {
        cout << "Average of two integer marks: " << (a + b) / 2 << endl;
    }


    void calculateAvg(int x, int y, int z)
    {
        cout << "Average of three integer marks: " << (x + y + z) / 3 << endl;
    }


    void calculateAvg(float p, float q)
    {
        cout << "Average of two floating-point marks: " << (p + q) / 2.0f << endl;
    }
};

int main()
{
    result r;
    r.calculateAvg(16, 44);
    r.calculateAvg(16, 63, 92);
    r.calculateAvg(84.5f, 92.2f);
    return 0;
}
