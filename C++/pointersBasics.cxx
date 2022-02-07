//Some basic use of pointers
//and some experiments
#include <iostream>
using namespace std;

int main(){
    int i=25;
    int *iptr;
    iptr = &i;  // storing the address of the variable i in iptr.
    cout<<"i = "<<i<<", iptr = "<<iptr<<"\n";
    cout<<"i = "<<*iptr;    // print the value of i using pointer iptr.
    /*
    float a;
    int *ptr;
    cin>>a;
    ptr = &a;
    this will produce error as the the pointer variable 'ptr' 
    will only store the address of int variable. But we are assigning 
    a float variable to ptr. hence the error: cannot convert ‘float*’ to ‘int*’ in assignment 
    */
    //int j =  44;
    //cout<<"\n"<<sizeof(int);
    //iptr+4 = &j;
    //error: it will not work 
    return 0;
}