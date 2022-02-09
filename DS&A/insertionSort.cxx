//Algorithm for Insertion Sort
/*
// arr[0] is chosen as the sentinel element. arr[0] is assigned 
// the minimum possible integer value(INT_MIN in C++)
1. arr[0] = INT_MIN
2. Repeat steps 3 through 8  for k = 1,2,3,.,N
    {
3.      temp = arr[k]
4.      ptr = k-1
5.      Repeat 6 to 7 while temp < arr[ptr]
        {
6.          arr[ptr+1] = arr[ptr]       //moves element forward
7.          ptr = ptr - 1;
        }
8.      arr[ptr+1] = temp
    }
9.  END
*/

#include <iostream>
#include <climits>      // for INT_MIN
using namespace std;

void insertionSort(int [], int);	// prototype for Insertion Sort

int main(){
    int arr[50], usedLength;			//usedLength is no. of elements to be filled in the array
    cout<<"Enter the number of elements you want to enter(max. 50): ";
    cin>>usedLength;
    cout<<"\nEnter the elements... ";
    for(int i=1; i<=usedLength;i++)
        cin>>arr[i];
    
    insertionSort(arr, usedLength);

    cout<<"\n\n The sorted array is : \n";
    for(int i=1; i<=usedLength;i++)
        cout<<arr[i]<<" ";
    return 0;
}

void insertionSort(int arr[], int size){
    int tmp, j;
    arr[0] = INT_MIN;
    for(int i=1; i<=size; i++){
        tmp = arr[i];
        j = i-1;
        while(tmp <arr[j]){
            arr[j+1] = arr[j];			//Moves element forward
            j--;
        }
        arr[j+1] = tmp;
        cout<<"Array after iteration - "<<i<<" - is: ";
        for(int k=1; k<=size;k++)	//checking the change in array after every iteration
            cout<<arr[k]<<" ";
        cout<<endl;
    }
}
