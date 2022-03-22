/*
 * roundNumbers.cxx
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


#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{	
	int t, w=1,r;
	cin>>t;
	int arr[t];
	vector<int> v[t];
	for(int i=0; i<t;i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<t;i++){
		while(arr[i]!=0){
			r = arr[i]%10;
			if(r==0){
				arr[i]/=10;
				w*=10;
				continue;
			}
			v[i].push_back(r*w);
			arr[i]/=10;
			w*=10;
		}
		w=1;
		cout<<v[i].size()<<endl;
		for(const int& j: v[i]){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

