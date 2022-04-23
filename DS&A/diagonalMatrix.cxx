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
    return 0;
}