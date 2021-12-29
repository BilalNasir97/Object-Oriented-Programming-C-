// Example program
#include <iostream>
#include <string>
using namespace std;
class Product
{
public:
    
    int prod_id;
    string name;
    float value;
    void display()
    {
        cout<<prod_id<<endl;
        cout<<name<<endl;
        cout<<value<<endl;
        
    };
    
    
    
};
int main()
{
    Product p;
    p.prod_id = 12;
    p.name = "Panadol";
    p.value = 2;
    p.display();
    return 0;
}
