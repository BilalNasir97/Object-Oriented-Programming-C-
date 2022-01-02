#include <iostream>
#include <string>
using namespace std;
class Area
{
  public:
  int getArea(int l, int b)
  {
    return l*b;
  }
  void display()
  {
    cout<<"Display function of Area class "<<endl;
  }
};
class Perimeter
{
  public:
  int getPerimeter(int l, int b)
  {
    return 2*(l+b);
  }
  void display()
  {
    cout<<"Display fucntion of Perimeter class "<<endl;
  }
};
class Rectangle : public Area, public Perimeter // Rectangle class inherits from Area and Perimeter class 
// public inheritance

{
  int length, breadth;
  public:
  Rectangle()
  {
    length=0;
    breadth=0;
  }
  int getArea(int l, int b)
  {
    return Area::getArea(l,b); // :: is used to access the members of the base class
  }
  int getPerimeter(int l, int b)
  {
    return Perimeter::getPerimeter(l,b); // :: is used to access the members of the base class
  }
  void display()
  {
    cout<<"Display function of rectangle class "<<endl;
  }
};
int main()
{
  Rectangle r;
  cout<<"Area of Rectangle: "<<r.getArea(2,3)<<endl;
  cout<<"Perimeter of Rectangle: "<<r.getPerimeter(2,3)<<endl;
  r.Area::display();
  r.display();
  return 0;

}