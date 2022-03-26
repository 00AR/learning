#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=10, x=-1, y=n,d=0;
	//float num=4.5;
	int num=70;
	//cin>>n;
	int a[n]={10,21,42,63,74,75,86,87,98,99};
	
	int i = 0;
	for (i=0; i<n; i++){
		if (a[i] > num) {
			break;
		}
	}
	cout<<a[i]<<" "<<a[i+1];
	
	//for(int i=0; i<n; i++)
		//cin>>a[i];
	while(1){
		if(num>a[n-1]||num<a[0])
			break;
		if(a[x+1]<num)
			++x;
		else 
			break;
		if(a[y-1]>num)
			--y;
		else{
			break;d=1;}
	
	}
	d ? cout<<a[y-1]<<" "<<a[y]:cout<<a[x]<<" "<<a[x+1];
	cout<<endl;
	/*int l=0, m, h=n-1;
	while(abs(h-l)!=1){
	m=(h-l)/2;
	if(a[m]<num)
		l=m;
	if(a[m]>num)
		h=m;
	//cout<<a[l]<<" "<<a[h];
	}
	cout<<a[l]<<" "<<a[h];*/
	return 0;
}
/* 
 * x=0 y=9	
 * x=1 y=8
 * 2	7
 * 3	6
 * 4	5
 * 
 * */
