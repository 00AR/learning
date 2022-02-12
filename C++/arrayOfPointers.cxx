// program explaining how to use array of pointers

#include <iostream>
using namespace std;

int main(){
    int *ipt[5];
    int a=65, b=67, c=68, d=322, e=54;
    ipt[0]=&a;
    ipt[1]=&b;
    ipt[2]=&c;
    ipt[3]=&d;
    ipt[4]=&e;
    //printing values of the a,b,c,d and e using pointers
    for(int i=0; i<5; i++)
        cout<<*ipt[i]<<"\n";    // used * for accessing the value stored at specific memory address
    cout<<"\n";
    //printing the base address of the array of pointers.
    for(int i=0; i<5; i++)
        cout<<ipt[i]<<"\n";

    return 0;
}