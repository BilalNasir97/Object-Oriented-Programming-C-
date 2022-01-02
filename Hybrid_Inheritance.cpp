#include <iostream>
#include <string>
using namespace std;
class Animal
{
  public:
  void eat()
  {
    cout<<"Animal can eat"<<endl;
  }
};
class Mammal : public virtual Animal // virtual keyword is used to inherit from multiple classes
{
  public:
  void breath()
  {
    cout<<"Mammal can breath"<<endl;
  };
};
class WingedAnimal : public virtual Animal // virtual keyword is used to inherit from multiple classes

{
  public:
  void fly()
  {
    cout<<"WingedAnimal can fly"<<endl;
  }
};
class Bat : public Mammal, public WingedAnimal
{
  public:
  void fly()
  {
    cout<<"Bat can fly"<<endl;
  }
};


int main()
{
  Bat b;
  b.eat();
  b.breath();
  b.fly();
  return 0; 


};