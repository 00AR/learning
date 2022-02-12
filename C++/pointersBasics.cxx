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
    will only store the address of int variable. But we are assigning the address of
    a float variable to ptr. hence the error: cannot convert ‘float*’ to ‘int*’ in assignment 
    */
    //int j =  44;
    //cout<<"\n"<<sizeof(int);
    //iptr+4 = &j;
    //error: it will not work 
    return 0;
}

/*
After compiling a program, C++ compiler creates four logically distinct regions
of memory that are used for four distinct specific functions.
_______________________________________
|               Stack               3 |
|_____________________________________|           
|               Heap                4 |  
|_____________________________________|
|   Global          |    Program      |
|   variables     2 |    Code       1 |
|___________________|_________________|

1. Every instruction and every function of the program starts at a particular address.
2. Global variables remain in the program as long as program continues
3. Stack is used for holding the return addresses at function calls, arguments passed to the 
   functions and local variables for functions. The stack also stores the current state of the
   CPU.
4. Heap memory area is a region of free memory from which chunks of memory are allocated via
   via dynamic memory allocation functions.

 '* operator' is called the dereferencing operator
 '& operator' is called Address operator
 
*/