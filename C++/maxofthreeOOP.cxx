#include<iostream>
using namespace std;

class Largest{
    int x,y,z;
    int max;
    public:
        Largest(int a, int b, int c){
            x=a;
            y=b;
            z=c;
           
            max = maxOf(maxOf(x,y), z);
        }

        int maxOf(int a, int b){
            return (a>b) ? a : b;
        }
        
        int getMax(){
            return max;
        }
};

int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    Largest obj(a,b,c);
    int largest = obj.getMax();
    cout<<"Largest of the three is "<<largest<<"\n";

    return 0;
}