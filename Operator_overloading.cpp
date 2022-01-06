#include <iostream>
#include <string>
using namespace std;
//  // operator overloading is a process in 
//  which one class defines another 
//  class as any entity reference. It is 
//  another way to reuse the class. It is 
//  a form of association 
//  that represents HAS-A relationship.
class Test
{
  int var1;
  float var2;
  public:
  Test()
  {
    var1=0;
    var2=0.0;
  }
  Test(int var1, float var2)
  {
    this->var1=var1;
    this->var2=var2;
  }
  Test operator+(Test &o) // operator overloading // &o is the reference to the object
  {
    Test result;
    result.setVar1(getVar1()+o.getVar1()); //o.getVart1() is pointing to the Var1 of the T2 object
    result.setVar2(getVar2()+o.getVar2()); //o.getVart2() is pointing to the Var2 of the T2 object
    return result;
  }
  void setVar1(int var1)
  {
    this->var1=var1;
  }
  void setVar2(float var2)
  {
    this->var2=var2;
  }
  int getVar1()
  {
    return var1;
  }
  float getVar2()
  {
    return var2;
  }
  void display()
  {
    cout<<"var1 = "<<var1<<endl;
    cout<<"var2 = "<<var2<<endl;
  }


};




int main()
{
  Test T1(10,20.5);
  Test T2(30,40.5);
  Test T3= T1+T2; 
  T3.display();



  return 0;
}