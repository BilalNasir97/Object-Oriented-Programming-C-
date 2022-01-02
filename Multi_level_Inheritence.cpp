#include <iostream>
#include <string>
using namespace std;
class Person
{ protected:
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
  void display()
  {
    cout<<"Person Id: "<<id<<endl;
    cout<<"Person Name: "<<name<<endl;
  }

};
class Employee : private Person
{
  int salary;
  string company;
  public:
  Employee()
  {
    int salary=0;
    string company="";
  }
  Employee(int id, string name, int salary, string company):Person(id,name)
  {
    this->salary = salary;
    this->company = company;
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
    Person::display();
    cout<<"Company Name: "<<company<<endl;
    cout<<"Salary: "<<salary<<endl;
  }
};
class Programmer : Employee
{
  int languages;
  public:
  Programmer()
  {
    int languages=0;
  }
  Programmer(int id, string name, int salary, string company, int languages):Employee(id,name,salary,company)
  {
    this->languages = languages;
  }
  //setters
  void setLanguages(int languages)
  {
    this->languages = languages;
  }
  //getters
  int getId()
  {
    return languages;
  }
  void display()
  {
    Employee::display();
    cout<<"Programming Languages: "<<languages<<endl;
  }


};


int main(){
  Programmer p1(2018065034,"Bilal Nasir",50000,"Google",3);
  p1.display();
  return 0;
}