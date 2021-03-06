/*
 * stringtoAbreviation.cxx
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
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++)
		cin>>s[i];
		
	for(int i=0; i<n; i++){
		if(s[i].length()<=10)
			cout<<s[i]<<"\n";
		else
			cout<<s[i].substr(0,1)<<s[i].length()-2<<s[i].substr(s[i].length()-1,1)<<"\n";
	}
	
	return 0;
}

