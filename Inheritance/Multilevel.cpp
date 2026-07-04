#include<iostream>
using namespace std;
class Animal{
    public:
    void Eat(){
        cout<<"Animal is Eating"<<endl;}
        

    };

class Dog: public Animal{
    public:
    void Bark(){
        cout<<"Dog is Barking"<<endl;
    }
};
class puppy: public Dog{
    public:
    void weep(){
        cout<<"Puppy is Weeping"<<endl;
    }
    
};
int main(){
    puppy p;
    p.Eat();
    p.Bark();
    p.weep();
    return 0;
}


