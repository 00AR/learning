//more manipulation of pointers
// and dynamic allocation of memory
// use of new and delete operators

#include <iostream>
using namespace std;

int main(){
    char *cptr = new char;
    *cptr = 'a';
    float *fptr = new float(17.32);
    int *val = new int;
    //heap(free memory store) is not infinite. whenever you allocate memory,
    //you must check the value returned by new operator to make sure it is
    //not null or zero BEFORE using the pointer. Using a null pointer will
    // almost certainly crash the system.
    if(val)
        *val = 7;
    else
        cout<<"Out of Memory !!";
    //creating Dynamic array
    int *value = new int[10];   // value supplied in square bracket[] in new operator works as array size
    // Two dimensional array using pointer.
    int row, col, *ind;
    cin>>row>>col;
    ind = new int[row*col];
    for(int i=0; i<row; i++){
        cout<<"Enter elements in row"<<i+1<<":";
        for(int j=0; j<col; j++){
            cin>>value[i*col+j];
        }
    }
    delete cptr, fptr, val, value, ind;
}