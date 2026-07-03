#include<iostream>
using namespace std;
int main(){
    int i=50;

    int *ptr= &i;
    int **ptr2= &ptr;
    cout<<ptr2<<endl;// prints the address of ptr
    int*** ptr3= &ptr2;
    cout<<ptr3<<endl;// prints the address of ptr2
    int**** ptr4= &ptr3;
    cout<<ptr4<<endl;// prints the address of ptr3
    int***** ptr5= &ptr4;
    cout<<ptr5<<endl;// prints the address of ptr4
   
    
    return 0;
}
//used in c++ linked list 
//we use double pointer to create a linked list because we need to change the head pointer of the linked list in the function. If we use a single pointer, we will not be able to change the head pointer of the linked list in the function. 
