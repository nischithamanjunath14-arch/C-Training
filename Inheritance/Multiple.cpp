#include<iostream>
using namespace std;
class Mom{
    public:
    void cook(){
        cout<<"Mom is Cooking"<<endl;
    }
        

    };

class Dad{
    public:
    void cook(){
        cout<<"Dad is Cooking"<<endl;
    }
};
class child: public Mom, public Dad{
    public:
    void study(){
        cout<<"Child is Studying"<<endl;
    }
    
};
int main(){
    Mom m;
    Dad d;  
    child c;
    m.cook();
    d.cook();
    c.Mom::cook();
    c.Dad::cook();
    c.study();
    return 0;
}


