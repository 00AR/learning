//Create two arrays to store rollno and marks of some students, 
//whose number is would be known at runtime.
#include <iostream>
using namespace std;

    int *rollno;    //declare an int pointer for rollno array
    float *marks;   //declare a float pointer for marks array

int main(){
    int size;
    cout<<"Mention the size of class\n";
    cin>>size;
    rollno = new int[size];     //dynamically allocate rollno array
    marks = new float[size];    //dynamically allocate marks array
    //Check whether the memory is available or not
    if((!rollno)||(!marks)){    // if rollno or marks array is null pointer
        cout<<"Out of memory!!";
        return 1;
    }
    //Read in values in the array elements
    for(int i=0; i<size; i++){
        cout<<"Enter rollno and marks for student "<<i+1<<"\n";
        cin>>rollno[i]>>marks[i];
    }
    //Display the array contents
    cout<<"\tRoll no \tMarks\n";
    for(int i=0; i<size; i++)
        cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<"\n";
    delete[]rollno, marks;
    //delete[]marks;
    return 0;
}