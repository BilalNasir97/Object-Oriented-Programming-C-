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
  Car() //default constructor
  {
    name="";
    price=0;
    year=0;
    color="";
    cout<<"Default Constructor"<<endl;
  }
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
  ~Car() //Destructor
  {
    cout<<"Destructor called: "<<get_Name()<<endl;
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
Car c2;
c2.set_Name("Honda");
c2.set_Price(30000);
c2.set_Year(2019);
c2.set_Color("Blue");
c2.display();
Car c3;
c3.set_Name("Hyundai");
c3.set_Price(40000);
c3.set_Year(2020);
c3.set_Color("Black");
c3.display();
};