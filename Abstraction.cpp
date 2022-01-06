// Abstraction is the concept of object-oriented 
// programming that "shows" only essential attributes 
// and "hides" unnecessary information. The main purpose of 
// abstraction is hiding the 
// unnecessary details from the users. Abstraction 
// is selecting data from a 
// larger pool to show only relevant 
// details of the object to the user. It helps in 
// reducing programming complexity and efforts. 
// It is one of the most important concepts of OOPs.
#include <iostream>

using namespace std; 

class Summation { 
   private: 
      // private variables 
      int myNum1, myNum2, myNum3;
   public: 
      void sum(int inNum1, int inNum2) 
      { 
          myNum1 = inNum1; 
          myNum2 = inNum2; 
          myNum3 = myNum1 + myNum2; 
          cout << "Sum of the two number is : " << myNum3<<endl; 
      } 
}; 
int main() 
{ 
    Summation mySum; 
    mySum.sum(5, 4); 
    return 0; 
} 
// In this case the variables myNum1, myNum2 and myNum3 
// are private, thereby in accessible to any code other 
// than the class Summation. In this example the variables 
// are set to values passed in as arguments to the sum method. 
// This is not a very true example - 
// often the values would NOT be set just before being 
// used like this, but it shows the reality of the implementation.