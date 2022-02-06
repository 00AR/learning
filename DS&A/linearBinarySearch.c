// Program for linear search and binary search
// Linear search can work on Sorted as well Unsorted array
// Binary search only works with Sorted array

#include <stdio.h>

int linearSearch(int arr[], int size, int element){
    for (int i=0; i<size; i++){
        if(arr[i]==element)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==element)
            return mid;
        else if(arr[mid]<element)
            low = mid+1;
        else   
            high = mid-1;
    }
    return -1;
}

int main(){
    int arr1[] = {1,3,5,56,4,3,23,5,4,54634,56,34}; //array for linear search
    int arr2[] = {1,3,5,56,64,73,123,225,444};       //sorted for binary search
    //Linear Search
    printf("Linear Search");
    int size = sizeof(arr1)/sizeof(int);
    int element = 54;
    int searchIndex = linearSearch(arr1, size, element);
    (searchIndex!=-1)?
        printf("\nThe element %d is found at index %d\n", element, searchIndex)
                    :
        printf("\nElement not found!!!\n");
    
    //Binary Search
    printf("Binary Search");
    size = sizeof(arr2)/sizeof(int);
    element = 123;
    searchIndex = binarySearch(arr2, size, element);
    (searchIndex!=-1)?
        printf("\nThe element %d is found at index %d in sorted array", element, searchIndex)
                       :
        printf("\nElement not found!!!");
    return 0;
}