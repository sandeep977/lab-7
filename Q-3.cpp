#include<iostream>
using namespace std;

class box
{
  public:
  double length;
  double breadth;

  double area()
  {
      return length*breadth;
  }

  double perimeter()
  {
      return 2*(length+breadth);
  }
};

int main()
{
	box box1;
	box box2;

	cout << "Enter the length & breadth of rectangle 1 respectively : ";
	cin >> box1.length >> box1.breadth;

	cout << "Enter the length & breadth of rectangle 2 respectively : ";
	cin >> box2.length >> box2.breadth;

    if(box1.area()>box2.area())
        cout << "Area of rectangle 1 is greater than that of rectangle 2";
    else
        cout << "Area of rectangle 1 is less than that of rectangle 2";

    if(box1.perimeter()>box2.perimeter())
        cout << "Perimeter of rectangle 1 is greater than that of rectangle 2";
    else
        cout << "Perimeter of rectangle 1 is less than that of rectangle 2";
}
