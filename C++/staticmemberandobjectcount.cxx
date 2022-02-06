#include <iostream>
using namespace std;

class X{
    int codeno;
    float price;
    static int count;
    public:
        void getVal(int i, float j){
            codeno = i;
            price = j;
            ++count;
        }
        void display(void){
            cout<<"Code no: "<<codeno<<"\t";
            cout<<"Price: "<<price<<"\n";
        }
        static void displaycount(void){
            cout<<"count = "<<count<<"\n";
        }
};

int X::count=0;

int main(){
    X obj1, obj2;
    obj1.getVal(101,25.12);
    obj2.getVal(102, 38.19);
    X::displaycount();
    X obj3;
    obj3.getVal(103, 49.00);
    X::displaycount();
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}