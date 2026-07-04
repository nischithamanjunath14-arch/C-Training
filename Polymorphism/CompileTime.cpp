#include<iostream>
using namespace std;
class Addition{
    public:
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
};
int main(){
    Addition obj;
    cout<<"Addition of 2 integers: "<<obj.add(10,20)<<endl; 
    return 0;
}