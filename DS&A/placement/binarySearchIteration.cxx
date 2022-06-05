#include <bits/stdc++.h>
using namespace std;

void binarySearch(int [], int, int);

int main(){
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	int arr[n], elem;
	//Input
	cout<<"Enter the elements of the array: \n";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	cout<<"Enter the element to Search: ";
	cin>>elem;
	
	binarySearch(arr, n, elem);
	
	
	return 0;
}

void binarySearch(int a[], int len, int e){
	int start=0, end = len-1;
	int mid=0;
	while(start<=end){	
		mid = (start+end)/2;
		if(a[mid]<e)
			start = mid+1;
		if(a[mid]>e)
			end = mid-1;
		if(a[mid]==e){
			cout<<"Element found at index: "<<mid;
			return;
		}
	}
}
