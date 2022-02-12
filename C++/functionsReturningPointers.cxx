// Function return a pointer 
#include <iostream>
using namespace std;

int *big(int &, int &);

int main(){
    int a, b, *c;
     cout<<"Enter two integers\n";
     cin>>a>>b;
     c = big(a,b);
     cout<<"The bigger value is "<<*c;

    return 0;
}

int *big(int &x, int &y){
    if(x>y)
        return (&x);
    else
        return (&y);
}