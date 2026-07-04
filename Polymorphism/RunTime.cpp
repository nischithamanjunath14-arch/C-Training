#include<iostream>
using namespace std;

 class Mom{
    public:
    void cook(){
        cout<<"Mom is cooking Indian Food"<<endl;
    }   
};
class Daughter:public Mom{
    public:
    void cook(){//overriding the cook method of Mom class
        cout<<"Daughter is cooking Italian Food"<<endl;
    }
};
int main(){
    Mom m;
    Daughter d;
    m.cook();
    d.cook();
    return 0;
}