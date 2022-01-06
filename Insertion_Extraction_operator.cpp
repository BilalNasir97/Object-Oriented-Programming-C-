#include <iostream>
#include <string>
using namespace std;
class Person
{
  int id;
  string name;
  public:
  Person()
  {
    id=0;
    name="";
  }
  friend istream &operator>>(istream &in , Person &o); //friend function is used to access private data members of class
  friend ostream &operator<<(ostream &out, Person &o);
 

};

 istream &operator>>(istream &in , Person &o) // istream is used to read data from keyboard
  {
    cout<<"Enter id: ";
    in>>o.id;
    cout<<"Enter name: ";
    in>>o.name;
    return in;
  }
  ostream &operator<<(ostream &out, Person &o) // ostream is used to write data to screen
  {
    out<<"Id: "<<o.id<<endl;
    out<<"Name: "<<o.name<<endl;
    return out;
  }
int main()
{
  Person p;
  cin>>p;
  cout<<p;
}