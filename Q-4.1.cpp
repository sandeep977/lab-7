#include<iostream>
using namespace std;

class point
{
  public:
      int x;
      int y;
  int print()
  {
      cout << "(" << x << "," << y << ")";
      return 0;
  }
};

int main()
{
	point cod;
	cout << "Enter the x & y co-ordinates respectively : ";
	cin >> cod.x >> cod.y;
    return cod.print();
}
