#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int [], int, int, int);
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
		
	bubbleSort(arr, n, 0, n);
	printArray(arr, n);

	
	return 0;
}

void bubbleSort(int a[], int i, int j, int len){
	if(i==1)
		return;
	if(j!=len-1){
		if(a[j]>a[j+1])
			swap(a[j], a[j+1]);
		else	
			bubbleSort(a, i, ++j, len);
	}
	bubbleSort(a, --i, 0, len);
}

void printArray(int a[], int len){
	for(int i=0; i<len; i++)
		cout<<a[i]<<" ";
}
