#include <bits/stdc++.h>
using namespace std;

void segregateEvenOddBubbleSort(int [], int);
int binarySearch(int [], int, int);

int main(int argc, char **argv)
{
	int a[] = {3,2,8,1,4,6,9,5};
	int n = sizeof(a)/sizeof(int);
	
	segregateEvenOddBubbleSort(a, n);
	
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
		
	int x;
	cout<<"\nEnter element to be search: ";
	cin>>x;
	int f = binarySearch(a, n, x);
	if(f==-1)
		cout<<"Not found";
	else
		cout<<"Found at index "<<f;
		
	return 0;
}

void segregateEvenOddBubbleSort(int a[], int n){
	int botheven = 0;
	int bothodd = 0;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			botheven = (a[j]%2==0 && a[j+1]%2==0);
			bothodd = (a[j]%2==1 && a[j+1]%2==1);
			
			if(a[j]%2==1 && a[j+1]%2==0){
				swap(a[j], a[j+1]);
			}
			if(botheven || bothodd){
				if(a[j]>a[j+1])
					swap(a[j], a[j+1]);
			}
		}
	}
}

int binarySearch(int a[], int n, int x){
	int start = 0;
	int end = n;
	int mid,i=0;
	
	while(true){
		if(a[i]%2==1)
			break;
		i++;
	}
	
	if(x%2==1)
		start = i;
	else
		end = i-1;
		
	while(start<=end){
		mid = (start+end)/2;
		if(a[mid] == x)
			return mid;
		else{
			if(x<a[mid])
				end = mid-1;
			if(x>a[mid])
				start = mid+1;
		}
	}
	return -1;
}
