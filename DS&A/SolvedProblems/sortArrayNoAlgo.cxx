/*
 * sortArrayNoAlgo.cxx
 * 
 * Copyright 2022 Shawn <shawn@shawn-HP-Pavilion-g6-Notebook-PC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

/*
#include <iostream>
using namespace std;

//sort array without sorting algorithm.
//only three types of element 0,1 and 2 are present 
int main(int argc, char **argv)
{
	int arr[3]={0,0,0}, x, n;
	
	cout<<"Enter the no. of elements in array: ";
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for(int i=0; i<n;i++){
		cin>>x;
		arr[x] +=1;
	}
	for(int i=0; i<3; i++){
		for(int j=1; j<=arr[i]; j++){
			cout<<i;
		}
	}
	return 0;
}

*/

// { Driver Code Starts
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
		int x=0,y=0, z=0;
		for(int i=0; i<n;i++){
			if(a[i]==0)
				++x;
			else if(a[i]==1)
				++y;
			else
				++z;
				//cout<<a[i];
		}
		cout<<x<<y<<z<<endl;
		int j=0;
		
		while(x!=0){
			a[j]=0;
			j++;
			--x;
		}
		while(y!=0){
			a[j]=1;
			j++;
			--y;
		}
		while(z!=0){
			a[j]=2;
			j++;
			--z;
		}
    }
    
};

// { Driver Code Starts.
int main() {

    //int t;
    //cin >> t;

    //while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    //}
    return 0;
}

  // } Driver Code Ends
