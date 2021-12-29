#include <iostream>
#include <string>
using namespace std;
class Car
{
  private:
  string name;
  int price;
  int year;
  string color;
  public:
  void set_Name(string n)
  {
    name=n;
  }
  void set_Price(int p)
  {
    price = p;
  }
  void set_Year(int y)
  {
    year = y;
  }
  void set_Color(string c)
  {
    color=c;
  }
  string get_Name()
  {
    return name;
  }
  int get_Price()
  {
    return price;
  }
  int get_Year()
  {
    return year;
  }
  string get_Color()
  {
    return color;
  }
  void display()
  {
    cout<<"Name of the Car is: "<<get_Name()<<endl;
    cout<<"Price of the Car is: "<<get_Price()<<endl;
    cout<<"Year of the Car is: "<<get_Year()<<endl;
    cout<<"Color of the Car is: "<<get_Color()<<endl;
  }

};
int main()
{
Car c;
c.set_Name("Maruti");
c.set_Price(20000);
c.set_Year(2018);
c.set_Color("Red");
c.display();
};