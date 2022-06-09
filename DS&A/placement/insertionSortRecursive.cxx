#include <bits/stdc++.h>
using namespace std;

void insertionSort(int [], int, int);
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
		
	insertionSort(arr, 0, n);
	printArray(arr, n);

	return 0;
}

void insertionSort(int a[], int i, int len){
	if(i==len)
		return;
	int j=i-1;
	int key = a[i];

	while(j>=0 && a[j]>key){
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = key;
	insertionSort(a, ++i, len);
}

void printArray(int a[], int len){
	for(int i=0; i<len; i++)
		cout<<a[i]<<" ";
}
