#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long num;
	cin>>num;
	int counter=0;
	while(num!=0){
		if(num%10==4||num%10==7)
			counter++;
		num/=10;
	}
	if(counter==4||counter==7)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}
