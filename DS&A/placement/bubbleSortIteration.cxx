#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int [], int);
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
		
	bubbleSort(arr, n);
	printArray(arr, n);

	
	return 0;
}

void bubbleSort(int a[], int len){
	for(int i=0; i<len-1; i++){
		for(int j=0; j<len-i-1; j++){
			if(a[j]>a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}
void printArray(int a[], int len){
	for(int i=0; i<len; i++)
		cout<<a[i]<<" ";
}
