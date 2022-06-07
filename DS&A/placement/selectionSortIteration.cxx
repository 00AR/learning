#include <bits/stdc++.h>
using namespace std;

void selectionSort(int [], int);
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
		
	selectionSort(arr, n);
	printArray(arr, n);
	
	return 0;
}

void selectionSort(int a[], int len){
	int smallest=0;
	
	for(int i=0; i<len-1; i++){
		smallest = i;
		for(int j=i+1; j<len; j++){
			if(a[j]<a[smallest]){
				smallest = j;
			}
		}
		swap(a[smallest], a[i]);
	}
	
}

void printArray(int a[], int len){
	for(int i=0; i<len; i++)
		cout<<a[i]<<" ";
}
