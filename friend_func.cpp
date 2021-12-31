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
  Car(string name, int price)
  {
    this->name = name;
    this->price = price;

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
  ~Car()
  {
    cout<<"Destructor called"<<endl;
  }
   friend void display(Car &obj); // friend function // Now we can access private members of Car class
};
void display(Car &obj)  // Car obj = c1; // here & is used to pass the object by reference
{
  cout<<"Car Details:"<<endl;
  cout<<obj.name<<endl; 
  cout<<obj.price<<endl; // we cant access private members of the class using obj.price 
  //but if we make friend fucntion than we can.
};
 
int main()
{
 Car c1("Audi",100000);
 Car c2("BMW",200000);
 display(c1);
 display(c2);
 cout<<c1.get_Name()<<endl;
 cout<<c2.get_Name()<<endl;
};