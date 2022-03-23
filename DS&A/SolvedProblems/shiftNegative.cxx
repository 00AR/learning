#include <iostream>
using namespace std;
void swap(int *, int *);

int main(int argc, char **argv)
{
	int t; //no of elements in array
	cin>>t;
	int arr[t];
	for(int i=0; i<t;i++)
		cin>>arr[i];
	/*//works
	for(int i=0; i<t;i++){
		if(arr[i]>0){
			for(int j=i; j<t; j++){
				if(arr[j]<0)
					swap(arr[i], arr[j]);
			}
		}
	}
	*/
	int l=0, m=0, h=t-1;
	while(m<=h){
		if(arr[m]<0){
			swap(arr[l++],arr[m++]);
		}
		else
			swap(arr[h--],arr[m++]);
			//m++;
	}
	
	for(int i=0; i<t;i++)
		cout<<arr[i]<<" ";
	return 0;
}

void swap(int *a, int *b){
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
