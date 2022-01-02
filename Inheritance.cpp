#include <iostream>
#include <string>
using namespace std;
class Person
{
  protected:
  int id;
  string name;
  public:
  Person()
  {
    int id=0;
    string name="";
  }
  Person(int id, string name)
  {
    this->id = id;
    this->name = name;
  }
  //setters
  void setId(int id)
  {
    this->id = id;
  }
  void setName(string name)
  {
    this->name = name;
  }
  //getters
  int getId()
  {
    return id;
  }
  string getName()
  {
    return name;
  }
  // void display()
  // {
  //   cout<<"Person Id: "<<id<<endl;
  //   cout<<"Person Name: "<<name<<endl;
  // }

};
class Employee : Person
{
  private:
  int salary;
  public:
  Employee()
  {
    int salary=0;
  }
  Employee(int id, string name, int salary):Person(id,name)
  {
    this->salary = salary;
  }
  //setters
  void setSalary(int salary)
  {
    this->salary = salary;
  }
  //getters
  int getId()
  {
    return salary;
  }
  void display()
  {
    cout<<"Employee Id: "<<id<<endl;
    cout<<"Employee Name: "<<name<<endl;
    cout<<"Employee Salary: "<<salary<<endl;
  }
};


int main(){
  Employee e1(21,"Bilal",60000);
  e1.display();
  return 0;
}