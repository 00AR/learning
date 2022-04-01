#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,w;
	cin>>k>>n>>w;
	int b=k*(w*(w+1)/2)-n;
	if(b>=0)
		cout<<b;
	else
		cout<<"0";
	
	return 0;
}
