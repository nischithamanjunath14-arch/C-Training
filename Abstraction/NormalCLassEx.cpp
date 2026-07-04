#include<iostream>
using namespace std;
class Bank{
    private:
    int balance =100;
    public:
    void depositAmount(int amount){
        balance+=amount;
    }
    void showBalance(){
        cout<<"Balance is: "<<balance<<endl;
    }
    void withdrawAmount(int amount){
        if(amount>balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            balance-=amount;
        }
    }
};
int main(){
    Bank cust1;
    cust1.depositAmount(1000);
    cust1.showBalance();
    cust1.withdrawAmount(500);
    cust1.showBalance();
    return 0;
}