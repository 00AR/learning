/*
Input

The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. 
* The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). 
* The integers are separated by a space, si is the number of children in the i-th group.
Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.
 */
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	int n, m, a[]={0,0,0,0};
	int ct=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>m;
		a[m-1]++;
		//cout<<a[m-1];
	}
	
	ct = a[3]+a[2];
	//cout<<ct<<endl;
	ct=ct+a[1]/2+a[1]%2;
	a[1]%=2;
	a[0] = (a[0]-a[2]-(a[1]*2));
	
	if(a[0]>0){
		if(a[0]<5)
			ct++;
		else{
			ct=ct + a[0]/4;
			if(a[0]%4)
				ct++;
		}
	}
	
	cout<<ct<<endl;
	
	return 0;
}

