#include<iostream>
using namespace std;
void swap(int a, int b){
  int temp = a;
  a = b;            
    b = temp;
    cout<<"Inside Swap Function: "<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}

int main(){
    int a = 10;
    int b = 20;
    cout<<"Before Swap Function: "<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    swap(a,b);
    cout<<"After Swap Function: "<<endl;
    cout<<"Value of a: "<<a<<endl;  
    cout<<"Value of b: "<<b<<endl;
    
    
    return 0;
}