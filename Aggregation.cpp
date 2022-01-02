#include <iostream>
#include <string>
using namespace std;
// In C++, aggregation is a process in which one class 
// defines another class as any entity reference. 
// It is another way to reuse the class. It is a form 
// of association that represents HAS-A relationship.
class Employee
{
  private:
  int id;
  string name;
  public:
  Employee()
  {
    int id=0;
    string name="";
  }
  Employee(int id, string name)
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
    cout<<"Employee Id: "<<id<<endl;
    cout<<"Employee Name: "<<name<<endl;
  }
};

class University 
{
  private:
  int id;
  string name;
  Employee *ptr;
  public:
  University()
  {
    int id=0;
    string name="";
    Employee *ptr=NULL;
  }
  University(int id, string name, Employee *ptr)
  {
    this->id = id;
    this->name = name;
    this->ptr = ptr;
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
  void setEmployee(Employee *ptr)
  {
    this->ptr = ptr;
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
  Employee *getEmployee()
  {
    return ptr;
  }
  void display()
  {
    cout<<"University Id: "<<id<<endl;
    cout<<"University Name: "<<name<<endl;
    ptr->display(); //calling display function of Employee class
  }
};


int main ()
{
  Employee e(1, "John");
  // University u(123, "MIT", &e);
  // u.display();
  e.display();
  //Here Employee exist in university 
  //but employee can also exist if it is not in university
};
