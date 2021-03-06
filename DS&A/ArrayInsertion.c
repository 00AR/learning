//Demonstration of inserting an element in an array
#include <stdio.h>

void display(int arr[], int n){
    //Traversal
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indexInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;//insertion unsuccessful
    }

    for(int i=size-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {7,8,12,27,88};
    int size = 5, element = 45, index =3;
    display(arr, size);
    if(indexInsertion(arr, size, element, 100, index))
        printf("Element inserted successfully!\n");
    else
        printf("Insertion Unsuccessful!!!\n");

    size += 1;
    display(arr,size);
}

/*
Time Complexity: 
Best Case: O(1)
Worst Case: O(n)

Space Complexity: O(1)
*/