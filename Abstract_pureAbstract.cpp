 #include <iostream>
#include <string>
using namespace std;
class Employee // this class is abstract 
//class as it contains pure virtual function
{
  protected:
  int salary;
  public:
  Employee()
  {
    salary =0;
  }
  Employee(int s)
  {
    salary = s;
  }
  virtual void computeTax()=0; // pure virtual function
  void display()
  {
    cout<<"Salary after tax deduction: "<<salary<<endl;
  }
};

class Faculty: public Employee
{
  public:
  Faculty (int salary):Employee(salary)
  {

  }
  void computeTax() // here we are overriding the computeTax() function
  {
    salary = salary - (salary*0.1);
  }

};

int main()
{
  Employee *ptr;
  Faculty ObjF(10000);
  ptr = &ObjF;
  ptr->computeTax();
  ptr->display();
} 