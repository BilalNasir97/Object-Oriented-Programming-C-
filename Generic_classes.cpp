 #include <iostream>
#include <string>
using namespace std;
// The method of Generic Programming is 
// implemented to increase the efficiency of 
// the code. Generic Programming enables the 
// programmer to write a general algorithm which
//  will work with all data types. It eliminates 
//  the need to create different algorithms if 
// the data type is an integer, string or a character.
template <class T> // template class
class Test
{
  T arr[5];
  public:
  void insertData(T data, T index)
  {
    if(index<5)
      arr[index] = data;
  }
  void display(int lastIndex)
  {
    for(int i=0;i<=lastIndex;i++)
    {
      cout<<arr[i]<<" ";
    }
  }
};

int main()
{
  Test <int> obj; // int is the template parameter
  obj.insertData(10,0);
  obj.insertData(20,1);
  obj.display(1);
  Test <char> obj1; // char is the template parameter
  obj1.insertData('H',0);
  obj1.insertData('E',1);
  obj1.insertData('L',2);
  obj1.insertData('L',3);
  obj1.insertData('O',4);
  obj1.display(5);
  
}