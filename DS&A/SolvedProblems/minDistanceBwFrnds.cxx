/*
 * minDistanceBwFrnds.cxx
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

int min(int n1, int n2, int n3){
	if((n1 <= n2) && (n1 <= n3))
        return n1;
    else if ((n2 <= n1) && (n2 <= n3))
        return n2;
    else
        return n3;
}
int max(int n1, int n2, int n3){
	if((n1 >= n2) && (n1 >= n3))
        return n1;
    else if ((n2 >= n1) && (n2 >= n3))
        return n2;
    else
        return n3;
}
int main(int argc, char **argv)
{
	int a,b,c, m,n;
	cin>>a>>b>>c;
	m = min(a,b,c);
	n = max(a,b,c);
	
	cout<<n-m;
	return 0;
}

