/*
 * snakeandfox.cxx
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
using namespace std;

int main(int argc, char **argv)
{
	int n, m;
	cin>>n>>m;
	int x=1;
	
	for(int i=1; i<=n;i++){
					if(i%2==0)
						x = abs(x-m)+1;
		for(int j=1; j<=m; j++){
			if(i%2==0){
				if(j==x){
					cout<<"#";
				}
				else
					cout<<".";
			}
			else cout<<"#";
		}
		cout<<endl;
	}
	
	
	return 0;
}

