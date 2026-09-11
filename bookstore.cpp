#include <iostream>
using namespace std;

class book
{ public:
	string title;
	int bookID;
	int price;

void display()
{
 cout << "Book Title: " << title << "\n";
 cout << "Book ID: " << bookID << "\n";
 cout << "Book Price: ₹" << price << "\n";
 cout << " " << "\n";
}

book()
{
 title="Wings of Fire";
 bookID=101;
 price=799;
}

book(string ti, int id, int pri)
{
 title=ti;
 bookID=id;
 price=pri;
}
};

int main()
{
 cout << "\n=====BOOK CATALOGUE=====\n";
 book b1;
 b1.display();
 book b2("Atomic Habits", 102, 599);
 b2.display(); 
return 0;
}

