#include<iostream>
using namespace std;
class Vehicle{
    public:
    void fuel(){
        cout<<"Fuel is filled"<<endl;

    }

    
    

};
class Car: public Vehicle{
    public:
    void Enginestart(){
        cout<<"Engine Started"<<endl;
    }
    
};
int main(){
    Car c;
    c.fuel();
    c.Enginestart();
    return 0;
}