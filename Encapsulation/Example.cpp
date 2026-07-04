#include<iostream>
using namespace std;

   class Student{
    private:
    int marks;
    public:
    string name;
    int usn;

    Student(string n, int u, int m){
        name=n;
        usn=u;
        marks=m;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"USN: "<<usn<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    string getName(){
        return name;
    }
    void setName(string n){
        name=n;
    }
   };
   int main(){
    Student s1("Alice", 123, 90);
    s1.display();
    // s1.marks=95; // modifying the marks of the student object//bad practice to modify the attributes of the object directly from outside the class. It is better to use setter methods to modify the attributes of the object.
    // cout<<"After modifying marks: "<<endl;
    // s1.display();
    s1.setName("Bob");
    cout<<"After modifying name: "<<endl;  
     
    s1.display();
    return 0;

}