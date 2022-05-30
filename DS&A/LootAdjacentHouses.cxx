#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int sum1=0, sum2=0;
	int arr[]={2,4,3};
	int n=sizeof(arr)/sizeof(int);
	
	for(int i=0; i<n; i+=2){
		sum1 = sum1 + arr[i];
	}
	
	for(int i=1; i<n; i+=2){
		sum2 = sum2 + arr[i];
		
	}
	
	sum1>sum2 ? cout<<sum1 : cout<<sum2;
	
	return 0;
}
