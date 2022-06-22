#include <bits/stdc++.h>
using namespace std;

void mergeSort(int [], int, int);
void merge(int [], int, int);
void printArray(int [], int);

int main(){
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	int arr[n];
	//Input
	cout<<"Enter the elements of the array: \n";
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	mergeSort(arr, 0, n-1);
	printArray(arr, n);
	
	
	return 0;
}

void merge(int a[], int left, int mid, int right){
	int a1 = mid-left+1;
	int a2 = right - mid;
	
	//temp subarrays
	int *leftArray = new int[a1];
	int *rightArray = new int[a2];
	
	//fill temp arrays
	for(int i=0; i<a1; i++)
		leftArray[i] = a[left+i];
	for(int i=0; i<a2; i++)
		rightArray[i] = a[mid+1+i];
	
	int indexofa1 = 0, indexofa2 = 0;
	int indexofmergedarray = left;
	
	// merge sorted subarrays back
	while(indexofa1 < a1 && indexofa2 < a2){
		if(leftArray[indexofa1]<= rightArray[indexofa2]){
			a[indexofmergedarray] = leftArray[indexofa1];
			indexofa1++;
		}
		else{
			a[indexofmergedarray] = rightArray[indexofa2];
			indexofa2++;
		}
		indexofmergedarray++;
	} 
	
	//copying the left over elements from subarrays
	while(indexofa1<a1){
		a[indexofmergedarray] = leftArray[indexofa1];
		indexofa1++;
		indexofmergedarray++;
	}
	while(indexofa2<a2){
		a[indexofmergedarray] = rightArray[indexofa2];
		indexofa2++;
		indexofmergedarray++;
	}
}

void mergeSort(int a[], int start, int len){
	if(start>=len)
		return;
		
	int mid = start+(len-start)/2;
	mergeSort(a, start, mid);
	mergeSort(a, mid+1, len);
	merge(a, start, mid, len);
}

void printArray(int a[], int len){
	for(int i=0; i<len; i++)
		cout<<a[i]<<" ";
}
