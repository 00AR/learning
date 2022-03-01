//Algorithm for Selection Sort
/*
1. small = array[0] //initialize small with first element of array
2. For iter = 0 TO size-1 DO     //size-1 is the size of the array
{
3.  small = array[iter]
    //Loop to find the smallest element and its position
4.  for index = iter TO size-1 DO
    {
5.      if array[index] < small THEN
        {
6.          small = array[index]   
7.          position = index
        }
            index = index + 1
    }                       //end of inner loop
8.  temp = array[iter]
9.  array[iter] = small
10. array[position] = temp
}                           // end of the outer loop 
*/

#include <iostream>

using namespace std;

void selectionSort(int [], int);    //prototype

int main(){
    int arr[50], item, usedLength, index;
    cout<<"Enter the number of elements you want to enter(max. 50): ";
    cin>>usedLength;
    cout<<"\nEnter array elements...";
    for(int i=0; i<usedLength; i++)         //Input
        cin>>arr[i]; 
    selectionSort(arr, usedLength);         //function call for sorting
    cout<<"\nThe Sorted array is ...\n";
    for(int i=0;i<usedLength;i++)           //Printing output
        cout<<arr[i]<<" ";

    return 0;
}

void selectionSort(int arr[], int size){
    int small, position, tmp;
    for(int i=0; i<size; i++){
        small = arr[i];
        for(int j=i+1;j<size;j++){
            if(arr[j]<small){
                small = arr[j];
                position = j;
            }
        }
        //swapping
        tmp = arr[i];
        arr[i] = arr[position];
        arr[position] = tmp;
        cout<<"\nArray after iteration - "<<i+1<<"\n";
        for(int k = 0; k<size;k++)              //for checking progress after each swap of elements
            cout<<arr[k]<<" ";
    }
}
/*
Time Complexity: 
Best Case: O(n^2)
Worst Case: O(n^2)

Space Complexity: O(1)
*/