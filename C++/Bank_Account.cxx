#include<iostream>
using namespace std;

class Bank_Account{
    string depositor;
    string typeofacc;
    int accno;
    double balance;
    
    public:

        Bank_Account(string name, int acc, string type, double bal){
            depositor = name;
            accno = acc;
            typeofacc=type;
            balance=bal;
        }
        
        void deposit(double bal){
            balance = balance + bal;
            cout<<"Transaction Successful"<<"\n";
        }

        void withdraw(double bal){
            if(balance<bal){
                cout<<"Not enough balance!!!"<<endl;
                return;
            }
            balance = balance - bal;
        }

        void display(){
            cout<<"\nAccount Details: \n";
            cout<<"Account Holder: "<<depositor<<"\n";
            cout<<"Balance: "<<balance<<endl;
        }

};
/*
int main(){
    string dep, typeofacc;
    double balance;
    int accno;
    cout<<"Enter the name of the Account Holder: ";
    cin>>dep;
    cout<<"Type of account: ";
    cin>>typeofacc;
    cout<<"Account Number: ";
    cin>>accno;
    cout<<"Balance: ";
    cin>>balance;

    Bank_Account holder(dep, accno, typeofacc, balance);
    holder.display();

    holder.deposit(56500.89);
    holder.display();

    return 0;
}
*/