//Demonstration of deleting an element in an array
#include <stdio.h>

void display(int arr[], int n){
    //Traversal
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indexDeletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    return 1;
}

int main(){
    int arr[100] = {7,8,12,27,88};
    int size = 5, element = 45, index =1;
    display(arr, size);
    indexDeletion(arr, size, index);
    size -= 1;
    display(arr,size);
}