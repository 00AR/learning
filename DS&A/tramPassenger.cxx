#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int  in, out, tot=0, max=0;
	while(n--){	
		cin>>out>>in;
		tot= abs(tot-out)+in;
		
		if(tot>max)
			max=tot;
	}
	cout<<max;
	
	return 0;
}
