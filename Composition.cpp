#include <iostream>
#include <string>
using namespace std;
 class Location
 {
   private:
   int x,y;
   public:
    Location()
    {
      x=0;
      y=0;
    }
    Location(int x,int y)
    {
      this->x=x;
      this->y=y;
    }
    void set_X(int x)
    {
      this->x=x;
    }
    void set_Y(int y)
    {
      this->y=y;
    }
    int get_X()
    {
      return x;
    }
    int get_Y()
    {
      return y;
    }

 };
class Person
{
  private:
   int id;
   string name;
   Location loc; //object of Location class
  public:
  Person()
  {
    int id=0;
    string name="";
  };
  Person (int id, string name, Location loc)
  {
    this->id=id;
    this->name=name;
    this->loc=loc;
  }

  // Setters

  void set_Id(int id)
  {
    this->id=id;
  };
  void set_name(string name)
  {
    this->name=name;
  };
  void set_Location(int x,int y)
  {
    loc.set_X(x);
    loc.set_Y(y);
  };
 
  // Getters

  int get_Id()
  {
    return id;
  };
  string get_name()
  {
    return name;
  };
  Location get_Location()
  {
    return loc;
  };
  void display()
  {
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Location: ("<<loc.get_X()<<","<<loc.get_Y()<<")"<<endl;
  };
  
 
};





int main(){
Person p;
p.set_Id(1);
p.set_name("A");
p.set_Location(1,2);
p.display();
};