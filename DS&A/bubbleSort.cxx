//Algorithm for Bubble Sort
/*
1.  FOR iter1 = 0 TO size
2.{     FOR iter2 = 0 TO [(size-1)-iter1]
3.      {   if arr[iter2] > arr[iter2+1] THEN
            {
4.              temp = arr[iter2]   
5.              arr[iter2] = arr[iter2+1]
6.              arr[iter2+1] = temp
            }
        }
   }
*/

#include <iostream>
using namespace std;

void bubbleSort(int [], int);   //prototype

int main(){
    int arr[50], item, usedLength;
    cout<<"Enter the number of elements you want to enter(max. 50): ";
    cin>>usedLength;
    cout<<"\nEnter array elements..\n";     //input
    for(int i=0; i<usedLength;i++)
        cin>>arr[i];

    bubbleSort(arr, usedLength);

    cout<<"\nArray after sorting: \n";
    for(int i=0; i<usedLength;i++)          //output
        cout<<arr[i]<<" ";
    return 0;
}

void bubbleSort(int arr[], int size){
    int tmp, counter = 0;
    
    for(int i = 0; i < size;i++){
        for(int j=0; j<((size-1)-i); j++){
            if(arr[j]>arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
        cout<<"\nState of array after iteration - "<<++counter<<"\n";   
        for(int k=0; k<size;k++)            //checking status after each iteration
            cout<<arr[k]<<" ";
    }
}

/*
Time Complexity: 
Best Case: O(n)
Worst Case: O(n^2)

Space Complexity: O(1)
*/