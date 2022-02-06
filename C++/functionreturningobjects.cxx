#include <iostream>
using namespace std;

class Distance{
    int feet, inches;
    public:
        void getData(int f, int i){
            feet = f;
            inches = i;
        }
        void printIt(void){
            cout<<feet<<"feet "<<inches<<"inches "<<"\n";
        }
        Distance sum(Distance d2);      //add Distance to current Distance object
};

Distance Distance::sum(Distance d2){
    Distance d3;                        //create obejct d3 of type Distance
    d3.feet = feet+d2.feet+(inches+d2.inches)/12;	//here feet and inches are the members of the object that calls this function
    d3.inches = (inches+d2.inches)%12;
    return (d3);
}

int main(){
    Distance length1, length2, total;
    length1.getData(17,6);
    length2.getData(13,8);
    total = length1.sum(length2);
    cout<<"\nLength 1: ";
    length1.printIt();
    cout<<"\nLength 2: ";
    length2.printIt();
    cout<<"\nTotal length: ";
    total.printIt();
    return 0;
}
