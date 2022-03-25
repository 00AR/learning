#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,i=0;
	cin>>n;
	while(n--){
		cin>>x;
		if(x==1)
			i=1;	
	}
	if(i)
		cout<<"HARD";
	else
		cout<<"EASY";
		
	
	return 0;
}
