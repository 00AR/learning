#include<iostream>
using namespace std;

class DiagonalMatrix{
    float *a;
    int n;
    public:
        DiagonalMatrix(int n);
        void read();
        void print();
        DiagonalMatrix add(DiagonalMatrix B);
        DiagonalMatrix mul(DiagonalMatrix B);
        float det();
        DiagonalMatrix inverse();
};

DiagonalMatrix::DiagonalMatrix(int n){
    this->n = n;
    a = new float[n];
}

void DiagonalMatrix::read(){
    cout<<"Enter "<< n<< " diagonal elements of the matrix\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void DiagonalMatrix::print(){
    cout<<"The matrix is\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            if(i==j)
                cout<<a[i]<<"\t";
            else
                cout<<"0\t";
        cout<<"\n";
    }
}

DiagonalMatrix DiagonalMatrix::add(DiagonalMatrix B){
    if(n!=B.n)
        return B;
    DiagonalMatrix C(n);
    for(int i=0; i<n; i++)
        C.a[i]= a[i] + B.a[i];
    return C;
}

DiagonalMatrix DiagonalMatrix::mul(DiagonalMatrix B){
    if(n != B.n)
        return B;
    DiagonalMatrix C(n);
    for(int i=0; i<n; i++)
        C.a[i] = a[i] * B.a[i];
    return C;
}

float DiagonalMatrix::det(){
    float d=1;
    for(int i=0; i<n; i++){
        d += a[i];
    }
    return d;
}

DiagonalMatrix DiagonalMatrix::inverse(){
    if(det() == 0)
        return *this;
    DiagonalMatrix B(n);
    for(int i=0; i<n; i++)
        B.a[i] = 1.0 / a[i];
    return B;
}

int main(){
    int n;
    cout<<"Enter the order of the matrix ";
    cin>>n;
    DiagonalMatrix A(n), B(n);
    A.read();
    A.print();
    B.read();
    B.print();
    DiagonalMatrix C = A.add(B);
    C.print();
    C = A.mul(B);
    C.print();
    cout<<"\ndet(A) = "<<A.det();
    C = A.inverse();
    C.print();
    
    return 0;
}