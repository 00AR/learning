#include <iostream>
using namespace std;

class Item{
    int itemno;
    float price;
    public:
        void getData(int i, float j){
            itemno = i;
            price = j;
        }

        void putData(void){
            cout<<"Itemno: "<<itemno<<"\t";
            cout<<"Price: "<<price<<"\n";
        }
};

const int size = 5;
Item order[size];

int main(){
    int ino;
    float cost;
    //Get values for all items.
    for (int index=0; index<size; index++){
        cout<<"Enter itemno and price for item "<<index+1<<"\n";
        cin>>ino>>cost;
        order[index].getData(ino, cost);        //invoke getData() for a 
    }                                           //particular object with the given values
    //Print Details
    for (int index=0; index<size; index++){
        cout<<"\tItem "<<index+1<<"\n";
        order[index].putData();                 //invoke putData() for a particular object 
    }
}
