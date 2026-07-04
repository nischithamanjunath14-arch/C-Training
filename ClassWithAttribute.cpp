#include<iostream>
using namespace std;
class Student{
    public:
    int usn;
    string name;
    Student(int u, string n){
        usn=u;
        name=n;
    }
    void display(){
        cout<<"USN: "<<usn<<endl;

        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    Student s1(123, "Alice");
    Student s2(456, "Bob");
    s1.display();
    s2.display();
    return 0;
}