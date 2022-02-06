#include <iostream>
using namespace std;

int a=10;                           //global 'a' with file scope.

int main(){
    int a=15;                       //a redeclared, local to main()
    cout<<"Main() "<<"\n";
    cout<<"a = "<<a<<"\n";          //local 'a'=15 printed
    cout<<"::a = "<<::a<<"\n";      //global 'a'=10 printed
    {   //inner block within main()
        int a=25;                   //'a' again declared, local to inner
        cout<<"Inner Block "<<"\n";
        cout<<"a= "<<a<<"\n";       //local 'a'=25 printed
        cout<<"::a "<<::a<<"\n";    //global 'a' is printed
    }
    cout<<"Back to Main() "<<"\n";
    cout<<"a= "<<a<<"\n";           //local 'a'=15 printed.
    cout<<"::a "<<::a<<"\n";        //global 'a'=10 printed.
    return 0;
}