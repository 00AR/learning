#include<iostream>
using namespace std;

class Complex{
    int real, img;
    
    public:
        Complex(){
            real =0;
            img = 0;
        }
        Complex(int r){
            real = r;
            img = r;
        }
        Complex(int r, int i){
            real = r;
            img = i;
        }

        friend Complex Sum(Complex &, Complex &);
        friend void result(Complex &);
};

Complex Sum(Complex &z1, Complex &z2){
    Complex z3;
    z3.real = z1.real + z2.real;
    z3.img = z1.img + z2.img;

    return (z3);
}

void result(Complex &z){
    cout<<"z = "<<z.real<<" + "<<z.img<<"i \n";
}

int main(){
    Complex z1, z2, z3, z;
    
    z1 = Complex();
    result(z1);
    z2 = Complex(6);
    result(z2);
    z3 = Complex(7,9);
    result(z3);

    z = Sum(z2,z3);
    cout<<"Sum z2 + z3 =  ";
    result(z);

    return 0;
}