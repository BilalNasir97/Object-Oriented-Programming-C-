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
  Car(string name,int price,int year,string color) //parameterized constructor
  {
    this->name=name; //this->name is a pointer to the name variable of the class
    this->price=price;
    this->year=year;
    this->color=color;
    cout<<"Parameterized Constructor"<<endl;
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
Car c("Maruti",20000,2018,"Red");
c.display();
Car c2("Honda",30000,2019,"Blue");
c2.display();
Car c3("BMW",40000,2020,"Black");
c3.display();
string main_name; //Now taking input from the user
int main_price;
int main_year;
string main_color;
cout<<"Enter the name of the Car: ";
cin>>main_name;
cout<<"Enter the price of the "<<main_name<<endl;
cin>>main_price;
cout<<"Enter the year of the "<<main_name<<endl;
cin>>main_year;
cout<<"Enter the color of the "<<main_name<<endl;
cin>>main_color;
Car c4(main_name,main_price,main_year,main_color);
c4.display();


};