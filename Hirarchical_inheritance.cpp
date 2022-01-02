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
  { cout<<"Employee Details: "<<endl;
    cout<<"Employee Id: "<<id<<endl;
    cout<<"Employee Name: "<<name<<endl;
    cout<<"Employee Salary: "<<salary<<endl;
  }
};
class Student: Person
{
  private:
  int marks;
  public:
  Student()
  {
    int marks=0;
  }
  Student(int id, string name, int marks):Person(id,name) // : base class constructor
  {
    this->marks = marks;
  }
  //setters
  void setMarks(int marks)
  {
    this->marks = marks;
  }
  //getters
  int getId()
  {
    return marks;
  }
  void display()
  {
    cout<<"Student Detials: "<<endl;
    cout<<"Student Id: "<<id<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student Marks: "<<marks<<endl;
  }
};


int main(){
  Student s1(25,"Bilal",78);
  s1.display();
  Employee e1(12,"Ali",50000);
  e1.display();
  return 0;
}