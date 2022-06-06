#include <bits/stdc++.h>
using namespace std;

void binarySearchRecur(int [], int, int, int);

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
	
	binarySearchRecur(arr, 0, n, elem);
	
	
	return 0;
}

void binarySearchRecur(int a[], int start, int end, int e){
	int mid=0;
	mid = (start+end)/2;
	if(a[mid]==e){
		cout<<"Element found at index: "<<mid;
		return;
	}	
	if(start>=end)
		return;
	if(a[mid]<e){
		start = mid+1;
		binarySearchRecur(a, start, end, e);
	} 
	if(a[mid]>e){
		end = mid-1;
		binarySearchRecur(a, start, end, e); 
	}
}
