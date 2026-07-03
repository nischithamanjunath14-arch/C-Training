#include<iostream>
using namespace std;
int main(){
    int i =50;
    int *ptr = &i;
    cout<<ptr<<endl;// prints the address of i
    cout<<i<<endl;// prints the value of i
    cout<<&i<<endl;// prints the address of i
    cout<<&ptr<<endl;// prints the address of the pointer
    cout<<*ptr<<endl;// prints the value of i through the pointer
    
    return 0;
}