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
  int *ptr;
  public:
  Car() //default constructor
  {
    name="";
    price=0;
    year=0;
    color="";
    ptr=NULL;
  }
  Car(string name,int price,int year,string color,int x) //parameterized constructor
  {
    this->name=name; //this->name is a pointer to the name variable of the class
    this->price=price;
    this->year=year;
    this->color=color;
    ptr=new int;
    *ptr=x;
  }
  Car(const Car &p) //Deep copy constructor 
  {
    this->name=p.name;
    this->price=p.price;
    this->year=p.year;
    this->color=p.color;
    this->ptr=new int;
    *(this->ptr)=*(p.ptr);
    cout<<"Copy Constructor"<<endl;
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
    delete ptr;
    cout<<"Destructor called: "<<get_Name()<<endl;
  }

};
int main()
{
  Car c1("Maruti",1000000,2018,"Red",10);
  Car c2 = c1;
  c1.display();
  c2.display();
  return 0;


};