// Encapsulation is a method of making a complex system 
// easier to handle for end users. The user need not worry 
// about internal details and complexities of the system. 
// Encapsulation is a process of wrapping the data and the 
// code, that operate on the data into a single entity. You 
// can assume it as a protective wrapper that stops random 
// access of code defined outside that wrapper.
#include <iostream> 
using namespace std; 

class EncapsulationExample { 
    private: 
        // we declare a as private to hide it from outside 
        int number1; 
        
        public: 
        // set() function to set the value of a 
        void set(int input1) 
        { 
            number1 = input1; 
        } 
        
        // get() function to return the value of a 
        int get() 
        { 
            return number1; 
        } 
}; 

// main function 
int main() 
{ 
    EncapsulationExample myInstance; 
    myInstance.set(10);
    cout << myInstance.get() << endl; 
    return 0; 
}
// In the this program, the variable number1 is made private 
// so that this variable can be accessed and manipulated only 
// by using the methods get() and set() that are present within 
// the class. Therefore we can say that, the variable a and the 
// methods set() as well as get() have bound together that is 
// encapsulation. There is nothing special about the method 
// names "get()" or "set()" - there may be other methods that
//  manipulate the variable number1...all together this is called encapsulation.