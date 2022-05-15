/*
 * belt.cxx
 * 
 * Copyright 2022 ar <ar@ar>
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
#include <string.h>
using namespace std;

int main(int argc, char **argv)
{	
	int t;
	cin>>t;
	int m,n, ct=0;
	
	while(t--){
		cin>>m>>n;
		if(m==1 && n==1){
			cout<<ct<<endl;
			continue;
		}
		string str;
		for(int i=0; i<m; i++){
			cin>>str;
			if(str[n-1]=='R')
				ct++;
			if(i==(m-1)){
				for(int i=0; i<n; i++){
					if(str[i]=='D')
						ct++;
				}
			}
		}
		cout<<ct<<endl;
		ct=0;
	}
	return 0;
}

