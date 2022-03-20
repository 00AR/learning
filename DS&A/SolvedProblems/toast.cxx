/*
 * toast.cxx
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
#include<iostream>
using namespace std;

int minofthree(int,int,int);

int main()
{
	//int n, k, l,c,d,p,nl,np;
	int n=5, k=100, l=10,c=1,d=19,p=90,nl=4,np=3;
	int x, y, z;
	x=k*l/nl;
	y=c*d;
	z=p/np;
	cout<<minofthree(x,y,z)/n;
	return 0;
}

int minofthree(int n1, int n2, int n3){
	if((n1 <= n2) && (n1 <= n3))
        return n1;
    else if ((n2 <= n1) && (n2 <= n3))
        return n2;
    else
        return n3;
}

