#include <iostream>
using namespace std;

class vehicle
{ public:
   int price;
   string model;

 void start()
 {
  cout << "Vehicle Started!" << "\n";
 }
};

class car: public vehicle
{ public:
    float cc;
    int noofdoors;

 void fuel()
 {
  cout << "Fuel Tank Full!" << "\n";
 }

 void display1()
 {
  cout << "Price: " << price << "\n";
  cout << "Model: " << model << "\n";
  cout << "Engine Capacity (cc): " << cc << "\n";
  cout << "No. of Doors: " << noofdoors << "\n";
 }
};

class bike: public vehicle
{ public:
    int seatheight;
    int ground;

 void ride()
 {
  cout << "Bike Ride successful!" << "\n";
 }

 void display2()
 {
  cout << "Price: " << price << "\n";
  cout << "Model: " << model << "\n";
  cout << "Seat Height: " << seatheight << "\n";
  cout << "Ground Clearance: " << ground << "\n";
 }

};

class evcar: public vehicle
{ public:
    int range;
    int chargetime;

 void charge()
 {
  cout << "Charging EV!" << "\n";
 }

 void display3()
 {
  cout << "Price: " << price << "\n";
  cout << "Model: " << model << "\n";
  cout << "Range (in KM): " << range << "\n";
  cout << "Charging time: " << chargetime << "\n";
 }

};


int main()
{
 car c1;
 c1.price=500000;
 c1.model="A Star";
 c1.cc=998.98;
 c1.noofdoors=4;
 c1.fuel();
 c1.display1();

 bike b1;
 b1.price=225000;
 b1.model="Hunter";
 b1.seatheight=790;
 b1.ground=160;
 b1.ride();
 b1.display2();

 evcar e1;
 e1.price=1500000;
 e1.model="XEV 9s";
 e1.range=600;
 e1.chargetime=90;
 e1.charge();
 e1.display3();

 return 0;
}





