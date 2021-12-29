#include <iostream>
#include <string>
using namespace std;
class Product
{
private: 
    int prod_id;
    string name;
    float value;
public:
    void display()
    {
        cout<<"Product id is: "<<getProd_id()<<endl;
        cout<<"Name of the Product is: "<<getName()<<endl;
        cout<<"Value of the Product is: "<<getValue()<<endl;
        
    };
    void setProd_id(int p)
    {
        if (p>0)
        {
            prod_id=p;
        }
        else
        {
            cout<<"Invalid Product id"<<endl;
        }
    }
    void setName(string n)
    {
        if (n!="")
        {
            name=n;
        }
        else
        {
            cout<<"Invalid Name"<<endl;
        }
        
    }
    void setValue(float v)
    {
        if (v > 0)
        {
            value=v;
        }
        else
        {
            cout<<"Value cannot be negative"<<endl;
        }
    }
    int getProd_id()
    {
        return prod_id;
    }
    string getName()
    {
        return name;
    }
    float getValue()
    {
        return value;
    }
};
int main()
{
    Product p;
    p.setProd_id(1);
    p.setName("Laptop");
    p.setValue(10000);
    // int prod_main;
    // cout<<"Enter the product id: ";
    // cin>>prod_main;
    // p.setProd_id(prod_main);
    // string name_main;
    // cout<<"Enter the product name: ";
    // cin>>name_main;
    // p.setName(name_main);
    // float value_main;
    // cout<<"Enter the product value: ";
    // cin>>value_main;
    // p.setValue(value_main);
    p.display();

    return 0;
}