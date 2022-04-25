#include<iostream>
#include "Bank_Account.cpp"
using namespace std;

Bank_Account details(){
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
    return holder;
}

int main(){
    int ch;
    float money;
    const string usr = "abd";
    const string pas = "password";
    string s, p;
    cout<<"Login \n";
    cout<<"Enter username: ";
    cin>>s;
    cout<<"Enter password: ";
    cin>>p;
    
    if(usr.compare(s)==0&&pas.compare(p)==0){
        Bank_Account holder = details();
        int e;
        while(1){
            cout<<"\n\nABC Bank\n";
            cout<<"1. Deposit \n";
            cout<<"2. Withdraw \n";
            cout<<"3. Display Balance \n";
            cout<<"4. Exit \n";
            cout<<"Enter your choice: ";
            cin>>e;
            switch(e){
                case 1:
                    cout<<"Enter Amount to deposit: ";
                    cin>>money;
                    holder.deposit(money);
                    continue;
                case 2:
                    cout<<"Enter Amount to withdraw: ";
                    cin>>money;
                    holder.withdraw(money);
                    continue;
                case 3: 
                    holder.display();
                    continue;
                case 4:
                    exit(0);
                default: cout<<"Invalid choice!!! Try Again\n";
                            continue;
            }
        }
    }
    else{
        cout<<"Invalid username or password!!!\n";
        cout<<"Terminating...";
    }
    
    return 0;
}