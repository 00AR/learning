//program demonstrating relation between 
//pointers and arrays.

#include <iostream>
using namespace std;

int main(){
    int *a;
    int age[10];
    
    a=age;      //storing the memory address pointed by 'age' in 'a'
    
    for (int i=0; i<10; i++){
        a[i] = 23-i;
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    //To print the value of specific array element
    cout<<age[6]<<"\n";
    // we can also use the expression
    cout<< *(age + 6);

    return 0;
}