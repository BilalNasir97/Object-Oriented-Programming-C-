#include <iostream>
using namespace std;
class Medicine{
    public:
        Medicine(string name,int price,int quantity){
            this->name=name;
            this->price=price;
            this->quantity=quantity;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Quantity: "<<quantity<<endl;
        }
        string getName(){
            return name;
        }
        int getPrice(){
            return price;
        }
        int getQuantity(){
            return quantity;
        }
        void setQuantity(int quantity){
            this->quantity=quantity;
        }
        void setPrice(int price){
            this->price=price;
        }
        void setName(string name){
            this->name=name;
        }
    private:
        string name;
        int price;
        int quantity;
};

int main() 
{
    Medicine M1("Paracetamol",100,10);
    M1.display();
    Medicine M2("Crocin",200,20);
    M2.display();
    Medicine M3("Dolo",300,30);
    M3.display();
    Medicine M4("Vicks",400,40);
    M4.display();
 
    return 0;
}