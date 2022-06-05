#include <bits/stdc++.h>
using namespace std;

void linearSearch(int[], int, int);

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
	
	linearSearch(arr, n, elem);
	
	return 0;
}

void linearSearch(int a[], int n, int e){
	//zero based index
	for(int i=0; i<n; i++){
		if(a[i]==e){
			cout<<"Element found at index: "<<i;
			break;
		}  
	}
}
