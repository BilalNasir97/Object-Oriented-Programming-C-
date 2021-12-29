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
  Car()
  {
    name = "";
    price = 0;
    year = 0;
    color = "";
  }
  Car(string name, int price, int year, string color)
  {
    this->name = name;
    this->price = price;
    this->year = year;
    this->color = color;
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

};
int main()
{
  Car s1("Audi", 100000, 2010, "Red");
  // s1.display(); // . operator is used to access the member functions
  Car *ptrS; // pointer to the class
  ptrS = &s1; // pointer to the object
  ptrS->display(); // -> operator is used to access the member functions

  Car s2= *ptrS;
  s2.set_Name("BMW");
  ptrS->set_Name("Mercedes"); 
  s2.display();
};