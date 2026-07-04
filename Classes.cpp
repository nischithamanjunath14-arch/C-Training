#include<iostream>
using namespace std;
class Hello{
    public:
  void printHello(){
        cout<<"Hello"<<endl;

    }
    private:
    void printHi(){
        cout<<"Hii"<<endl;
    }

    
    

};
int main(){
    //Hello::printHello();  //if methos is static then we can call it without creating object of class  
    Hello obj;
    obj.printHello();         
    
    return 0;
}