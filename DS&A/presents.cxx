#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,y;
	cin>>n;
	int x=1, arr[n];
	for(int i=0; i<n;i++){
		cin>>y;
		arr[y-1]=x;
		x++;
	}
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	
	return 0;
}
