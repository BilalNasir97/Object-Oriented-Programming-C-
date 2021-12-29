#include <iostream>
#include <string>
using namespace std;
// Static inside a function
// void fun()
// {
//   static int i=0;
//   i++;
//   cout<<"value if I is "<<i<<endl;
// }

// int main()
// {
//   fun();
//   fun();
//   fun();
//   return 0;
// }



// Static inside a class
// class Car
// {
//   private:
//   string name;
//   int price;
//   static int count;
//   public:
//   Car() //default constructor
//   {
//     name="";
//     price=0;
//     count++;
//   }
//   Car(string name,int price) //parameterized constructor
//   {
//     this->name=name; //this->name is a pointer to the name variable of the class
//     this->price=price;
//   }
//   void display()
//   {
//     cout<<"Name of the car is "<<name<<endl;
//     cout<<"Price of the car is "<<price<<endl;
//   }
//   void set_Name(string n)
//   {
//     name=n;
//   }
//   void set_Price(int p)
//   {
//     price = p;
//   }
//   string get_Name()
//   {
//     return name;
//   }
//   int get_Price()
//   {
//     return price;
//   }
//   int get_Count()
//   {
//     return count;
//   }
//   ~Car()
//   {
//     cout<<"Destructor"<<endl;
//   }

// };

// int Car::count=0;

// int main()
// {
//   Car s;
//   cout<<s.get_Count()<<endl;
//   Car s2;
//   cout<<s2.get_Count()<<endl;
//   Car s3;
//   cout<<s3.get_Count()<<endl;
  // we do this method of static to 
  // check how many objects are created of this class,

// }



// Static objects
// class Car
// {
//   private:
//   string name;
//   int price;
//   static int count;
//   public:
//   Car() //default constructor
//   {
//     name="";
//     price=0;
//     count++;
//     cout<<"Constructor called"<<endl;
//   }
//   Car(string name,int price) //parameterized constructor
//   {
//     this->name=name; //this->name is a pointer to the name variable of the class
//     this->price=price;
//   }
//   void display()
//   {
//     cout<<"Name of the car is "<<name<<endl;
//     cout<<"Price of the car is "<<price<<endl;
//   }
//   void set_Name(string n)
//   {
//     name=n;
//   }
//   void set_Price(int p)
//   {
//     price = p;
//   }
//   string get_Name()
//   {
//     return name;
//   }
//   int get_Price()
//   {
//     return price;
//   }
//   int get_Count()
//   {
//     return count;
//   }
//   ~Car()
//   {
//     cout<<"Destructor called"<<endl;
//   }

// };

// int Car::count=0;

// void tempfun()
// {
//   static Car c; //static object is here
// }

// int main()
// {
//   tempfun();
//   cout<<"My message"<<endl;

// }



// static functions

class Car
{
  private:
  string name;
  int price;
  static int count;
  public:
  Car() //default constructor
  {
    name="";
    price=0;
    count++;
    cout<<"Constructor called"<<endl;
  }
  Car(string name,int price) //parameterized constructor
  {
    this->name=name; //this->name is a pointer to the name variable of the class
    this->price=price;
  }
  void display()
  {
    cout<<"Name of the car is "<<name<<endl;
    cout<<"Price of the car is "<<price<<endl;
  }
  void set_Name(string n)
  {
    name=n;
  }
  void set_Price(int p)
  {
    price = p;
  }
  string get_Name()
  {
    return name;
  }
  int get_Price()
  {
    return price;
  }
  static int get_Count() //static function is here
  {
    return count;
  }
  ~Car()
  {
    cout<<"Destructor called"<<endl;
  }

};

int Car::count=0;



int main()
{
  Car c1,c2,c3;
  cout<<Car::get_Count()<<endl;
  return 0;


}