#include <iostream>
using namespace std;

class Complex{
    int real, img;
    
    public:
		Complex(){
			real = 0;
			img = 0;
		}
        Complex(int r, int i){
            this->real = r;
            this->img = i;
        }

        friend Complex operator +(Complex &, Complex &);
        friend void result(Complex &);
};
Complex operator +(Complex &z1, Complex &z2){
    Complex z3;
    z3.real = z1.real + z2.real;
    z3.img = z1.img + z2.img;

    return (z3);
}

void result(Complex &z){
    cout<<"z = "<<z.real<<" + "<<z.img<<"i \n";
}

int main(int argc, char **argv)
{
	Complex z1, z2, z;
    
    z1 = Complex(6,4);
    result(z1);
    z2 = Complex(7,9);
    result(z2);

    z = z1 + z2;
    cout<<"Sum z1 + z2 =  ";
    result(z);
    
	return 0;
}

