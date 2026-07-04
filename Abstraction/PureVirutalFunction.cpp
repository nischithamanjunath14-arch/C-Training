#include<iostream>
using namespace std;
//Anstract classes cannot have objects but can have pointers and references to them. An abstract class is a class that has at least one pure virtual function. A pure virtual function is a virtual function that is declared by assigning 0 in its declaration. It is used to create an interface in C++. The derived class must implement the pure virtual function of the base class, otherwise, the derived class will also become an abstract class.
class Animal{
    public:
    virtual void sound()=0; // pure virtual function -->classes having pure virtual function are called abstract classes
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"Dog Barks"<<endl;
    }
};
int main(){
    
    Dog d;
    d.sound();
    return 0;
}