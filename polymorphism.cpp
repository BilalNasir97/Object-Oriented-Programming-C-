 #include <iostream>
#include <string>
using namespace std;
// In ploymorphism we can use same 
//function name for different functions
// Also in polymorphism we use use child class 
//functionalities by parent class pointer
class Student
{
  public:
  // virtual keyword is used to here to 
  //inherit from multiple children classes
  // Now we can use same function name for different functions
  virtual void computeGPA() 
  {
    cout<<"Compute GPA in student class"<<endl;
  }
};
class LocalStudent: public Student
{
  public:
  void computeGPA()
  {
    cout<<"Compute GPA in local student class"<<endl;
  }
};
class InternationalStudent: public Student
{
  public:
  void computeGPA()
  {
    cout<<"Compute GPA in international student class"<<endl;
  }
};
int main()
{
  Student *ptr; // pointer to  Parent Student class
  LocalStudent objLS; // Local Student object
  InternationalStudent objIS; // International Student object
  ptr = &objLS; // ptr points to Local Student object
  ptr->computeGPA(); // call Local Student computeGPA function
  // here if we do not use virtual keyword in Parent class function 
  //then it will call local student 
  //class function which is Student::computeGPA()
  ptr = &objIS;
  ptr->computeGPA();
  return 0;


}