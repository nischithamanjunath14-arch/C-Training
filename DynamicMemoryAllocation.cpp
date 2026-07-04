#include<iostream>
using namespace std;
int main(){
    int i =50;
    int *ptr=&i;
    ptr = (int*)malloc(5*sizeof(int));
    for(int j=0;j<5;j++){
        cin>>ptr[j];
    }
    cout<<"User Entered Values are: "<<endl;
    for(int j=0;j<5;j++){
        cout<<ptr[j]<<endl;
    }
    free(ptr);
    // cout<<"After Freeing the Memory: "<<endl;
    // for(int j=0;j<5;j++){
    //     cout<<ptr[j]<<endl;
    // }

    ptr = nullptr; // setting the pointer to nullptr after freeing the memory to avoid dangling pointer
    return 0;   
}